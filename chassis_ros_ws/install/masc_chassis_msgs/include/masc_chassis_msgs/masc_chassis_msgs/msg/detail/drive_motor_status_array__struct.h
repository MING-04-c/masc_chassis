// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:msg/DriveMotorStatusArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_status_array.h"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__STRUCT_H_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "masc_chassis_msgs/msg/detail/drive_motor_status__struct.h"

/// Struct defined in msg/DriveMotorStatusArray in the package masc_chassis_msgs.
/**
  * Function: Drive motor status array.
  * Msg Name: DriveMotorStatusArray
 */
typedef struct masc_chassis_msgs__msg__DriveMotorStatusArray
{
  std_msgs__msg__Header header;
  masc_chassis_msgs__msg__DriveMotorStatus__Sequence status;
} masc_chassis_msgs__msg__DriveMotorStatusArray;

// Struct for a sequence of masc_chassis_msgs__msg__DriveMotorStatusArray.
typedef struct masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence
{
  masc_chassis_msgs__msg__DriveMotorStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__STRUCT_H_
