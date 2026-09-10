// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/RcStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/rc_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__masc_chassis_msgs__msg__RcStatus __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__RcStatus __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcStatus_
{
  using Type = RcStatus_<ContainerAllocator>;

  explicit RcStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->online = false;
      std::fill<typename std::array<int8_t, 7>::iterator, int8_t>(this->channels.begin(), this->channels.end(), 0);
    }
  }

  explicit RcStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    channels(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->online = false;
      std::fill<typename std::array<int8_t, 7>::iterator, int8_t>(this->channels.begin(), this->channels.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _online_type =
    bool;
  _online_type online;
  using _channels_type =
    std::array<int8_t, 7>;
  _channels_type channels;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__online(
    const bool & _arg)
  {
    this->online = _arg;
    return *this;
  }
  Type & set__channels(
    const std::array<int8_t, 7> & _arg)
  {
    this->channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::RcStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::RcStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::RcStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::RcStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__RcStatus
    std::shared_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__RcStatus
    std::shared_ptr<masc_chassis_msgs::msg::RcStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->online != other.online) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcStatus_

// alias to use template instance with default allocator
using RcStatus =
  masc_chassis_msgs::msg::RcStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__RC_STATUS__STRUCT_HPP_
