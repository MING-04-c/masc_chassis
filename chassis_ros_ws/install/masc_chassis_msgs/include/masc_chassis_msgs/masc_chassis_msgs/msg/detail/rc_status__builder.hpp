// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/RcStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/rc_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/rc_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_RcStatus_channels
{
public:
  explicit Init_RcStatus_channels(::masc_chassis_msgs::msg::RcStatus & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::RcStatus channels(::masc_chassis_msgs::msg::RcStatus::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::RcStatus msg_;
};

class Init_RcStatus_online
{
public:
  explicit Init_RcStatus_online(::masc_chassis_msgs::msg::RcStatus & msg)
  : msg_(msg)
  {}
  Init_RcStatus_channels online(::masc_chassis_msgs::msg::RcStatus::_online_type arg)
  {
    msg_.online = std::move(arg);
    return Init_RcStatus_channels(msg_);
  }

private:
  ::masc_chassis_msgs::msg::RcStatus msg_;
};

class Init_RcStatus_header
{
public:
  Init_RcStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcStatus_online header(::masc_chassis_msgs::msg::RcStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RcStatus_online(msg_);
  }

private:
  ::masc_chassis_msgs::msg::RcStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::RcStatus>()
{
  return masc_chassis_msgs::msg::builder::Init_RcStatus_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__BUILDER_HPP_
