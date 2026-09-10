// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_CanFrameStats_last_rx_age_ms
{
public:
  explicit Init_CanFrameStats_last_rx_age_ms(::masc_chassis_msgs::msg::CanFrameStats & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::CanFrameStats last_rx_age_ms(::masc_chassis_msgs::msg::CanFrameStats::_last_rx_age_ms_type arg)
  {
    msg_.last_rx_age_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStats msg_;
};

class Init_CanFrameStats_frequency
{
public:
  explicit Init_CanFrameStats_frequency(::masc_chassis_msgs::msg::CanFrameStats & msg)
  : msg_(msg)
  {}
  Init_CanFrameStats_last_rx_age_ms frequency(::masc_chassis_msgs::msg::CanFrameStats::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_CanFrameStats_last_rx_age_ms(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStats msg_;
};

class Init_CanFrameStats_drop_count
{
public:
  explicit Init_CanFrameStats_drop_count(::masc_chassis_msgs::msg::CanFrameStats & msg)
  : msg_(msg)
  {}
  Init_CanFrameStats_frequency drop_count(::masc_chassis_msgs::msg::CanFrameStats::_drop_count_type arg)
  {
    msg_.drop_count = std::move(arg);
    return Init_CanFrameStats_frequency(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStats msg_;
};

class Init_CanFrameStats_parse_error_count
{
public:
  explicit Init_CanFrameStats_parse_error_count(::masc_chassis_msgs::msg::CanFrameStats & msg)
  : msg_(msg)
  {}
  Init_CanFrameStats_drop_count parse_error_count(::masc_chassis_msgs::msg::CanFrameStats::_parse_error_count_type arg)
  {
    msg_.parse_error_count = std::move(arg);
    return Init_CanFrameStats_drop_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStats msg_;
};

class Init_CanFrameStats_rx_count
{
public:
  explicit Init_CanFrameStats_rx_count(::masc_chassis_msgs::msg::CanFrameStats & msg)
  : msg_(msg)
  {}
  Init_CanFrameStats_parse_error_count rx_count(::masc_chassis_msgs::msg::CanFrameStats::_rx_count_type arg)
  {
    msg_.rx_count = std::move(arg);
    return Init_CanFrameStats_parse_error_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStats msg_;
};

class Init_CanFrameStats_can_id
{
public:
  Init_CanFrameStats_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanFrameStats_rx_count can_id(::masc_chassis_msgs::msg::CanFrameStats::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CanFrameStats_rx_count(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::CanFrameStats>()
{
  return masc_chassis_msgs::msg::builder::Init_CanFrameStats_can_id();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__BUILDER_HPP_
