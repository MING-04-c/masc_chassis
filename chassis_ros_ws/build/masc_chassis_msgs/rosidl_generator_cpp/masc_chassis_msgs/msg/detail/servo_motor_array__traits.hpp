// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/ServoMotorArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/servo_motor_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/servo_motor_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'motors'
#include "masc_chassis_msgs/msg/detail/servo_motor__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoMotorArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motors
  {
    if (msg.motors.size() == 0) {
      out << "motors: []";
    } else {
      out << "motors: [";
      size_t pending_items = msg.motors.size();
      for (auto item : msg.motors) {
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
  const ServoMotorArray & msg,
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

  // member: motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motors.size() == 0) {
      out << "motors: []\n";
    } else {
      out << "motors:\n";
      for (auto item : msg.motors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoMotorArray & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::ServoMotorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::ServoMotorArray & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::ServoMotorArray>()
{
  return "masc_chassis_msgs::msg::ServoMotorArray";
}

template<>
inline const char * name<masc_chassis_msgs::msg::ServoMotorArray>()
{
  return "masc_chassis_msgs/msg/ServoMotorArray";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::ServoMotorArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::ServoMotorArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<masc_chassis_msgs::msg::ServoMotorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR_ARRAY__TRAITS_HPP_
