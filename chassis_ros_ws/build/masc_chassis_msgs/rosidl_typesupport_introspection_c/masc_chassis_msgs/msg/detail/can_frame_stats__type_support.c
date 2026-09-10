// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "masc_chassis_msgs/msg/detail/can_frame_stats__rosidl_typesupport_introspection_c.h"
#include "masc_chassis_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.h"


// Include directives for member types
// Member `can_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  masc_chassis_msgs__msg__CanFrameStats__init(message_memory);
}

void masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_fini_function(void * message_memory)
{
  masc_chassis_msgs__msg__CanFrameStats__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_member_array[6] = {
  {
    "can_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CanFrameStats, can_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CanFrameStats, rx_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parse_error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CanFrameStats, parse_error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drop_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CanFrameStats, drop_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CanFrameStats, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_rx_age_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CanFrameStats, last_rx_age_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_members = {
  "masc_chassis_msgs__msg",  // message namespace
  "CanFrameStats",  // message name
  6,  // number of fields
  sizeof(masc_chassis_msgs__msg__CanFrameStats),
  false,  // has_any_key_member_
  masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_member_array,  // message members
  masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_init_function,  // function to initialize message memory (memory has to be allocated)
  masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_type_support_handle = {
  0,
  &masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_members,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_hash,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_masc_chassis_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, msg, CanFrameStats)() {
  if (!masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_type_support_handle.typesupport_identifier) {
    masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &masc_chassis_msgs__msg__CanFrameStats__rosidl_typesupport_introspection_c__CanFrameStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
