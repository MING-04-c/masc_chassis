// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/can_frame_stats__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "masc_chassis_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"
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

#include "rosidl_runtime_c/string.h"  // can_id
#include "rosidl_runtime_c/string_functions.h"  // can_id

// forward declare type support functions


using _CanFrameStats__ros_msg_type = masc_chassis_msgs__msg__CanFrameStats;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_serialize_masc_chassis_msgs__msg__CanFrameStats(
  const masc_chassis_msgs__msg__CanFrameStats * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: can_id
  {
    const rosidl_runtime_c__String * str = &ros_message->can_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: rx_count
  {
    cdr << ros_message->rx_count;
  }

  // Field name: parse_error_count
  {
    cdr << ros_message->parse_error_count;
  }

  // Field name: drop_count
  {
    cdr << ros_message->drop_count;
  }

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: last_rx_age_ms
  {
    cdr << ros_message->last_rx_age_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_deserialize_masc_chassis_msgs__msg__CanFrameStats(
  eprosima::fastcdr::Cdr & cdr,
  masc_chassis_msgs__msg__CanFrameStats * ros_message)
{
  // Field name: can_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->can_id.data) {
      rosidl_runtime_c__String__init(&ros_message->can_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->can_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'can_id'\n");
      return false;
    }
  }

  // Field name: rx_count
  {
    cdr >> ros_message->rx_count;
  }

  // Field name: parse_error_count
  {
    cdr >> ros_message->parse_error_count;
  }

  // Field name: drop_count
  {
    cdr >> ros_message->drop_count;
  }

  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: last_rx_age_ms
  {
    cdr >> ros_message->last_rx_age_ms;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t get_serialized_size_masc_chassis_msgs__msg__CanFrameStats(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CanFrameStats__ros_msg_type * ros_message = static_cast<const _CanFrameStats__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: can_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->can_id.size + 1);

  // Field name: rx_count
  {
    size_t item_size = sizeof(ros_message->rx_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: parse_error_count
  {
    size_t item_size = sizeof(ros_message->parse_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: drop_count
  {
    size_t item_size = sizeof(ros_message->drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_rx_age_ms
  {
    size_t item_size = sizeof(ros_message->last_rx_age_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t max_serialized_size_masc_chassis_msgs__msg__CanFrameStats(
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

  // Field name: can_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: rx_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: parse_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: drop_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: last_rx_age_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = masc_chassis_msgs__msg__CanFrameStats;
    is_plain =
      (
      offsetof(DataType, last_rx_age_ms) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
bool cdr_serialize_key_masc_chassis_msgs__msg__CanFrameStats(
  const masc_chassis_msgs__msg__CanFrameStats * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: can_id
  {
    const rosidl_runtime_c__String * str = &ros_message->can_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: rx_count
  {
    cdr << ros_message->rx_count;
  }

  // Field name: parse_error_count
  {
    cdr << ros_message->parse_error_count;
  }

  // Field name: drop_count
  {
    cdr << ros_message->drop_count;
  }

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: last_rx_age_ms
  {
    cdr << ros_message->last_rx_age_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t get_serialized_size_key_masc_chassis_msgs__msg__CanFrameStats(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CanFrameStats__ros_msg_type * ros_message = static_cast<const _CanFrameStats__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: can_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->can_id.size + 1);

  // Field name: rx_count
  {
    size_t item_size = sizeof(ros_message->rx_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: parse_error_count
  {
    size_t item_size = sizeof(ros_message->parse_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: drop_count
  {
    size_t item_size = sizeof(ros_message->drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_rx_age_ms
  {
    size_t item_size = sizeof(ros_message->last_rx_age_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_masc_chassis_msgs
size_t max_serialized_size_key_masc_chassis_msgs__msg__CanFrameStats(
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
  // Field name: can_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: rx_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: parse_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: drop_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: last_rx_age_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = masc_chassis_msgs__msg__CanFrameStats;
    is_plain =
      (
      offsetof(DataType, last_rx_age_ms) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CanFrameStats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const masc_chassis_msgs__msg__CanFrameStats * ros_message = static_cast<const masc_chassis_msgs__msg__CanFrameStats *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_masc_chassis_msgs__msg__CanFrameStats(ros_message, cdr);
}

static bool _CanFrameStats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  masc_chassis_msgs__msg__CanFrameStats * ros_message = static_cast<masc_chassis_msgs__msg__CanFrameStats *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_masc_chassis_msgs__msg__CanFrameStats(cdr, ros_message);
}

static uint32_t _CanFrameStats__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_masc_chassis_msgs__msg__CanFrameStats(
      untyped_ros_message, 0));
}

static size_t _CanFrameStats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_masc_chassis_msgs__msg__CanFrameStats(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CanFrameStats = {
  "masc_chassis_msgs::msg",
  "CanFrameStats",
  _CanFrameStats__cdr_serialize,
  _CanFrameStats__cdr_deserialize,
  _CanFrameStats__get_serialized_size,
  _CanFrameStats__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CanFrameStats__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CanFrameStats,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_hash,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, msg, CanFrameStats)() {
  return &_CanFrameStats__type_support;
}

#if defined(__cplusplus)
}
#endif
