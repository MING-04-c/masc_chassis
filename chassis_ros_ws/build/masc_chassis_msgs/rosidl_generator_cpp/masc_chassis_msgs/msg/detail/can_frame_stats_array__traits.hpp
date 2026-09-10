// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/CanFrameStatsArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/can_frame_stats_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'stats'
#include "masc_chassis_msgs/msg/detail/can_frame_stats__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanFrameStatsArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stats
  {
    if (msg.stats.size() == 0) {
      out << "stats: []";
    } else {
      out << "stats: [";
      size_t pending_items = msg.stats.size();
      for (auto item : msg.stats) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanFrameStatsArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stats.size() == 0) {
      out << "stats: []\n";
    } else {
      out << "stats:\n";
      for (auto item : msg.stats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanFrameStatsArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace masc_chassis_msgs

namespace rosidl_generator_traits
{

[[deprecated("use masc_chassis_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const masc_chassis_msgs::msg::CanFrameStatsArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::CanFrameStatsArray & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::CanFrameStatsArray>()
{
  return "masc_chassis_msgs::msg::CanFrameStatsArray";
}

template<>
inline const char * name<masc_chassis_msgs::msg::CanFrameStatsArray>()
{
  return "masc_chassis_msgs/msg/CanFrameStatsArray";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::CanFrameStatsArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::CanFrameStatsArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<masc_chassis_msgs::msg::CanFrameStatsArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS_ARRAY__TRAITS_HPP_
