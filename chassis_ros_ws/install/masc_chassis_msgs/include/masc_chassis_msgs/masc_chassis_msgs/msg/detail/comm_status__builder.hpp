// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/comm_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/comm_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_CommStatus_chassis_protocol_version
{
public:
  explicit Init_CommStatus_chassis_protocol_version(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::CommStatus chassis_protocol_version(::masc_chassis_msgs::msg::CommStatus::_chassis_protocol_version_type arg)
  {
    msg_.chassis_protocol_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_chassis_type_version
{
public:
  explicit Init_CommStatus_chassis_type_version(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_chassis_protocol_version chassis_type_version(::masc_chassis_msgs::msg::CommStatus::_chassis_type_version_type arg)
  {
    msg_.chassis_type_version = std::move(arg);
    return Init_CommStatus_chassis_protocol_version(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_system_software_hardware_version
{
public:
  explicit Init_CommStatus_system_software_hardware_version(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_chassis_type_version system_software_hardware_version(::masc_chassis_msgs::msg::CommStatus::_system_software_hardware_version_type arg)
  {
    msg_.system_software_hardware_version = std::move(arg);
    return Init_CommStatus_chassis_type_version(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_chassis_uuid
{
public:
  explicit Init_CommStatus_chassis_uuid(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_system_software_hardware_version chassis_uuid(::masc_chassis_msgs::msg::CommStatus::_chassis_uuid_type arg)
  {
    msg_.chassis_uuid = std::move(arg);
    return Init_CommStatus_system_software_hardware_version(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_rx_error_count
{
public:
  explicit Init_CommStatus_rx_error_count(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_chassis_uuid rx_error_count(::masc_chassis_msgs::msg::CommStatus::_rx_error_count_type arg)
  {
    msg_.rx_error_count = std::move(arg);
    return Init_CommStatus_chassis_uuid(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_tx_error_count
{
public:
  explicit Init_CommStatus_tx_error_count(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_rx_error_count tx_error_count(::masc_chassis_msgs::msg::CommStatus::_tx_error_count_type arg)
  {
    msg_.tx_error_count = std::move(arg);
    return Init_CommStatus_rx_error_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_transport_error_count
{
public:
  explicit Init_CommStatus_transport_error_count(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_tx_error_count transport_error_count(::masc_chassis_msgs::msg::CommStatus::_transport_error_count_type arg)
  {
    msg_.transport_error_count = std::move(arg);
    return Init_CommStatus_tx_error_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_connection_attempt_count
{
public:
  explicit Init_CommStatus_connection_attempt_count(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_transport_error_count connection_attempt_count(::masc_chassis_msgs::msg::CommStatus::_connection_attempt_count_type arg)
  {
    msg_.connection_attempt_count = std::move(arg);
    return Init_CommStatus_transport_error_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_motion_command_timeout_active
{
public:
  explicit Init_CommStatus_motion_command_timeout_active(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_connection_attempt_count motion_command_timeout_active(::masc_chassis_msgs::msg::CommStatus::_motion_command_timeout_active_type arg)
  {
    msg_.motion_command_timeout_active = std::move(arg);
    return Init_CommStatus_connection_attempt_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_fail_reason
{
public:
  explicit Init_CommStatus_fail_reason(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_motion_command_timeout_active fail_reason(::masc_chassis_msgs::msg::CommStatus::_fail_reason_type arg)
  {
    msg_.fail_reason = std::move(arg);
    return Init_CommStatus_motion_command_timeout_active(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_comm_state
{
public:
  explicit Init_CommStatus_comm_state(::masc_chassis_msgs::msg::CommStatus & msg)
  : msg_(msg)
  {}
  Init_CommStatus_fail_reason comm_state(::masc_chassis_msgs::msg::CommStatus::_comm_state_type arg)
  {
    msg_.comm_state = std::move(arg);
    return Init_CommStatus_fail_reason(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

class Init_CommStatus_header
{
public:
  Init_CommStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommStatus_comm_state header(::masc_chassis_msgs::msg::CommStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommStatus_comm_state(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CommStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::CommStatus>()
{
  return masc_chassis_msgs::msg::builder::Init_CommStatus_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__BUILDER_HPP_
