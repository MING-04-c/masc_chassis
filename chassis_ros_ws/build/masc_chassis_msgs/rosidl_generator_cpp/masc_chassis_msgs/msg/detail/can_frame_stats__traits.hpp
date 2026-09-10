// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/can_frame_stats.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanFrameStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: rx_count
  {
    out << "rx_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_count, out);
    out << ", ";
  }

  // member: parse_error_count
  {
    out << "parse_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.parse_error_count, out);
    out << ", ";
  }

  // member: drop_count
  {
    out << "drop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_count, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: last_rx_age_ms
  {
    out << "last_rx_age_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.last_rx_age_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanFrameStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: rx_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_count, out);
    out << "\n";
  }

  // member: parse_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parse_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.parse_error_count, out);
    out << "\n";
  }

  // member: drop_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_count, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: last_rx_age_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_rx_age_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.last_rx_age_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanFrameStats & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::CanFrameStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::CanFrameStats & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::CanFrameStats>()
{
  return "masc_chassis_msgs::msg::CanFrameStats";
}

template<>
inline const char * name<masc_chassis_msgs::msg::CanFrameStats>()
{
  return "masc_chassis_msgs/msg/CanFrameStats";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::CanFrameStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::CanFrameStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<masc_chassis_msgs::msg::CanFrameStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CAN_FRAME_STATS__TRAITS_HPP_
