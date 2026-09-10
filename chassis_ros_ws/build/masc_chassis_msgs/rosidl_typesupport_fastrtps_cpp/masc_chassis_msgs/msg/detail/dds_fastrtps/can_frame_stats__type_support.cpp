// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/can_frame_stats__rosidl_typesupport_fastrtps_cpp.hpp"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"
#include "masc_chassis_msgs/msg/detail/can_frame_stats__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace masc_chassis_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
cdr_serialize(
  const masc_chassis_msgs::msg::CanFrameStats & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_id
  cdr << ros_message.can_id;

  // Member: rx_count
  cdr << ros_message.rx_count;

  // Member: parse_error_count
  cdr << ros_message.parse_error_count;

  // Member: drop_count
  cdr << ros_message.drop_count;

  // Member: frequency
  cdr << ros_message.frequency;

  // Member: last_rx_age_ms
  cdr << ros_message.last_rx_age_ms;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  masc_chassis_msgs::msg::CanFrameStats & ros_message)
{
  // Member: can_id
  cdr >> ros_message.can_id;

  // Member: rx_count
  cdr >> ros_message.rx_count;

  // Member: parse_error_count
  cdr >> ros_message.parse_error_count;

  // Member: drop_count
  cdr >> ros_message.drop_count;

  // Member: frequency
  cdr >> ros_message.frequency;

  // Member: last_rx_age_ms
  cdr >> ros_message.last_rx_age_ms;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
get_serialized_size(
  const masc_chassis_msgs::msg::CanFrameStats & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: can_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.can_id.size() + 1);

  // Member: rx_count
  {
    size_t item_size = sizeof(ros_message.rx_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: parse_error_count
  {
    size_t item_size = sizeof(ros_message.parse_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: drop_count
  {
    size_t item_size = sizeof(ros_message.drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_rx_age_ms
  {
    size_t item_size = sizeof(ros_message.last_rx_age_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
max_serialized_size_CanFrameStats(
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

  // Member: can_id
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
  // Member: rx_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: parse_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: drop_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: last_rx_age_ms
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
    using DataType = masc_chassis_msgs::msg::CanFrameStats;
    is_plain =
      (
      offsetof(DataType, last_rx_age_ms) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
cdr_serialize_key(
  const masc_chassis_msgs::msg::CanFrameStats & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_id
  cdr << ros_message.can_id;

  // Member: rx_count
  cdr << ros_message.rx_count;

  // Member: parse_error_count
  cdr << ros_message.parse_error_count;

  // Member: drop_count
  cdr << ros_message.drop_count;

  // Member: frequency
  cdr << ros_message.frequency;

  // Member: last_rx_age_ms
  cdr << ros_message.last_rx_age_ms;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
get_serialized_size_key(
  const masc_chassis_msgs::msg::CanFrameStats & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: can_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.can_id.size() + 1);

  // Member: rx_count
  {
    size_t item_size = sizeof(ros_message.rx_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: parse_error_count
  {
    size_t item_size = sizeof(ros_message.parse_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: drop_count
  {
    size_t item_size = sizeof(ros_message.drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_rx_age_ms
  {
    size_t item_size = sizeof(ros_message.last_rx_age_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
max_serialized_size_key_CanFrameStats(
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

  // Member: can_id
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

  // Member: rx_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: parse_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: drop_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: last_rx_age_ms
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
    using DataType = masc_chassis_msgs::msg::CanFrameStats;
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
  auto typed_message =
    static_cast<const masc_chassis_msgs::msg::CanFrameStats *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CanFrameStats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<masc_chassis_msgs::msg::CanFrameStats *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CanFrameStats__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const masc_chassis_msgs::msg::CanFrameStats *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CanFrameStats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CanFrameStats(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CanFrameStats__callbacks = {
  "masc_chassis_msgs::msg",
  "CanFrameStats",
  _CanFrameStats__cdr_serialize,
  _CanFrameStats__cdr_deserialize,
  _CanFrameStats__get_serialized_size,
  _CanFrameStats__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CanFrameStats__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CanFrameStats__callbacks,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_hash,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description,
  &masc_chassis_msgs__msg__CanFrameStats__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace masc_chassis_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_masc_chassis_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::msg::CanFrameStats>()
{
  return &masc_chassis_msgs::msg::typesupport_fastrtps_cpp::_CanFrameStats__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, masc_chassis_msgs, msg, CanFrameStats)() {
  return &masc_chassis_msgs::msg::typesupport_fastrtps_cpp::_CanFrameStats__handle;
}

#ifdef __cplusplus
}
#endif
