// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/chassis_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/chassis_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisStatus_chassis_fault
{
public:
  explicit Init_ChassisStatus_chassis_fault(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::ChassisStatus chassis_fault(::masc_chassis_msgs::msg::ChassisStatus::_chassis_fault_type arg)
  {
    msg_.chassis_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_system_status_flags
{
public:
  explicit Init_ChassisStatus_system_status_flags(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_chassis_fault system_status_flags(::masc_chassis_msgs::msg::ChassisStatus::_system_status_flags_type arg)
  {
    msg_.system_status_flags = std::move(arg);
    return Init_ChassisStatus_chassis_fault(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_obstacle_status_flags
{
public:
  explicit Init_ChassisStatus_obstacle_status_flags(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_system_status_flags obstacle_status_flags(::masc_chassis_msgs::msg::ChassisStatus::_obstacle_status_flags_type arg)
  {
    msg_.obstacle_status_flags = std::move(arg);
    return Init_ChassisStatus_system_status_flags(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_main_power_active
{
public:
  explicit Init_ChassisStatus_main_power_active(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_obstacle_status_flags main_power_active(::masc_chassis_msgs::msg::ChassisStatus::_main_power_active_type arg)
  {
    msg_.main_power_active = std::move(arg);
    return Init_ChassisStatus_obstacle_status_flags(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_dock_charging
{
public:
  explicit Init_ChassisStatus_dock_charging(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_main_power_active dock_charging(::masc_chassis_msgs::msg::ChassisStatus::_dock_charging_type arg)
  {
    msg_.dock_charging = std::move(arg);
    return Init_ChassisStatus_main_power_active(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_manual_charging
{
public:
  explicit Init_ChassisStatus_manual_charging(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_dock_charging manual_charging(::masc_chassis_msgs::msg::ChassisStatus::_manual_charging_type arg)
  {
    msg_.manual_charging = std::move(arg);
    return Init_ChassisStatus_dock_charging(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_excessive_tilt
{
public:
  explicit Init_ChassisStatus_excessive_tilt(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_manual_charging excessive_tilt(::masc_chassis_msgs::msg::ChassisStatus::_excessive_tilt_type arg)
  {
    msg_.excessive_tilt = std::move(arg);
    return Init_ChassisStatus_manual_charging(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_low_battery
{
public:
  explicit Init_ChassisStatus_low_battery(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_excessive_tilt low_battery(::masc_chassis_msgs::msg::ChassisStatus::_low_battery_type arg)
  {
    msg_.low_battery = std::move(arg);
    return Init_ChassisStatus_excessive_tilt(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_brake_active
{
public:
  explicit Init_ChassisStatus_brake_active(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_low_battery brake_active(::masc_chassis_msgs::msg::ChassisStatus::_brake_active_type arg)
  {
    msg_.brake_active = std::move(arg);
    return Init_ChassisStatus_low_battery(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_motion_mode_switching
{
public:
  explicit Init_ChassisStatus_motion_mode_switching(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_brake_active motion_mode_switching(::masc_chassis_msgs::msg::ChassisStatus::_motion_mode_switching_type arg)
  {
    msg_.motion_mode_switching = std::move(arg);
    return Init_ChassisStatus_brake_active(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_current_motion_mode
{
public:
  explicit Init_ChassisStatus_current_motion_mode(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_motion_mode_switching current_motion_mode(::masc_chassis_msgs::msg::ChassisStatus::_current_motion_mode_type arg)
  {
    msg_.current_motion_mode = std::move(arg);
    return Init_ChassisStatus_motion_mode_switching(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_chassis_state
{
public:
  explicit Init_ChassisStatus_chassis_state(::masc_chassis_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_current_motion_mode chassis_state(::masc_chassis_msgs::msg::ChassisStatus::_chassis_state_type arg)
  {
    msg_.chassis_state = std::move(arg);
    return Init_ChassisStatus_current_motion_mode(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_header
{
public:
  Init_ChassisStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisStatus_chassis_state header(::masc_chassis_msgs::msg::ChassisStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChassisStatus_chassis_state(msg_);
  }

private:
  ::masc_chassis_msgs::msg::ChassisStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::ChassisStatus>()
{
  return masc_chassis_msgs::msg::builder::Init_ChassisStatus_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__BUILDER_HPP_
