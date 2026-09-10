// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/servo_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoMotor_current
{
public:
  explicit Init_ServoMotor_current(::masc_chassis_msgs::msg::ServoMotor & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::ServoMotor current(::masc_chassis_msgs::msg::ServoMotor::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotor msg_;
};

class Init_ServoMotor_angle
{
public:
  explicit Init_ServoMotor_angle(::masc_chassis_msgs::msg::ServoMotor & msg)
  : msg_(msg)
  {}
  Init_ServoMotor_current angle(::masc_chassis_msgs::msg::ServoMotor::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_ServoMotor_current(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotor msg_;
};

class Init_ServoMotor_calibration_state
{
public:
  explicit Init_ServoMotor_calibration_state(::masc_chassis_msgs::msg::ServoMotor & msg)
  : msg_(msg)
  {}
  Init_ServoMotor_angle calibration_state(::masc_chassis_msgs::msg::ServoMotor::_calibration_state_type arg)
  {
    msg_.calibration_state = std::move(arg);
    return Init_ServoMotor_angle(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotor msg_;
};

class Init_ServoMotor_index
{
public:
  explicit Init_ServoMotor_index(::masc_chassis_msgs::msg::ServoMotor & msg)
  : msg_(msg)
  {}
  Init_ServoMotor_calibration_state index(::masc_chassis_msgs::msg::ServoMotor::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_ServoMotor_calibration_state(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotor msg_;
};

class Init_ServoMotor_header
{
public:
  Init_ServoMotor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoMotor_index header(::masc_chassis_msgs::msg::ServoMotor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoMotor_index(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::ServoMotor>()
{
  return masc_chassis_msgs::msg::builder::Init_ServoMotor_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__BUILDER_HPP_
