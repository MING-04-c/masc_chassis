#include <algorithm>
#include <cmath>
#include <memory>

#include <geometry_msgs/msg/pose2_d.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>

namespace {
double clamp(double value, double low, double high) { return std::max(low, std::min(value, high)); }
double wrap_angle(double value) {
  while (value > M_PI) value -= 2.0 * M_PI;
  while (value < -M_PI) value += 2.0 * M_PI;
  return value;
}
double yaw_from_quaternion(const geometry_msgs::msg::Quaternion &q) {
  return std::atan2(2.0 * (q.w * q.z + q.x * q.y), 1.0 - 2.0 * (q.y * q.y + q.z * q.z));
}
}

class TargetPidController final : public rclcpp::Node {
public:
  TargetPidController() : Node("target_pid_controller") {
    kp_xy_ = declare_parameter("kp_xy", 0.8); ki_xy_ = declare_parameter("ki_xy", 0.0); kd_xy_ = declare_parameter("kd_xy", 0.05);
    kp_yaw_ = declare_parameter("kp_yaw", 1.2); ki_yaw_ = declare_parameter("ki_yaw", 0.0); kd_yaw_ = declare_parameter("kd_yaw", 0.05);
    position_deadband_ = declare_parameter("position_deadband", 0.03); yaw_deadband_ = declare_parameter("yaw_deadband", 0.05);
    max_speed_ = declare_parameter("max_linear_speed", 0.5); max_yaw_speed_ = declare_parameter("max_angular_speed", 0.8);
    integral_limit_ = declare_parameter("integral_limit", 1.0); control_period_ = declare_parameter("control_period", 0.02);
    odom_sub_ = create_subscription<nav_msgs::msg::Odometry>("wheel_odom", 10, [this](nav_msgs::msg::Odometry::ConstSharedPtr m) { odom_ = *m; have_odom_ = true; });
    target_sub_ = create_subscription<geometry_msgs::msg::Pose2D>("target_pose", 10, [this](geometry_msgs::msg::Pose2D::ConstSharedPtr m) { target_ = *m; have_target_ = true; integral_x_ = integral_y_ = integral_yaw_ = previous_x_ = previous_y_ = previous_yaw_ = 0.0; reached_ = false; });
    cmd_pub_ = create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
    reached_pub_ = create_publisher<std_msgs::msg::Bool>("target_reached", 10);
    timer_ = create_wall_timer(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::duration<double>(control_period_)), [this] { update(); });
  }

private:
  void update() {
    geometry_msgs::msg::Twist cmd; std_msgs::msg::Bool reached_msg; reached_msg.data = false;
    if (!have_odom_ || !have_target_) { cmd_pub_->publish(cmd); return; }
    const double x = odom_.pose.pose.position.x, y = odom_.pose.pose.position.y;
    const double yaw = yaw_from_quaternion(odom_.pose.pose.orientation);
    const double ex = target_.x - x, ey = target_.y - y, distance = std::hypot(ex, ey);
    const double eyaw = wrap_angle(target_.theta - yaw);
    if (distance <= position_deadband_ && std::fabs(eyaw) <= yaw_deadband_) {
      if (!reached_) { reached_ = true; reached_msg.data = true; reached_pub_->publish(reached_msg); RCLCPP_INFO(get_logger(), "target reached"); }
      cmd_pub_->publish(cmd); return;
    }
    const double dt = control_period_;
    integral_x_ = clamp(integral_x_ + ex * dt, -integral_limit_, integral_limit_);
    integral_y_ = clamp(integral_y_ + ey * dt, -integral_limit_, integral_limit_);
    integral_yaw_ = clamp(integral_yaw_ + eyaw * dt, -integral_limit_, integral_limit_);
    const double dx = (ex - previous_x_) / dt, dy = (ey - previous_y_) / dt, dyaw = (eyaw - previous_yaw_) / dt;
    previous_x_ = ex; previous_y_ = ey; previous_yaw_ = eyaw;
    cmd.linear.x = clamp(kp_xy_ * ex + ki_xy_ * integral_x_ + kd_xy_ * dx, -max_speed_, max_speed_);
    cmd.linear.y = clamp(kp_xy_ * ey + ki_xy_ * integral_y_ + kd_xy_ * dy, -max_speed_, max_speed_);
    cmd.angular.z = clamp(kp_yaw_ * eyaw + ki_yaw_ * integral_yaw_ + kd_yaw_ * dyaw, -max_yaw_speed_, max_yaw_speed_);
    cmd_pub_->publish(cmd);
  }
  nav_msgs::msg::Odometry odom_; geometry_msgs::msg::Pose2D target_; bool have_odom_{false}, have_target_{false}, reached_{false};
  double kp_xy_, ki_xy_, kd_xy_, kp_yaw_, ki_yaw_, kd_yaw_, position_deadband_, yaw_deadband_, max_speed_, max_yaw_speed_, integral_limit_, control_period_;
  double integral_x_{0.0}, integral_y_{0.0}, integral_yaw_{0.0}, previous_x_{0.0}, previous_y_{0.0}, previous_yaw_{0.0};
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_; rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr target_sub_; rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_pub_; rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr reached_pub_; rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv) { rclcpp::init(argc, argv); rclcpp::spin(std::make_shared<TargetPidController>()); rclcpp::shutdown(); return 0; }
