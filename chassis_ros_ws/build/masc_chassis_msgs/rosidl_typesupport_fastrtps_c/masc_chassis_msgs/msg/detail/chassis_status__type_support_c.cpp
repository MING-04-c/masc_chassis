// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/chassis_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "masc_chassis_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "masc_chassis_msgs/msg/detail/chassis_status__struct.h"
#include "masc_chassis_msgs/msg/detail/chassis_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_masc_chassis_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ChassisStatus__ros_msg_type = masc_chassis_msgs__msg__ChassisStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_serialize_masc_chassis_msgs__msg__ChassisStatus(
  const masc_chassis_msgs__msg__ChassisStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: chassis_state
  {
    cdr << ros_message->chassis_state;
  }

  // Field name: current_motion_mode
  {
    cdr << ros_message->current_motion_mode;
  }

  // Field name: motion_mode_switching
  {
    cdr << (ros_message->motion_mode_switching ? true : false);
  }

  // Field name: brake_active
  {
    cdr << (ros_message->brake_active ? true : false);
  }

  // Field name: low_battery
  {
    cdr << (ros_message->low_battery ? true : false);
  }

  // Field name: excessive_tilt
  {
    cdr << (ros_message->excessive_tilt ? true : false);
  }

  // Field name: manual_charging
  {
    cdr << (ros_message->manual_charging ? true : false);
  }

  // Field name: dock_charging
  {
    cdr << (ros_message->dock_charging ? true : false);
  }

  // Field name: main_power_active
  {
    cdr << (ros_message->main_power_active ? true : false);
  }

  // Field name: obstacle_status_flags
  {
    cdr << ros_message->obstacle_status_flags;
  }

  // Field name: system_status_flags
  {
    cdr << ros_message->system_status_flags;
  }

  // Field name: chassis_fault
  {
    cdr << ros_message->chassis_fault;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_deserialize_masc_chassis_msgs__msg__ChassisStatus(
  eprosima::fastcdr::Cdr & cdr,
  masc_chassis_msgs__msg__ChassisStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: chassis_state
  {
    cdr >> ros_message->chassis_state;
  }

  // Field name: current_motion_mode
  {
    cdr >> ros_message->current_motion_mode;
  }

  // Field name: motion_mode_switching
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motion_mode_switching = tmp ? true : false;
  }

  // Field name: brake_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_active = tmp ? true : false;
  }

  // Field name: low_battery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_battery = tmp ? true : false;
  }

  // Field name: excessive_tilt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->excessive_tilt = tmp ? true : false;
  }

  // Field name: manual_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->manual_charging = tmp ? true : false;
  }

  // Field name: dock_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dock_charging = tmp ? true : false;
  }

  // Field name: main_power_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->main_power_active = tmp ? true : false;
  }

  // Field name: obstacle_status_flags
  {
    cdr >> ros_message->obstacle_status_flags;
  }

  // Field name: system_status_flags
  {
    cdr >> ros_message->system_status_flags;
  }

  // Field name: chassis_fault
  {
    cdr >> ros_message->chassis_fault;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t get_serialized_size_masc_chassis_msgs__msg__ChassisStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChassisStatus__ros_msg_type * ros_message = static_cast<const _ChassisStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: chassis_state
  {
    size_t item_size = sizeof(ros_message->chassis_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_motion_mode
  {
    size_t item_size = sizeof(ros_message->current_motion_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motion_mode_switching
  {
    size_t item_size = sizeof(ros_message->motion_mode_switching);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake_active
  {
    size_t item_size = sizeof(ros_message->brake_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: low_battery
  {
    size_t item_size = sizeof(ros_message->low_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: excessive_tilt
  {
    size_t item_size = sizeof(ros_message->excessive_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: manual_charging
  {
    size_t item_size = sizeof(ros_message->manual_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dock_charging
  {
    size_t item_size = sizeof(ros_message->dock_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: main_power_active
  {
    size_t item_size = sizeof(ros_message->main_power_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: obstacle_status_flags
  {
    size_t item_size = sizeof(ros_message->obstacle_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: system_status_flags
  {
    size_t item_size = sizeof(ros_message->system_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chassis_fault
  {
    size_t item_size = sizeof(ros_message->chassis_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t max_serialized_size_masc_chassis_msgs__msg__ChassisStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: chassis_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: current_motion_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motion_mode_switching
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: brake_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: low_battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: excessive_tilt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: manual_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dock_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: main_power_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: obstacle_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: system_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: chassis_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = masc_chassis_msgs__msg__ChassisStatus;
    is_plain =
      (
      offsetof(DataType, chassis_fault) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_serialize_key_masc_chassis_msgs__msg__ChassisStatus(
  const masc_chassis_msgs__msg__ChassisStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: chassis_state
  {
    cdr << ros_message->chassis_state;
  }

  // Field name: current_motion_mode
  {
    cdr << ros_message->current_motion_mode;
  }

  // Field name: motion_mode_switching
  {
    cdr << (ros_message->motion_mode_switching ? true : false);
  }

  // Field name: brake_active
  {
    cdr << (ros_message->brake_active ? true : false);
  }

  // Field name: low_battery
  {
    cdr << (ros_message->low_battery ? true : false);
  }

  // Field name: excessive_tilt
  {
    cdr << (ros_message->excessive_tilt ? true : false);
  }

  // Field name: manual_charging
  {
    cdr << (ros_message->manual_charging ? true : false);
  }

  // Field name: dock_charging
  {
    cdr << (ros_message->dock_charging ? true : false);
  }

  // Field name: main_power_active
  {
    cdr << (ros_message->main_power_active ? true : false);
  }

  // Field name: obstacle_status_flags
  {
    cdr << ros_message->obstacle_status_flags;
  }

  // Field name: system_status_flags
  {
    cdr << ros_message->system_status_flags;
  }

  // Field name: chassis_fault
  {
    cdr << ros_message->chassis_fault;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t get_serialized_size_key_masc_chassis_msgs__msg__ChassisStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChassisStatus__ros_msg_type * ros_message = static_cast<const _ChassisStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: chassis_state
  {
    size_t item_size = sizeof(ros_message->chassis_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_motion_mode
  {
    size_t item_size = sizeof(ros_message->current_motion_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motion_mode_switching
  {
    size_t item_size = sizeof(ros_message->motion_mode_switching);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake_active
  {
    size_t item_size = sizeof(ros_message->brake_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: low_battery
  {
    size_t item_size = sizeof(ros_message->low_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: excessive_tilt
  {
    size_t item_size = sizeof(ros_message->excessive_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: manual_charging
  {
    size_t item_size = sizeof(ros_message->manual_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dock_charging
  {
    size_t item_size = sizeof(ros_message->dock_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: main_power_active
  {
    size_t item_size = sizeof(ros_message->main_power_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: obstacle_status_flags
  {
    size_t item_size = sizeof(ros_message->obstacle_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: system_status_flags
  {
    size_t item_size = sizeof(ros_message->system_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chassis_fault
  {
    size_t item_size = sizeof(ros_message->chassis_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t max_serialized_size_key_masc_chassis_msgs__msg__ChassisStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: chassis_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: current_motion_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motion_mode_switching
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: brake_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: low_battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: excessive_tilt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: manual_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dock_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: main_power_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: obstacle_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: system_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: chassis_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = masc_chassis_msgs__msg__ChassisStatus;
    is_plain =
      (
      offsetof(DataType, chassis_fault) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ChassisStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const masc_chassis_msgs__msg__ChassisStatus * ros_message = static_cast<const masc_chassis_msgs__msg__ChassisStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_masc_chassis_msgs__msg__ChassisStatus(ros_message, cdr);
}

static bool _ChassisStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  masc_chassis_msgs__msg__ChassisStatus * ros_message = static_cast<masc_chassis_msgs__msg__ChassisStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_masc_chassis_msgs__msg__ChassisStatus(cdr, ros_message);
}

static uint32_t _ChassisStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_masc_chassis_msgs__msg__ChassisStatus(
      untyped_ros_message, 0));
}

static size_t _ChassisStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_masc_chassis_msgs__msg__ChassisStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChassisStatus = {
  "masc_chassis_msgs::msg",
  "ChassisStatus",
  _ChassisStatus__cdr_serialize,
  _ChassisStatus__cdr_deserialize,
  _ChassisStatus__get_serialized_size,
  _ChassisStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ChassisStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChassisStatus,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__ChassisStatus__get_type_hash,
  &masc_chassis_msgs__msg__ChassisStatus__get_type_description,
  &masc_chassis_msgs__msg__ChassisStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, msg, ChassisStatus)() {
  return &_ChassisStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
