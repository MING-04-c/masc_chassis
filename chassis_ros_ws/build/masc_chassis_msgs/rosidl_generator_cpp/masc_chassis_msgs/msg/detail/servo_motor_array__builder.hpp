// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotorArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/servo_motor_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoMotorArray_motors
{
public:
  explicit Init_ServoMotorArray_motors(::masc_chassis_msgs::msg::ServoMotorArray & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::ServoMotorArray motors(::masc_chassis_msgs::msg::ServoMotorArray::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotorArray msg_;
};

class Init_ServoMotorArray_header
{
public:
  Init_ServoMotorArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoMotorArray_motors header(::masc_chassis_msgs::msg::ServoMotorArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoMotorArray_motors(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::ServoMotorArray>()
{
  return masc_chassis_msgs::msg::builder::Init_ServoMotorArray_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__BUILDER_HPP_
