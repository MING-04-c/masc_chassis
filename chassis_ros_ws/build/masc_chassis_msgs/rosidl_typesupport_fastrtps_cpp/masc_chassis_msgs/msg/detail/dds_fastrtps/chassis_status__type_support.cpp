// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/chassis_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "masc_chassis_msgs/msg/detail/chassis_status__functions.h"
#include "masc_chassis_msgs/msg/detail/chassis_status__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace masc_chassis_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
cdr_serialize(
  const masc_chassis_msgs::msg::ChassisStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: chassis_state
  cdr << ros_message.chassis_state;

  // Member: current_motion_mode
  cdr << ros_message.current_motion_mode;

  // Member: motion_mode_switching
  cdr << (ros_message.motion_mode_switching ? true : false);

  // Member: brake_active
  cdr << (ros_message.brake_active ? true : false);

  // Member: low_battery
  cdr << (ros_message.low_battery ? true : false);

  // Member: excessive_tilt
  cdr << (ros_message.excessive_tilt ? true : false);

  // Member: manual_charging
  cdr << (ros_message.manual_charging ? true : false);

  // Member: dock_charging
  cdr << (ros_message.dock_charging ? true : false);

  // Member: main_power_active
  cdr << (ros_message.main_power_active ? true : false);

  // Member: obstacle_status_flags
  cdr << ros_message.obstacle_status_flags;

  // Member: system_status_flags
  cdr << ros_message.system_status_flags;

  // Member: chassis_fault
  cdr << ros_message.chassis_fault;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  masc_chassis_msgs::msg::ChassisStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: chassis_state
  cdr >> ros_message.chassis_state;

  // Member: current_motion_mode
  cdr >> ros_message.current_motion_mode;

  // Member: motion_mode_switching
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motion_mode_switching = tmp ? true : false;
  }

  // Member: brake_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_active = tmp ? true : false;
  }

  // Member: low_battery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_battery = tmp ? true : false;
  }

  // Member: excessive_tilt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.excessive_tilt = tmp ? true : false;
  }

  // Member: manual_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.manual_charging = tmp ? true : false;
  }

  // Member: dock_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dock_charging = tmp ? true : false;
  }

  // Member: main_power_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.main_power_active = tmp ? true : false;
  }

  // Member: obstacle_status_flags
  cdr >> ros_message.obstacle_status_flags;

  // Member: system_status_flags
  cdr >> ros_message.system_status_flags;

  // Member: chassis_fault
  cdr >> ros_message.chassis_fault;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
get_serialized_size(
  const masc_chassis_msgs::msg::ChassisStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: chassis_state
  {
    size_t item_size = sizeof(ros_message.chassis_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_motion_mode
  {
    size_t item_size = sizeof(ros_message.current_motion_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: motion_mode_switching
  {
    size_t item_size = sizeof(ros_message.motion_mode_switching);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_active
  {
    size_t item_size = sizeof(ros_message.brake_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: low_battery
  {
    size_t item_size = sizeof(ros_message.low_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: excessive_tilt
  {
    size_t item_size = sizeof(ros_message.excessive_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: manual_charging
  {
    size_t item_size = sizeof(ros_message.manual_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dock_charging
  {
    size_t item_size = sizeof(ros_message.dock_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: main_power_active
  {
    size_t item_size = sizeof(ros_message.main_power_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: obstacle_status_flags
  {
    size_t item_size = sizeof(ros_message.obstacle_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: system_status_flags
  {
    size_t item_size = sizeof(ros_message.system_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chassis_fault
  {
    size_t item_size = sizeof(ros_message.chassis_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
max_serialized_size_ChassisStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: chassis_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: current_motion_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: motion_mode_switching
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: brake_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: low_battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: excessive_tilt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: manual_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dock_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: main_power_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: obstacle_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: system_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: chassis_fault
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
    using DataType = masc_chassis_msgs::msg::ChassisStatus;
    is_plain =
      (
      offsetof(DataType, chassis_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
cdr_serialize_key(
  const masc_chassis_msgs::msg::ChassisStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: chassis_state
  cdr << ros_message.chassis_state;

  // Member: current_motion_mode
  cdr << ros_message.current_motion_mode;

  // Member: motion_mode_switching
  cdr << (ros_message.motion_mode_switching ? true : false);

  // Member: brake_active
  cdr << (ros_message.brake_active ? true : false);

  // Member: low_battery
  cdr << (ros_message.low_battery ? true : false);

  // Member: excessive_tilt
  cdr << (ros_message.excessive_tilt ? true : false);

  // Member: manual_charging
  cdr << (ros_message.manual_charging ? true : false);

  // Member: dock_charging
  cdr << (ros_message.dock_charging ? true : false);

  // Member: main_power_active
  cdr << (ros_message.main_power_active ? true : false);

  // Member: obstacle_status_flags
  cdr << ros_message.obstacle_status_flags;

  // Member: system_status_flags
  cdr << ros_message.system_status_flags;

  // Member: chassis_fault
  cdr << ros_message.chassis_fault;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
get_serialized_size_key(
  const masc_chassis_msgs::msg::ChassisStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: chassis_state
  {
    size_t item_size = sizeof(ros_message.chassis_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_motion_mode
  {
    size_t item_size = sizeof(ros_message.current_motion_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: motion_mode_switching
  {
    size_t item_size = sizeof(ros_message.motion_mode_switching);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_active
  {
    size_t item_size = sizeof(ros_message.brake_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: low_battery
  {
    size_t item_size = sizeof(ros_message.low_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: excessive_tilt
  {
    size_t item_size = sizeof(ros_message.excessive_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: manual_charging
  {
    size_t item_size = sizeof(ros_message.manual_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dock_charging
  {
    size_t item_size = sizeof(ros_message.dock_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: main_power_active
  {
    size_t item_size = sizeof(ros_message.main_power_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: obstacle_status_flags
  {
    size_t item_size = sizeof(ros_message.obstacle_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: system_status_flags
  {
    size_t item_size = sizeof(ros_message.system_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chassis_fault
  {
    size_t item_size = sizeof(ros_message.chassis_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_masc_chassis_msgs
max_serialized_size_key_ChassisStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: chassis_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_motion_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motion_mode_switching
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: excessive_tilt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: manual_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dock_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: main_power_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: chassis_fault
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
    using DataType = masc_chassis_msgs::msg::ChassisStatus;
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
  auto typed_message =
    static_cast<const masc_chassis_msgs::msg::ChassisStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChassisStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<masc_chassis_msgs::msg::ChassisStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChassisStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const masc_chassis_msgs::msg::ChassisStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChassisStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ChassisStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ChassisStatus__callbacks = {
  "masc_chassis_msgs::msg",
  "ChassisStatus",
  _ChassisStatus__cdr_serialize,
  _ChassisStatus__cdr_deserialize,
  _ChassisStatus__get_serialized_size,
  _ChassisStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ChassisStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ChassisStatus__callbacks,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__ChassisStatus__get_type_hash,
  &masc_chassis_msgs__msg__ChassisStatus__get_type_description,
  &masc_chassis_msgs__msg__ChassisStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace masc_chassis_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_masc_chassis_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::msg::ChassisStatus>()
{
  return &masc_chassis_msgs::msg::typesupport_fastrtps_cpp::_ChassisStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, masc_chassis_msgs, msg, ChassisStatus)() {
  return &masc_chassis_msgs::msg::typesupport_fastrtps_cpp::_ChassisStatus__handle;
}

#ifdef __cplusplus
}
#endif
