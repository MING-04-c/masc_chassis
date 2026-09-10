// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace masc_chassis_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CanFrameStats_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) masc_chassis_msgs::msg::CanFrameStats(_init);
}

void CanFrameStats_fini_function(void * message_memory)
{
  auto typed_message = static_cast<masc_chassis_msgs::msg::CanFrameStats *>(message_memory);
  typed_message->~CanFrameStats();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CanFrameStats_message_member_array[6] = {
  {
    "can_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::CanFrameStats, can_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rx_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::CanFrameStats, rx_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parse_error_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::CanFrameStats, parse_error_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drop_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::CanFrameStats, drop_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frequency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::CanFrameStats, frequency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_rx_age_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::CanFrameStats, last_rx_age_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CanFrameStats_message_members = {
  "masc_chassis_msgs::msg",  // message namespace
  "CanFrameStats",  // message name
  6,  // number of fields
  sizeof(masc_chassis_msgs::msg::CanFrameStats),
  false,  // has_any_key_member_
  CanFrameStats_message_member_array,  // message members
  CanFrameStats_init_function,  // function to initialize message memory (memory has to be allocated)
  CanFrameStats_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CanFrameStats_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CanFrameStats_message_members,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_hash,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace masc_chassis_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::msg::CanFrameStats>()
{
  return &::masc_chassis_msgs::msg::rosidl_typesupport_introspection_cpp::CanFrameStats_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, masc_chassis_msgs, msg, CanFrameStats)() {
  return &::masc_chassis_msgs::msg::rosidl_typesupport_introspection_cpp::CanFrameStats_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
