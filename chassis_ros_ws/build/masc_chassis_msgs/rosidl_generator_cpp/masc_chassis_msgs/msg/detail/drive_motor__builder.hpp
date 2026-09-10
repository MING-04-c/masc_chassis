// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/drive_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveMotor_position
{
public:
  explicit Init_DriveMotor_position(::masc_chassis_msgs::msg::DriveMotor & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::DriveMotor position(::masc_chassis_msgs::msg::DriveMotor::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotor msg_;
};

class Init_DriveMotor_current
{
public:
  explicit Init_DriveMotor_current(::masc_chassis_msgs::msg::DriveMotor & msg)
  : msg_(msg)
  {}
  Init_DriveMotor_position current(::masc_chassis_msgs::msg::DriveMotor::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_DriveMotor_position(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotor msg_;
};

class Init_DriveMotor_speed
{
public:
  explicit Init_DriveMotor_speed(::masc_chassis_msgs::msg::DriveMotor & msg)
  : msg_(msg)
  {}
  Init_DriveMotor_current speed(::masc_chassis_msgs::msg::DriveMotor::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DriveMotor_current(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotor msg_;
};

class Init_DriveMotor_index
{
public:
  explicit Init_DriveMotor_index(::masc_chassis_msgs::msg::DriveMotor & msg)
  : msg_(msg)
  {}
  Init_DriveMotor_speed index(::masc_chassis_msgs::msg::DriveMotor::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DriveMotor_speed(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotor msg_;
};

class Init_DriveMotor_header
{
public:
  Init_DriveMotor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveMotor_index header(::masc_chassis_msgs::msg::DriveMotor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriveMotor_index(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::DriveMotor>()
{
  return masc_chassis_msgs::msg::builder::Init_DriveMotor_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR__BUILDER_HPP_
