// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:srv/CalibrateServo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/srv/calibrate_servo.h"


#ifndef MASC_CHASSIS_MSGS__SRV__DETAIL__CALIBRATE_SERVO__STRUCT_H_
#define MASC_CHASSIS_MSGS__SRV__DETAIL__CALIBRATE_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalibrateServo in the package masc_chassis_msgs.
typedef struct masc_chassis_msgs__srv__CalibrateServo_Request
{
  uint16_t servo_id;
} masc_chassis_msgs__srv__CalibrateServo_Request;

// Struct for a sequence of masc_chassis_msgs__srv__CalibrateServo_Request.
typedef struct masc_chassis_msgs__srv__CalibrateServo_Request__Sequence
{
  masc_chassis_msgs__srv__CalibrateServo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__srv__CalibrateServo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CalibrateServo in the package masc_chassis_msgs.
typedef struct masc_chassis_msgs__srv__CalibrateServo_Response
{
  bool success;
  rosidl_runtime_c__String message;
} masc_chassis_msgs__srv__CalibrateServo_Response;

// Struct for a sequence of masc_chassis_msgs__srv__CalibrateServo_Response.
typedef struct masc_chassis_msgs__srv__CalibrateServo_Response__Sequence
{
  masc_chassis_msgs__srv__CalibrateServo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__srv__CalibrateServo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  masc_chassis_msgs__srv__CalibrateServo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  masc_chassis_msgs__srv__CalibrateServo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CalibrateServo in the package masc_chassis_msgs.
typedef struct masc_chassis_msgs__srv__CalibrateServo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  masc_chassis_msgs__srv__CalibrateServo_Request__Sequence request;
  masc_chassis_msgs__srv__CalibrateServo_Response__Sequence response;
} masc_chassis_msgs__srv__CalibrateServo_Event;

// Struct for a sequence of masc_chassis_msgs__srv__CalibrateServo_Event.
typedef struct masc_chassis_msgs__srv__CalibrateServo_Event__Sequence
{
  masc_chassis_msgs__srv__CalibrateServo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__srv__CalibrateServo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__SRV__DETAIL__CALIBRATE_SERVO__STRUCT_H_
