#include <algorithm>
#include <chrono>
#include <cmath>
#include <memory>
#include <mutex>
#include <string>

#include <geometry_msgs/msg/twist.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>

#include "masc_chassis_user_control/srv/move_distance.hpp"

// 独立的上层距离控制器：不修改底层 CAN/ROS 驱动，只发布 Twist。
// 底层驱动负责把 Twist 转成 CAN 0x100；本节点用 odom 判断是否走够距离。
class DistanceController final : public rclcpp::Node {
public:
  DistanceController() : Node("masc_chassis_user_control") {
    odom_topic_ = declare_parameter("odom_topic", std::string("/wheel_odom"));
    cmd_topic_ = declare_parameter("cmd_vel_topic", std::string("/cmd_vel_nav"));
    rate_hz_ = declare_parameter("control_rate_hz", 20.0);
    odom_timeout_ms_ = declare_parameter("odom_timeout_ms", 300);
    max_speed_ = declare_parameter("max_speed_mps", 0.3);
    max_angular_speed_ = declare_parameter("max_angular_speed_radps", 1.0);
    max_duration_sec_ = declare_parameter("max_duration_sec", 30.0);
    wheel_diameter_m_ = declare_parameter("wheel_diameter_m", 0.18);
    track_width_m_ = declare_parameter("track_width_m", 0.421);
    wheel_base_m_ = declare_parameter("wheel_base_m", 0.470);
    minimum_turn_radius_m_ = declare_parameter("minimum_turn_radius_m", 0.420);

    cmd_pub_ = create_publisher<geometry_msgs::msg::Twist>(cmd_topic_, 10);
    odom_sub_ = create_subscription<nav_msgs::msg::Odometry>(
      odom_topic_, 10, std::bind(&DistanceController::odomCallback, this, std::placeholders::_1));
    move_srv_ = create_service<masc_chassis_user_control::srv::MoveDistance>(
      "~/move_distance", std::bind(&DistanceController::moveCallback, this,
                                    std::placeholders::_1, std::placeholders::_2));
    stop_srv_ = create_service<std_srvs::srv::Trigger>(
      "~/stop", std::bind(&DistanceController::stopCallback, this,
                           std::placeholders::_1, std::placeholders::_2));
    timer_ = create_wall_timer(std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::duration<double>(1.0 / std::max(1.0, rate_hz_))),
      std::bind(&DistanceController::controlLoop, this));
    RCLCPP_INFO(get_logger(), "distance controller ready; odom=%s cmd=%s", odom_topic_.c_str(), cmd_topic_.c_str());
  }

private:
  void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg) {
    std::lock_guard<std::mutex> lock(mutex_);
    const double x = msg->pose.pose.position.x;
    const double y = msg->pose.pose.position.y;
    if (has_odom_) {
      accumulated_distance_ += std::hypot(x - last_x_, y - last_y_);
    }
    last_x_ = x; last_y_ = y; has_odom_ = true;
    last_odom_time_ = now();
  }

  void moveCallback(const std::shared_ptr<masc_chassis_user_control::srv::MoveDistance::Request> req,
                    std::shared_ptr<masc_chassis_user_control::srv::MoveDistance::Response> res) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (std::abs(req->distance) < 1e-6 || req->speed <= 0.0 ||
        std::abs(req->speed) > max_speed_) {
      res->accepted = false;
      res->message = "distance must be non-zero and speed must be in (0,max_speed]";
      return;
    }
    if (req->radius != 0.0 && std::abs(req->radius) < minimum_turn_radius_m_) {
      res->accepted = false;
      res->message = "radius is smaller than configured minimum_turn_radius_m";
      return;
    }
    if (!has_odom_) {
      res->accepted = false;
      res->message = "no odometry received yet";
      return;
    }
    target_distance_ = std::abs(req->distance);
    direction_ = req->distance >= 0.0 ? 1.0 : -1.0;
    speed_ = req->speed;
    radius_ = req->radius;
    accumulated_distance_ = 0.0;
    start_time_ = now();
    running_ = true;
    res->accepted = true;
    res->message = "motion accepted";
  }

  void stopCallback(const std::shared_ptr<std_srvs::srv::Trigger::Request>,
                    std::shared_ptr<std_srvs::srv::Trigger::Response> res) {
    std::lock_guard<std::mutex> lock(mutex_);
    running_ = false;
    publishZero();
    res->success = true;
    res->message = "motion stopped";
  }

  void controlLoop() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (!running_) return;
    const double age = (now() - last_odom_time_).seconds();
    if (!has_odom_ || age * 1000.0 > odom_timeout_ms_ ||
        (now() - start_time_).seconds() > max_duration_sec_ ||
        accumulated_distance_ >= target_distance_) {
      running_ = false;
      publishZero();
      if (age * 1000.0 > odom_timeout_ms_) RCLCPP_WARN(get_logger(), "odom timeout; stopping");
      return;
    }
    geometry_msgs::msg::Twist cmd;
    cmd.linear.x = direction_ * speed_;
    if (radius_ != 0.0) {
      cmd.angular.z = direction_ * speed_ / radius_;
      cmd.angular.z = std::clamp(cmd.angular.z, -max_angular_speed_, max_angular_speed_);
    }
    cmd_pub_->publish(cmd);
  }

  void publishZero() { cmd_pub_->publish(geometry_msgs::msg::Twist{}); }

  std::string odom_topic_, cmd_topic_; double rate_hz_, max_speed_, max_angular_speed_, max_duration_sec_;
  double wheel_diameter_m_, track_width_m_, wheel_base_m_, minimum_turn_radius_m_; int odom_timeout_ms_;
  double target_distance_{0.0}, accumulated_distance_{0.0}, speed_{0.0}, radius_{0.0}, direction_{1.0};
  double last_x_{0.0}, last_y_{0.0}; bool has_odom_{false}, running_{false};
  rclcpp::Time last_odom_time_{0, 0, RCL_ROS_TIME}, start_time_{0, 0, RCL_ROS_TIME};
  std::mutex mutex_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_pub_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
  rclcpp::Service<masc_chassis_user_control::srv::MoveDistance>::SharedPtr move_srv_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr stop_srv_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DistanceController>());
  rclcpp::shutdown();
  return 0;
}
