// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from masc_chassis_msgs:msg/CanFrameStatsArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__BUILDER_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "masc_chassis_msgs/msg/detail/can_frame_stats_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace masc_chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_CanFrameStatsArray_stats
{
public:
  explicit Init_CanFrameStatsArray_stats(::masc_chassis_msgs::msg::CanFrameStatsArray & msg)
  : msg_(msg)
  {}
  ::masc_chassis_msgs::msg::CanFrameStatsArray stats(::masc_chassis_msgs::msg::CanFrameStatsArray::_stats_type arg)
  {
    msg_.stats = std::move(arg);
    return std::move(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStatsArray msg_;
};

class Init_CanFrameStatsArray_header
{
public:
  Init_CanFrameStatsArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanFrameStatsArray_stats header(::masc_chassis_msgs::msg::CanFrameStatsArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CanFrameStatsArray_stats(msg_);
  }

private:
  ::masc_chassis_msgs::msg::CanFrameStatsArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::masc_chassis_msgs::msg::CanFrameStatsArray>()
{
  return masc_chassis_msgs::msg::builder::Init_CanFrameStatsArray_header();
}

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__BUILDER_HPP_
