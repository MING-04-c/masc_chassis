// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from masc_chassis_msgs:srv/ClearFault.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/srv/clear_fault.hpp"


#ifndef MASC_CHASSIS_MSGS__SRV__DETAIL__CLEAR_FAULT__TRAITS_HPP_
#define MASC_CHASSIS_MSGS__SRV__DETAIL__CLEAR_FAULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "masc_chassis_msgs/srv/detail/clear_fault__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace masc_chassis_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearFault_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: fault_id
  {
    out << "fault_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fault_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearFault_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_generator_traits
{

[[deprecated("use masc_chassis_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const masc_chassis_msgs::srv::ClearFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::srv::ClearFault_Request & msg)
{
  return masc_chassis_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::srv::ClearFault_Request>()
{
  return "masc_chassis_msgs::srv::ClearFault_Request";
}

template<>
inline const char * name<masc_chassis_msgs::srv::ClearFault_Request>()
{
  return "masc_chassis_msgs/srv/ClearFault_Request";
}

template<>
struct has_fixed_size<masc_chassis_msgs::srv::ClearFault_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<masc_chassis_msgs::srv::ClearFault_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<masc_chassis_msgs::srv::ClearFault_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace masc_chassis_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearFault_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearFault_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_generator_traits
{

[[deprecated("use masc_chassis_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const masc_chassis_msgs::srv::ClearFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::srv::ClearFault_Response & msg)
{
  return masc_chassis_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::srv::ClearFault_Response>()
{
  return "masc_chassis_msgs::srv::ClearFault_Response";
}

template<>
inline const char * name<masc_chassis_msgs::srv::ClearFault_Response>()
{
  return "masc_chassis_msgs/srv/ClearFault_Response";
}

template<>
struct has_fixed_size<masc_chassis_msgs::srv::ClearFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<masc_chassis_msgs::srv::ClearFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<masc_chassis_msgs::srv::ClearFault_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace masc_chassis_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearFault_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const ClearFault_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearFault_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_generator_traits
{

[[deprecated("use masc_chassis_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const masc_chassis_msgs::srv::ClearFault_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  masc_chassis_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use masc_chassis_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const masc_chassis_msgs::srv::ClearFault_Event & msg)
{
  return masc_chassis_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<masc_chassis_msgs::srv::ClearFault_Event>()
{
  return "masc_chassis_msgs::srv::ClearFault_Event";
}

template<>
inline const char * name<masc_chassis_msgs::srv::ClearFault_Event>()
{
  return "masc_chassis_msgs/srv/ClearFault_Event";
}

template<>
struct has_fixed_size<masc_chassis_msgs::srv::ClearFault_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<masc_chassis_msgs::srv::ClearFault_Event>
  : std::integral_constant<bool, has_bounded_size<masc_chassis_msgs::srv::ClearFault_Request>::value && has_bounded_size<masc_chassis_msgs::srv::ClearFault_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<masc_chassis_msgs::srv::ClearFault_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<masc_chassis_msgs::srv::ClearFault>()
{
  return "masc_chassis_msgs::srv::ClearFault";
}

template<>
inline const char * name<masc_chassis_msgs::srv::ClearFault>()
{
  return "masc_chassis_msgs/srv/ClearFault";
}

template<>
struct has_fixed_size<masc_chassis_msgs::srv::ClearFault>
  : std::integral_constant<
    bool,
    has_fixed_size<masc_chassis_msgs::srv::ClearFault_Request>::value &&
    has_fixed_size<masc_chassis_msgs::srv::ClearFault_Response>::value
  >
{
};

template<>
struct has_bounded_size<masc_chassis_msgs::srv::ClearFault>
  : std::integral_constant<
    bool,
    has_bounded_size<masc_chassis_msgs::srv::ClearFault_Request>::value &&
    has_bounded_size<masc_chassis_msgs::srv::ClearFault_Response>::value
  >
{
};

template<>
struct is_service<masc_chassis_msgs::srv::ClearFault>
  : std::true_type
{
};

template<>
struct is_service_request<masc_chassis_msgs::srv::ClearFault_Request>
  : std::true_type
{
};

template<>
struct is_service_response<masc_chassis_msgs::srv::ClearFault_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MASC_CHASSIS_MSGS__SRV__DETAIL__CLEAR_FAULT__TRAITS_HPP_
