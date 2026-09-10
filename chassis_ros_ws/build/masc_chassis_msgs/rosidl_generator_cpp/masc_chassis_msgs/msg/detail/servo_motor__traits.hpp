// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/servo_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoMotor & msg,
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

  // member: calibration_state
  {
    out << "calibration_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_state, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoMotor & msg,
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

  // member: calibration_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_state, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoMotor & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::ServoMotor & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::ServoMotor & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::ServoMotor>()
{
  return "masc_chassis_msgs::msg::ServoMotor";
}

template<>
inline const char * name<masc_chassis_msgs::msg::ServoMotor>()
{
  return "masc_chassis_msgs/msg/ServoMotor";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::ServoMotor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::ServoMotor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<masc_chassis_msgs::msg::ServoMotor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__TRAITS_HPP_
