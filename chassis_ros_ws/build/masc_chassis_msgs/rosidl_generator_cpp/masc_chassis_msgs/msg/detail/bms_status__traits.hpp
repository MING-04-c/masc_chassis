// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/bms_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/bms_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BmsStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bat_soc
  {
    out << "bat_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_soc, out);
    out << ", ";
  }

  // member: bat_soh
  {
    out << "bat_soh: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_soh, out);
    out << ", ";
  }

  // member: bat_voltage
  {
    out << "bat_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_voltage, out);
    out << ", ";
  }

  // member: bat_current
  {
    out << "bat_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_current, out);
    out << ", ";
  }

  // member: bat_max_voltage
  {
    out << "bat_max_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_max_voltage, out);
    out << ", ";
  }

  // member: bat_max_current
  {
    out << "bat_max_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_max_current, out);
    out << ", ";
  }

  // member: bat_temp_max
  {
    out << "bat_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_temp_max, out);
    out << ", ";
  }

  // member: bat_temp_min
  {
    out << "bat_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_temp_min, out);
    out << ", ";
  }

  // member: bms_health
  {
    out << "bms_health: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_health, out);
    out << ", ";
  }

  // member: bms_cycle_count
  {
    out << "bms_cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cycle_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BmsStatus & msg,
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

  // member: bat_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_soc, out);
    out << "\n";
  }

  // member: bat_soh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_soh: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_soh, out);
    out << "\n";
  }

  // member: bat_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_voltage, out);
    out << "\n";
  }

  // member: bat_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_current, out);
    out << "\n";
  }

  // member: bat_max_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_max_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_max_voltage, out);
    out << "\n";
  }

  // member: bat_max_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_max_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_max_current, out);
    out << "\n";
  }

  // member: bat_temp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_temp_max, out);
    out << "\n";
  }

  // member: bat_temp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_temp_min, out);
    out << "\n";
  }

  // member: bms_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_health: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_health, out);
    out << "\n";
  }

  // member: bms_cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cycle_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BmsStatus & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::BmsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::BmsStatus & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::BmsStatus>()
{
  return "masc_chassis_msgs::msg::BmsStatus";
}

template<>
inline const char * name<masc_chassis_msgs::msg::BmsStatus>()
{
  return "masc_chassis_msgs/msg/BmsStatus";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::BmsStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::BmsStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<masc_chassis_msgs::msg::BmsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__BMS_STATUS__TRAITS_HPP_
