// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "masc_chassis_msgs/msg/comm_status.hpp"


#ifndef MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__STRUCT_HPP_
#define MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__STRUCT_HPP_

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
# define DEPRECATED__masc_chassis_msgs__msg__CommStatus __attribute__((deprecated))
#else
# define DEPRECATED__masc_chassis_msgs__msg__CommStatus __declspec(deprecated)
#endif

namespace masc_chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommStatus_
{
  using Type = CommStatus_<ContainerAllocator>;

  explicit CommStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_state = 0;
      this->fail_reason = 0;
      this->motion_command_timeout_active = false;
      this->connection_attempt_count = 0ull;
      this->transport_error_count = 0ull;
      this->tx_error_count = 0ull;
      this->rx_error_count = 0ull;
      std::fill<typename std::array<uint8_t, 5>::iterator, uint8_t>(this->chassis_uuid.begin(), this->chassis_uuid.end(), 0);
      this->system_software_hardware_version = 0;
      this->chassis_type_version = 0;
      this->chassis_protocol_version = 0;
    }
  }

  explicit CommStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    chassis_uuid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_state = 0;
      this->fail_reason = 0;
      this->motion_command_timeout_active = false;
      this->connection_attempt_count = 0ull;
      this->transport_error_count = 0ull;
      this->tx_error_count = 0ull;
      this->rx_error_count = 0ull;
      std::fill<typename std::array<uint8_t, 5>::iterator, uint8_t>(this->chassis_uuid.begin(), this->chassis_uuid.end(), 0);
      this->system_software_hardware_version = 0;
      this->chassis_type_version = 0;
      this->chassis_protocol_version = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _comm_state_type =
    uint8_t;
  _comm_state_type comm_state;
  using _fail_reason_type =
    uint8_t;
  _fail_reason_type fail_reason;
  using _motion_command_timeout_active_type =
    bool;
  _motion_command_timeout_active_type motion_command_timeout_active;
  using _connection_attempt_count_type =
    uint64_t;
  _connection_attempt_count_type connection_attempt_count;
  using _transport_error_count_type =
    uint64_t;
  _transport_error_count_type transport_error_count;
  using _tx_error_count_type =
    uint64_t;
  _tx_error_count_type tx_error_count;
  using _rx_error_count_type =
    uint64_t;
  _rx_error_count_type rx_error_count;
  using _chassis_uuid_type =
    std::array<uint8_t, 5>;
  _chassis_uuid_type chassis_uuid;
  using _system_software_hardware_version_type =
    uint8_t;
  _system_software_hardware_version_type system_software_hardware_version;
  using _chassis_type_version_type =
    uint8_t;
  _chassis_type_version_type chassis_type_version;
  using _chassis_protocol_version_type =
    uint8_t;
  _chassis_protocol_version_type chassis_protocol_version;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__comm_state(
    const uint8_t & _arg)
  {
    this->comm_state = _arg;
    return *this;
  }
  Type & set__fail_reason(
    const uint8_t & _arg)
  {
    this->fail_reason = _arg;
    return *this;
  }
  Type & set__motion_command_timeout_active(
    const bool & _arg)
  {
    this->motion_command_timeout_active = _arg;
    return *this;
  }
  Type & set__connection_attempt_count(
    const uint64_t & _arg)
  {
    this->connection_attempt_count = _arg;
    return *this;
  }
  Type & set__transport_error_count(
    const uint64_t & _arg)
  {
    this->transport_error_count = _arg;
    return *this;
  }
  Type & set__tx_error_count(
    const uint64_t & _arg)
  {
    this->tx_error_count = _arg;
    return *this;
  }
  Type & set__rx_error_count(
    const uint64_t & _arg)
  {
    this->rx_error_count = _arg;
    return *this;
  }
  Type & set__chassis_uuid(
    const std::array<uint8_t, 5> & _arg)
  {
    this->chassis_uuid = _arg;
    return *this;
  }
  Type & set__system_software_hardware_version(
    const uint8_t & _arg)
  {
    this->system_software_hardware_version = _arg;
    return *this;
  }
  Type & set__chassis_type_version(
    const uint8_t & _arg)
  {
    this->chassis_type_version = _arg;
    return *this;
  }
  Type & set__chassis_protocol_version(
    const uint8_t & _arg)
  {
    this->chassis_protocol_version = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COMM_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t COMM_STATE_DISCONNECTED =
    1u;
  static constexpr uint8_t COMM_STATE_CONNECTING =
    2u;
  static constexpr uint8_t COMM_STATE_PROTOCOL_MISMATCH =
    3u;
  static constexpr uint8_t COMM_STATE_CONNECTED =
    4u;
  static constexpr uint8_t FAIL_REASON_NONE =
    0u;
  static constexpr uint8_t FAIL_REASON_PORT_OPEN_FAILED =
    1u;
  static constexpr uint8_t FAIL_REASON_VERSION_TIMEOUT =
    2u;
  static constexpr uint8_t FAIL_REASON_PROTOCOL_VERSION_MISMATCH =
    3u;
  static constexpr uint8_t FAIL_REASON_READ_ERROR =
    4u;
  static constexpr uint8_t FAIL_REASON_WRITE_ERROR =
    5u;
  static constexpr uint8_t FAIL_REASON_TRANSPORT_ERROR =
    6u;
  static constexpr uint8_t FAIL_REASON_UNKNOWN =
    255u;
  static constexpr uint8_t CHASSIS_TYPE_RESERVED =
    0u;
  static constexpr uint8_t CHASSIS_TYPE_DIFF_2WD =
    1u;
  static constexpr uint8_t CHASSIS_TYPE_DIFF_4WD =
    2u;
  static constexpr uint8_t CHASSIS_TYPE_DIFF_6WD =
    3u;
  static constexpr uint8_t CHASSIS_TYPE_DIFF_8WD =
    4u;
  static constexpr uint8_t CHASSIS_TYPE_TRICYCLE_UNSPECIFIED =
    32u;
  static constexpr uint8_t CHASSIS_TYPE_TRICYCLE_FRONT =
    33u;
  static constexpr uint8_t CHASSIS_TYPE_TRICYCLE_REAR =
    34u;
  static constexpr uint8_t CHASSIS_TYPE_ACKERMANN_UNSPECIFIED =
    64u;
  static constexpr uint8_t CHASSIS_TYPE_ACKERMANN_FRONT =
    65u;
  static constexpr uint8_t CHASSIS_TYPE_ACKERMANN_REAR =
    66u;
  static constexpr uint8_t CHASSIS_TYPE_ACKERMANN_FRONT_REAR =
    67u;
  static constexpr uint8_t CHASSIS_TYPE_AWS_4WS =
    97u;
  static constexpr uint8_t CHASSIS_TYPE_AWS_6WS =
    98u;
  static constexpr uint8_t CHASSIS_TYPE_AWS_8WS =
    99u;

  // pointer types
  using RawPtr =
    masc_chassis_msgs::msg::CommStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const masc_chassis_msgs::msg::CommStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::CommStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      masc_chassis_msgs::msg::CommStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__masc_chassis_msgs__msg__CommStatus
    std::shared_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__masc_chassis_msgs__msg__CommStatus
    std::shared_ptr<masc_chassis_msgs::msg::CommStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->comm_state != other.comm_state) {
      return false;
    }
    if (this->fail_reason != other.fail_reason) {
      return false;
    }
    if (this->motion_command_timeout_active != other.motion_command_timeout_active) {
      return false;
    }
    if (this->connection_attempt_count != other.connection_attempt_count) {
      return false;
    }
    if (this->transport_error_count != other.transport_error_count) {
      return false;
    }
    if (this->tx_error_count != other.tx_error_count) {
      return false;
    }
    if (this->rx_error_count != other.rx_error_count) {
      return false;
    }
    if (this->chassis_uuid != other.chassis_uuid) {
      return false;
    }
    if (this->system_software_hardware_version != other.system_software_hardware_version) {
      return false;
    }
    if (this->chassis_type_version != other.chassis_type_version) {
      return false;
    }
    if (this->chassis_protocol_version != other.chassis_protocol_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommStatus_

// alias to use template instance with default allocator
using CommStatus =
  masc_chassis_msgs::msg::CommStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::COMM_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::COMM_STATE_DISCONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::COMM_STATE_CONNECTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::COMM_STATE_PROTOCOL_MISMATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::COMM_STATE_CONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_PORT_OPEN_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_VERSION_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_PROTOCOL_VERSION_MISMATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_READ_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_WRITE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_TRANSPORT_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::FAIL_REASON_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_RESERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_DIFF_2WD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_DIFF_4WD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_DIFF_6WD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_DIFF_8WD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_TRICYCLE_UNSPECIFIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_TRICYCLE_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_TRICYCLE_REAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_ACKERMANN_UNSPECIFIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_ACKERMANN_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_ACKERMANN_REAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_ACKERMANN_FRONT_REAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_AWS_4WS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_AWS_6WS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CommStatus_<ContainerAllocator>::CHASSIS_TYPE_AWS_8WS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace masc_chassis_msgs

#endif  // MASC_CHASSIS_MSGS__MSG__DETAIL__COMM_STATUS__STRUCT_HPP_
