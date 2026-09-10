// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/drive_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveMotorStatus_driver_fault
{
public:
  explicit Init_DriveMotorStatus_driver_fault(::masc_chassis_msgs::msg::DriveMotorStatus & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::DriveMotorStatus driver_fault(::masc_chassis_msgs::msg::DriveMotorStatus::_driver_fault_type arg)
  {
    msg_.driver_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatus msg_;
};

class Init_DriveMotorStatus_driver_temperature
{
public:
  explicit Init_DriveMotorStatus_driver_temperature(::masc_chassis_msgs::msg::DriveMotorStatus & msg)
  : msg_(msg)
  {}
  Init_DriveMotorStatus_driver_fault driver_temperature(::masc_chassis_msgs::msg::DriveMotorStatus::_driver_temperature_type arg)
  {
    msg_.driver_temperature = std::move(arg);
    return Init_DriveMotorStatus_driver_fault(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatus msg_;
};

class Init_DriveMotorStatus_motor_temperature
{
public:
  explicit Init_DriveMotorStatus_motor_temperature(::masc_chassis_msgs::msg::DriveMotorStatus & msg)
  : msg_(msg)
  {}
  Init_DriveMotorStatus_driver_temperature motor_temperature(::masc_chassis_msgs::msg::DriveMotorStatus::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return Init_DriveMotorStatus_driver_temperature(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatus msg_;
};

class Init_DriveMotorStatus_index
{
public:
  explicit Init_DriveMotorStatus_index(::masc_chassis_msgs::msg::DriveMotorStatus & msg)
  : msg_(msg)
  {}
  Init_DriveMotorStatus_motor_temperature index(::masc_chassis_msgs::msg::DriveMotorStatus::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DriveMotorStatus_motor_temperature(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatus msg_;
};

class Init_DriveMotorStatus_header
{
public:
  Init_DriveMotorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveMotorStatus_index header(::masc_chassis_msgs::msg::DriveMotorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriveMotorStatus_index(msg_);
  }

private:
  ::masc_chassis_msgs::msg::DriveMotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::DriveMotorStatus>()
{
  return masc_chassis_msgs::msg::builder::Init_DriveMotorStatus_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__BUILDER_HPP_
