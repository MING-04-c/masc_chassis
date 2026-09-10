// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/chassis_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/chassis_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: chassis_state
  {
    out << "chassis_state: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_state, out);
    out << ", ";
  }

  // member: current_motion_mode
  {
    out << "current_motion_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_motion_mode, out);
    out << ", ";
  }

  // member: motion_mode_switching
  {
    out << "motion_mode_switching: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_mode_switching, out);
    out << ", ";
  }

  // member: brake_active
  {
    out << "brake_active: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_active, out);
    out << ", ";
  }

  // member: low_battery
  {
    out << "low_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.low_battery, out);
    out << ", ";
  }

  // member: excessive_tilt
  {
    out << "excessive_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.excessive_tilt, out);
    out << ", ";
  }

  // member: manual_charging
  {
    out << "manual_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_charging, out);
    out << ", ";
  }

  // member: dock_charging
  {
    out << "dock_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_charging, out);
    out << ", ";
  }

  // member: main_power_active
  {
    out << "main_power_active: ";
    rosidl_generator_traits::value_to_yaml(msg.main_power_active, out);
    out << ", ";
  }

  // member: obstacle_status_flags
  {
    out << "obstacle_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_status_flags, out);
    out << ", ";
  }

  // member: system_status_flags
  {
    out << "system_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.system_status_flags, out);
    out << ", ";
  }

  // member: chassis_fault
  {
    out << "chassis_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisStatus & msg,
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

  // member: chassis_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_state: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_state, out);
    out << "\n";
  }

  // member: current_motion_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_motion_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_motion_mode, out);
    out << "\n";
  }

  // member: motion_mode_switching
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_mode_switching: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_mode_switching, out);
    out << "\n";
  }

  // member: brake_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_active: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_active, out);
    out << "\n";
  }

  // member: low_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.low_battery, out);
    out << "\n";
  }

  // member: excessive_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "excessive_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.excessive_tilt, out);
    out << "\n";
  }

  // member: manual_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_charging, out);
    out << "\n";
  }

  // member: dock_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_charging, out);
    out << "\n";
  }

  // member: main_power_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_power_active: ";
    rosidl_generator_traits::value_to_yaml(msg.main_power_active, out);
    out << "\n";
  }

  // member: obstacle_status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_status_flags, out);
    out << "\n";
  }

  // member: system_status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.system_status_flags, out);
    out << "\n";
  }

  // member: chassis_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisStatus & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::ChassisStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::ChassisStatus & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::ChassisStatus>()
{
  return "masc_chassis_msgs::msg::ChassisStatus";
}

template<>
inline const char * name<masc_chassis_msgs::msg::ChassisStatus>()
{
  return "masc_chassis_msgs/msg/ChassisStatus";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::ChassisStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::ChassisStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<masc_chassis_msgs::msg::ChassisStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__CHASSIS_STATUS__TRAITS_HPP_
