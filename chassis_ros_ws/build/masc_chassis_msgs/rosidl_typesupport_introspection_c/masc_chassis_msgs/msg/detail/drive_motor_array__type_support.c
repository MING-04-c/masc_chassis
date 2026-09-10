// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from masc_chassis_msgs:msg/DriveMotorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "masc_chassis_msgs/msg/detail/drive_motor_array__rosidl_typesupport_introspection_c.h"
#include "masc_chassis_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "masc_chassis_msgs/msg/detail/drive_motor_array__functions.h"
#include "masc_chassis_msgs/msg/detail/drive_motor_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `motors`
#include "masc_chassis_msgs/msg/drive_motor.h"
// Member `motors`
#include "masc_chassis_msgs/msg/detail/drive_motor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  masc_chassis_msgs__msg__DriveMotorArray__init(message_memory);
}

void masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_fini_function(void * message_memory)
{
  masc_chassis_msgs__msg__DriveMotorArray__fini(message_memory);
}

size_t masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__size_function__DriveMotorArray__motors(
  const void * untyped_member)
{
  const masc_chassis_msgs__msg__DriveMotor__Sequence * member =
    (const masc_chassis_msgs__msg__DriveMotor__Sequence *)(untyped_member);
  return member->size;
}

const void * masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__get_const_function__DriveMotorArray__motors(
  const void * untyped_member, size_t index)
{
  const masc_chassis_msgs__msg__DriveMotor__Sequence * member =
    (const masc_chassis_msgs__msg__DriveMotor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__get_function__DriveMotorArray__motors(
  void * untyped_member, size_t index)
{
  masc_chassis_msgs__msg__DriveMotor__Sequence * member =
    (masc_chassis_msgs__msg__DriveMotor__Sequence *)(untyped_member);
  return &member->data[index];
}

void masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__fetch_function__DriveMotorArray__motors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const masc_chassis_msgs__msg__DriveMotor * item =
    ((const masc_chassis_msgs__msg__DriveMotor *)
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__get_const_function__DriveMotorArray__motors(untyped_member, index));
  masc_chassis_msgs__msg__DriveMotor * value =
    (masc_chassis_msgs__msg__DriveMotor *)(untyped_value);
  *value = *item;
}

void masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__assign_function__DriveMotorArray__motors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  masc_chassis_msgs__msg__DriveMotor * item =
    ((masc_chassis_msgs__msg__DriveMotor *)
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__get_function__DriveMotorArray__motors(untyped_member, index));
  const masc_chassis_msgs__msg__DriveMotor * value =
    (const masc_chassis_msgs__msg__DriveMotor *)(untyped_value);
  *item = *value;
}

bool masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__resize_function__DriveMotorArray__motors(
  void * untyped_member, size_t size)
{
  masc_chassis_msgs__msg__DriveMotor__Sequence * member =
    (masc_chassis_msgs__msg__DriveMotor__Sequence *)(untyped_member);
  masc_chassis_msgs__msg__DriveMotor__Sequence__fini(member);
  return masc_chassis_msgs__msg__DriveMotor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__DriveMotorArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs__msg__DriveMotorArray, motors),  // bytes offset in struct
    NULL,  // default value
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__size_function__DriveMotorArray__motors,  // size() function pointer
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__get_const_function__DriveMotorArray__motors,  // get_const(index) function pointer
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__get_function__DriveMotorArray__motors,  // get(index) function pointer
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__fetch_function__DriveMotorArray__motors,  // fetch(index, &value) function pointer
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__assign_function__DriveMotorArray__motors,  // assign(index, value) function pointer
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__resize_function__DriveMotorArray__motors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_members = {
  "masc_chassis_msgs__msg",  // message namespace
  "DriveMotorArray",  // message name
  2,  // number of fields
  sizeof(masc_chassis_msgs__msg__DriveMotorArray),
  false,  // has_any_key_member_
  masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_member_array,  // message members
  masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_type_support_handle = {
  0,
  &masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_members,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__DriveMotorArray__get_type_hash,
  &masc_chassis_msgs__msg__DriveMotorArray__get_type_description,
  &masc_chassis_msgs__msg__DriveMotorArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_masc_chassis_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, msg, DriveMotorArray)() {
  masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, msg, DriveMotor)();
  if (!masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_type_support_handle.typesupport_identifier) {
    masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &masc_chassis_msgs__msg__DriveMotorArray__rosidl_typesupport_introspection_c__DriveMotorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
