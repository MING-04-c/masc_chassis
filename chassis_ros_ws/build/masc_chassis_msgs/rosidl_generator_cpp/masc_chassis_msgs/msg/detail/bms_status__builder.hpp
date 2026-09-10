// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/bms_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/bms_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_BmsStatus_bms_cycle_count
{
public:
  explicit Init_BmsStatus_bms_cycle_count(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::BmsStatus bms_cycle_count(::masc_chassis_msgs::msg::BmsStatus::_bms_cycle_count_type arg)
  {
    msg_.bms_cycle_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bms_health
{
public:
  explicit Init_BmsStatus_bms_health(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bms_cycle_count bms_health(::masc_chassis_msgs::msg::BmsStatus::_bms_health_type arg)
  {
    msg_.bms_health = std::move(arg);
    return Init_BmsStatus_bms_cycle_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_temp_min
{
public:
  explicit Init_BmsStatus_bat_temp_min(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bms_health bat_temp_min(::masc_chassis_msgs::msg::BmsStatus::_bat_temp_min_type arg)
  {
    msg_.bat_temp_min = std::move(arg);
    return Init_BmsStatus_bms_health(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_temp_max
{
public:
  explicit Init_BmsStatus_bat_temp_max(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_temp_min bat_temp_max(::masc_chassis_msgs::msg::BmsStatus::_bat_temp_max_type arg)
  {
    msg_.bat_temp_max = std::move(arg);
    return Init_BmsStatus_bat_temp_min(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_max_current
{
public:
  explicit Init_BmsStatus_bat_max_current(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_temp_max bat_max_current(::masc_chassis_msgs::msg::BmsStatus::_bat_max_current_type arg)
  {
    msg_.bat_max_current = std::move(arg);
    return Init_BmsStatus_bat_temp_max(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_max_voltage
{
public:
  explicit Init_BmsStatus_bat_max_voltage(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_max_current bat_max_voltage(::masc_chassis_msgs::msg::BmsStatus::_bat_max_voltage_type arg)
  {
    msg_.bat_max_voltage = std::move(arg);
    return Init_BmsStatus_bat_max_current(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_current
{
public:
  explicit Init_BmsStatus_bat_current(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_max_voltage bat_current(::masc_chassis_msgs::msg::BmsStatus::_bat_current_type arg)
  {
    msg_.bat_current = std::move(arg);
    return Init_BmsStatus_bat_max_voltage(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_voltage
{
public:
  explicit Init_BmsStatus_bat_voltage(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_current bat_voltage(::masc_chassis_msgs::msg::BmsStatus::_bat_voltage_type arg)
  {
    msg_.bat_voltage = std::move(arg);
    return Init_BmsStatus_bat_current(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_soh
{
public:
  explicit Init_BmsStatus_bat_soh(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_voltage bat_soh(::masc_chassis_msgs::msg::BmsStatus::_bat_soh_type arg)
  {
    msg_.bat_soh = std::move(arg);
    return Init_BmsStatus_bat_voltage(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_bat_soc
{
public:
  explicit Init_BmsStatus_bat_soc(::masc_chassis_msgs::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bat_soh bat_soc(::masc_chassis_msgs::msg::BmsStatus::_bat_soc_type arg)
  {
    msg_.bat_soc = std::move(arg);
    return Init_BmsStatus_bat_soh(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

class Init_BmsStatus_header
{
public:
  Init_BmsStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsStatus_bat_soc header(::masc_chassis_msgs::msg::BmsStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BmsStatus_bat_soc(msg_);
  }

private:
  ::masc_chassis_msgs::msg::BmsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::BmsStatus>()
{
  return masc_chassis_msgs::msg::builder::Init_BmsStatus_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__BUILDER_HPP_
