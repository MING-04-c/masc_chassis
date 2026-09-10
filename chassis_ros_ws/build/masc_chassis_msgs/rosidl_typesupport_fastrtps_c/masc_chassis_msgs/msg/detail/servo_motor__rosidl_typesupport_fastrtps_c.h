// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from masc_chassis_msgs:msg/ServoMotor.idl
// generated code does not contain a copyright notice
#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "masc_chassis_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "masc_chassis_msgs/msg/detail/servo_motor__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_serialize_masc_chassis_msgs__msg__ServoMotor(
  const masc_chassis_msgs__msg__ServoMotor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_deserialize_masc_chassis_msgs__msg__ServoMotor(
  eprosima::fastcdr::Cdr &,
  masc_chassis_msgs__msg__ServoMotor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t get_serialized_size_masc_chassis_msgs__msg__ServoMotor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t max_serialized_size_masc_chassis_msgs__msg__ServoMotor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_serialize_key_masc_chassis_msgs__msg__ServoMotor(
  const masc_chassis_msgs__msg__ServoMotor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t get_serialized_size_key_masc_chassis_msgs__msg__ServoMotor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t max_serialized_size_key_masc_chassis_msgs__msg__ServoMotor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, msg, ServoMotor)();

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__SERVO_MOTOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
