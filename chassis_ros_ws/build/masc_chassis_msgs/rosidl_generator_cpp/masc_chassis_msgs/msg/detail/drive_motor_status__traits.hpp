// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/drive_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DriveMotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: motor_temperature
  {
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << ", ";
  }

  // member: driver_temperature
  {
    out << "driver_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_temperature, out);
    out << ", ";
  }

  // member: driver_fault
  {
    out << "driver_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveMotorStatus & msg,
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

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << "\n";
  }

  // member: driver_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_temperature, out);
    out << "\n";
  }

  // member: driver_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveMotorStatus & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::DriveMotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::DriveMotorStatus & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::DriveMotorStatus>()
{
  return "masc_chassis_msgs::msg::DriveMotorStatus";
}

template<>
inline const char * name<masc_chassis_msgs::msg::DriveMotorStatus>()
{
  return "masc_chassis_msgs/msg/DriveMotorStatus";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::DriveMotorStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::DriveMotorStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<masc_chassis_msgs::msg::DriveMotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS__TRAITS_HPP_
