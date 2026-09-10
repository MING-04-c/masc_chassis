// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/comm_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/msg/detail/comm_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace masc_chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: comm_state
  {
    out << "comm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_state, out);
    out << ", ";
  }

  // member: fail_reason
  {
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << ", ";
  }

  // member: motion_command_timeout_active
  {
    out << "motion_command_timeout_active: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_command_timeout_active, out);
    out << ", ";
  }

  // member: connection_attempt_count
  {
    out << "connection_attempt_count: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_attempt_count, out);
    out << ", ";
  }

  // member: transport_error_count
  {
    out << "transport_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_error_count, out);
    out << ", ";
  }

  // member: tx_error_count
  {
    out << "tx_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_error_count, out);
    out << ", ";
  }

  // member: rx_error_count
  {
    out << "rx_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_error_count, out);
    out << ", ";
  }

  // member: chassis_uuid
  {
    if (msg.chassis_uuid.size() == 0) {
      out << "chassis_uuid: []";
    } else {
      out << "chassis_uuid: [";
      size_t pending_items = msg.chassis_uuid.size();
      for (auto item : msg.chassis_uuid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: system_software_hardware_version
  {
    out << "system_software_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.system_software_hardware_version, out);
    out << ", ";
  }

  // member: chassis_type_version
  {
    out << "chassis_type_version: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_type_version, out);
    out << ", ";
  }

  // member: chassis_protocol_version
  {
    out << "chassis_protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_protocol_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommStatus & msg,
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

  // member: comm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_state, out);
    out << "\n";
  }

  // member: fail_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << "\n";
  }

  // member: motion_command_timeout_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_command_timeout_active: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_command_timeout_active, out);
    out << "\n";
  }

  // member: connection_attempt_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_attempt_count: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_attempt_count, out);
    out << "\n";
  }

  // member: transport_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_error_count, out);
    out << "\n";
  }

  // member: tx_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_error_count, out);
    out << "\n";
  }

  // member: rx_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_error_count, out);
    out << "\n";
  }

  // member: chassis_uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chassis_uuid.size() == 0) {
      out << "chassis_uuid: []\n";
    } else {
      out << "chassis_uuid:\n";
      for (auto item : msg.chassis_uuid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: system_software_hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_software_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.system_software_hardware_version, out);
    out << "\n";
  }

  // member: chassis_type_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_type_version: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_type_version, out);
    out << "\n";
  }

  // member: chassis_protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_protocol_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommStatus & msg, bool use_flow_style = false)
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
  const masc_chassis_msgs::msg::CommStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::msg::CommStatus & msg)
{
  return masc_chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::msg::CommStatus>()
{
  return "masc_chassis_msgs::msg::CommStatus";
}

template<>
inline const char * name<masc_chassis_msgs::msg::CommStatus>()
{
  return "masc_chassis_msgs/msg/CommStatus";
}

template<>
struct has_fixed_size<masc_chassis_msgs::msg::CommStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<masc_chassis_msgs::msg::CommStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<masc_chassis_msgs::msg::CommStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__TRAITS_HPP_
