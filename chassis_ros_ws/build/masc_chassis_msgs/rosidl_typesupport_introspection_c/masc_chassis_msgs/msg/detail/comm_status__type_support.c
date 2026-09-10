// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "masc_chassis_msgs/msg/detail/comm_status__rosidl_typesupport_introspection_c.h"
#include "masc_chassis_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "masc_chassis_msgs/msg/detail/comm_status__functions.h"
#include "masc_chassis_msgs/msg/detail/comm_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  masc_chassis_msgs__msg__CommStatus__init(message_memory);
}

void masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_fini_function(void * message_memory)
{
  masc_chassis_msgs__msg__CommStatus__fini(message_memory);
}

size_t masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__size_function__CommStatus__chassis_uuid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__get_const_function__CommStatus__chassis_uuid(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__get_function__CommStatus__chassis_uuid(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__fetch_function__CommStatus__chassis_uuid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__get_const_function__CommStatus__chassis_uuid(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__assign_function__CommStatus__chassis_uuid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__get_function__CommStatus__chassis_uuid(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "comm_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, comm_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fail_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, fail_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_command_timeout_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, motion_command_timeout_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connection_attempt_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, connection_attempt_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transport_error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, transport_error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, tx_error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, rx_error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chassis_uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, chassis_uuid),  // bytes offset in struct
    NULL,  // default value
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__size_function__CommStatus__chassis_uuid,  // size() function pointer
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__get_const_function__CommStatus__chassis_uuid,  // get_const(index) function pointer
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__get_function__CommStatus__chassis_uuid,  // get(index) function pointer
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__fetch_function__CommStatus__chassis_uuid,  // fetch(index, &value) function pointer
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__assign_function__CommStatus__chassis_uuid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system_software_hardware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, system_software_hardware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chassis_type_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, chassis_type_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chassis_protocol_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__CommStatus, chassis_protocol_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_members = {
  "masc_chassis_msgs__msg",  // message namespace
  "CommStatus",  // message name
  12,  // number of fields
  sizeof(masc_chassis_msgs__msg__CommStatus),
  false,  // has_any_key_member_
  masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_member_array,  // message members
  masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_type_support_handle = {
  0,
  &masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_members,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__CommStatus__get_type_hash,
  &masc_chassis_msgs__msg__CommStatus__get_type_description,
  &masc_chassis_msgs__msg__CommStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_masc_chassis_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, msg, CommStatus)() {
  masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_type_support_handle.typesupport_identifier) {
    masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &masc_chassis_msgs__msg__CommStatus__rosidl_typesupport_introspection_c__CommStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
