// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotorStatusArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor_status_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS_ARRAY__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/servo_motor_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoMotorStatusArray_status
{
public:
  explicit Init_ServoMotorStatusArray_status(::masc_chassis_msgs::msg::ServoMotorStatusArray & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::ServoMotorStatusArray status(::masc_chassis_msgs::msg::ServoMotorStatusArray::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotorStatusArray msg_;
};

class Init_ServoMotorStatusArray_header
{
public:
  Init_ServoMotorStatusArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoMotorStatusArray_status header(::masc_chassis_msgs::msg::ServoMotorStatusArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoMotorStatusArray_status(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ServoMotorStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::ServoMotorStatusArray>()
{
  return masc_chassis_msgs::msg::builder::Init_ServoMotorStatusArray_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_STATUS_ARRAY__BUILDER_HPP_
