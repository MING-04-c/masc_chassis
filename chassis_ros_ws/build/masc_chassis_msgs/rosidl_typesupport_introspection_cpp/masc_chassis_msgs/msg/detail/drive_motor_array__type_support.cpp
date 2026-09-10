// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:msg/DriveMotorArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "masc_chassis_msgs/msg/detail/drive_motor_array__functions.h"
#include "masc_chassis_msgs/msg/detail/drive_motor_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace masc_chassis_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DriveMotorArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) masc_chassis_msgs::msg::DriveMotorArray(_init);
}

void DriveMotorArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<masc_chassis_msgs::msg::DriveMotorArray *>(message_memory);
  typed_message->~DriveMotorArray();
}

size_t size_function__DriveMotorArray__motors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<masc_chassis_msgs::msg::DriveMotor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DriveMotorArray__motors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<masc_chassis_msgs::msg::DriveMotor> *>(untyped_member);
  return &member[index];
}

void * get_function__DriveMotorArray__motors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<masc_chassis_msgs::msg::DriveMotor> *>(untyped_member);
  return &member[index];
}

void fetch_function__DriveMotorArray__motors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const masc_chassis_msgs::msg::DriveMotor *>(
    get_const_function__DriveMotorArray__motors(untyped_member, index));
  auto & value = *reinterpret_cast<masc_chassis_msgs::msg::DriveMotor *>(untyped_value);
  value = item;
}

void assign_function__DriveMotorArray__motors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<masc_chassis_msgs::msg::DriveMotor *>(
    get_function__DriveMotorArray__motors(untyped_member, index));
  const auto & value = *reinterpret_cast<const masc_chassis_msgs::msg::DriveMotor *>(untyped_value);
  item = value;
}

void resize_function__DriveMotorArray__motors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<masc_chassis_msgs::msg::DriveMotor> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DriveMotorArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::DriveMotorArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<masc_chassis_msgs::msg::DriveMotor>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(masc_chassis_msgs::msg::DriveMotorArray, motors),  // bytes offset in struct
    nullptr,  // default value
    size_function__DriveMotorArray__motors,  // size() function pointer
    get_const_function__DriveMotorArray__motors,  // get_const(index) function pointer
    get_function__DriveMotorArray__motors,  // get(index) function pointer
    fetch_function__DriveMotorArray__motors,  // fetch(index, &value) function pointer
    assign_function__DriveMotorArray__motors,  // assign(index, value) function pointer
    resize_function__DriveMotorArray__motors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DriveMotorArray_message_members = {
  "masc_chassis_msgs::msg",  // message namespace
  "DriveMotorArray",  // message name
  2,  // number of fields
  sizeof(masc_chassis_msgs::msg::DriveMotorArray),
  false,  // has_any_key_member_
  DriveMotorArray_message_member_array,  // message members
  DriveMotorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DriveMotorArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DriveMotorArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DriveMotorArray_message_members,
  get_message_typesupport_handle_function,
  &masc_chassis_msgs__msg__DriveMotorArray__get_type_hash,
  &masc_chassis_msgs__msg__DriveMotorArray__get_type_description,
  &masc_chassis_msgs__msg__DriveMotorArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace masc_chassis_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::msg::DriveMotorArray>()
{
  return &::masc_chassis_msgs::msg::rosidl_typesupport_introspection_cpp::DriveMotorArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, masc_chassis_msgs, msg, DriveMotorArray)() {
  return &::masc_chassis_msgs::msg::rosidl_typesupport_introspection_cpp::DriveMotorArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
