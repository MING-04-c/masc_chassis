// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from masc_chassis_msgs:srv/SetMotionMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/srv/set_motion_mode.h"


#ifndef MASC_CHASSIS_MSGS__SRV__DETAIL__SET_MOTION_MODE__STRUCT_H_
#define MASC_CHASSIS_MSGS__SRV__DETAIL__SET_MOTION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MOTION_MODE_DEFAULT_CHASSIS'.
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Request__MOTION_MODE_DEFAULT_CHASSIS = 0
};

/// Constant 'MOTION_MODE_PARK'.
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Request__MOTION_MODE_PARK = 1
};

/// Constant 'MOTION_MODE_ACKERMANN'.
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Request__MOTION_MODE_ACKERMANN = 2
};

/// Constant 'MOTION_MODE_SPIN'.
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Request__MOTION_MODE_SPIN = 3
};

/// Constant 'MOTION_MODE_LATERAL'.
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Request__MOTION_MODE_LATERAL = 4
};

/// Constant 'MOTION_MODE_DIAGONAL'.
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Request__MOTION_MODE_DIAGONAL = 5
};

/// Struct defined in srv/SetMotionMode in the package masc_chassis_msgs.
typedef struct masc_chassis_msgs__srv__SetMotionMode_Request
{
  uint8_t motion_mode;
} masc_chassis_msgs__srv__SetMotionMode_Request;

// Struct for a sequence of masc_chassis_msgs__srv__SetMotionMode_Request.
typedef struct masc_chassis_msgs__srv__SetMotionMode_Request__Sequence
{
  masc_chassis_msgs__srv__SetMotionMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__srv__SetMotionMode_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMotionMode in the package masc_chassis_msgs.
typedef struct masc_chassis_msgs__srv__SetMotionMode_Response
{
  bool success;
  rosidl_runtime_c__String message;
} masc_chassis_msgs__srv__SetMotionMode_Response;

// Struct for a sequence of masc_chassis_msgs__srv__SetMotionMode_Response.
typedef struct masc_chassis_msgs__srv__SetMotionMode_Response__Sequence
{
  masc_chassis_msgs__srv__SetMotionMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__srv__SetMotionMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  masc_chassis_msgs__srv__SetMotionMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMotionMode in the package masc_chassis_msgs.
typedef struct masc_chassis_msgs__srv__SetMotionMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  masc_chassis_msgs__srv__SetMotionMode_Request__Sequence request;
  masc_chassis_msgs__srv__SetMotionMode_Response__Sequence response;
} masc_chassis_msgs__srv__SetMotionMode_Event;

// Struct for a sequence of masc_chassis_msgs__srv__SetMotionMode_Event.
typedef struct masc_chassis_msgs__srv__SetMotionMode_Event__Sequence
{
  masc_chassis_msgs__srv__SetMotionMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} masc_chassis_msgs__srv__SetMotionMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASC_CHASSIS_MSGS__SRV__DETAIL__SET_MOTION_MODE__STRUCT_H_
