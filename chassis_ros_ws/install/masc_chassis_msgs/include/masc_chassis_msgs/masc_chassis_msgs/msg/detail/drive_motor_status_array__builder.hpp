// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotorStatusArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_status_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/drive_motor_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveMotorStatusArray_status
{
public:
  explicit Init_DriveMotorStatusArray_status(::masc_chassis_msgs::msg::DriveMotorStatusArray & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::DriveMotorStatusArray status(::masc_chassis_msgs::msg::DriveMotorStatusArray::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatusArray msg_;
};

class Init_DriveMotorStatusArray_header
{
public:
  Init_DriveMotorStatusArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveMotorStatusArray_status header(::masc_chassis_msgs::msg::DriveMotorStatusArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriveMotorStatusArray_status(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::DriveMotorStatusArray>()
{
  return masc_chassis_msgs::msg::builder::Init_DriveMotorStatusArray_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__BUILDER_HPP_
