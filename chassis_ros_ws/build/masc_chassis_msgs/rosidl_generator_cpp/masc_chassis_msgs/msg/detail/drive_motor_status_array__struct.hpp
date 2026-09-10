// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/DriveMotorStatusArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/drive_motor_status_array.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'status'
#include "masc_chassis_msgs/msg/detail/drive_motor_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatusArray __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatusArray __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveMotorStatusArray_
{
  using Type = DriveMotorStatusArray_<ContainerAllocator>;

  explicit DriveMotorStatusArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DriveMotorStatusArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    std::vector<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const std::vector<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<masc_chassis_msgs::msg::DriveMotorStatus_<ContainerAllocator>>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatusArray
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__DriveMotorStatusArray
    std::shared_ptr<masc_chassis_msgs::msg::DriveMotorStatusArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveMotorStatusArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveMotorStatusArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveMotorStatusArray_

// alias to use template instance with default allocator
using DriveMotorStatusArray =
  masc_chassis_msgs::msg::DriveMotorStatusArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__DRIVE_MOTOR_STATUS_ARRAY__STRUCT_HPP_
