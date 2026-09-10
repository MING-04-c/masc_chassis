// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/comm_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
masc_chassis_msgs__msg__CommStatus__init(masc_chassis_msgs__msg__CommStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    masc_chassis_msgs__msg__CommStatus__fini(msg);
    return false;
  }
  // comm_state
  // fail_reason
  // motion_command_timeout_active
  // connection_attempt_count
  // transport_error_count
  // tx_error_count
  // rx_error_count
  // chassis_uuid
  // system_software_hardware_version
  // chassis_type_version
  // chassis_protocol_version
  return true;
}

void
masc_chassis_msgs__msg__CommStatus__fini(masc_chassis_msgs__msg__CommStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // comm_state
  // fail_reason
  // motion_command_timeout_active
  // connection_attempt_count
  // transport_error_count
  // tx_error_count
  // rx_error_count
  // chassis_uuid
  // system_software_hardware_version
  // chassis_type_version
  // chassis_protocol_version
}

bool
masc_chassis_msgs__msg__CommStatus__are_equal(const masc_chassis_msgs__msg__CommStatus * lhs, const masc_chassis_msgs__msg__CommStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // comm_state
  if (lhs->comm_state != rhs->comm_state) {
    return false;
  }
  // fail_reason
  if (lhs->fail_reason != rhs->fail_reason) {
    return false;
  }
  // motion_command_timeout_active
  if (lhs->motion_command_timeout_active != rhs->motion_command_timeout_active) {
    return false;
  }
  // connection_attempt_count
  if (lhs->connection_attempt_count != rhs->connection_attempt_count) {
    return false;
  }
  // transport_error_count
  if (lhs->transport_error_count != rhs->transport_error_count) {
    return false;
  }
  // tx_error_count
  if (lhs->tx_error_count != rhs->tx_error_count) {
    return false;
  }
  // rx_error_count
  if (lhs->rx_error_count != rhs->rx_error_count) {
    return false;
  }
  // chassis_uuid
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->chassis_uuid[i] != rhs->chassis_uuid[i]) {
      return false;
    }
  }
  // system_software_hardware_version
  if (lhs->system_software_hardware_version != rhs->system_software_hardware_version) {
    return false;
  }
  // chassis_type_version
  if (lhs->chassis_type_version != rhs->chassis_type_version) {
    return false;
  }
  // chassis_protocol_version
  if (lhs->chassis_protocol_version != rhs->chassis_protocol_version) {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__msg__CommStatus__copy(
  const masc_chassis_msgs__msg__CommStatus * input,
  masc_chassis_msgs__msg__CommStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // comm_state
  output->comm_state = input->comm_state;
  // fail_reason
  output->fail_reason = input->fail_reason;
  // motion_command_timeout_active
  output->motion_command_timeout_active = input->motion_command_timeout_active;
  // connection_attempt_count
  output->connection_attempt_count = input->connection_attempt_count;
  // transport_error_count
  output->transport_error_count = input->transport_error_count;
  // tx_error_count
  output->tx_error_count = input->tx_error_count;
  // rx_error_count
  output->rx_error_count = input->rx_error_count;
  // chassis_uuid
  for (size_t i = 0; i < 5; ++i) {
    output->chassis_uuid[i] = input->chassis_uuid[i];
  }
  // system_software_hardware_version
  output->system_software_hardware_version = input->system_software_hardware_version;
  // chassis_type_version
  output->chassis_type_version = input->chassis_type_version;
  // chassis_protocol_version
  output->chassis_protocol_version = input->chassis_protocol_version;
  return true;
}

masc_chassis_msgs__msg__CommStatus *
masc_chassis_msgs__msg__CommStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__CommStatus * msg = (masc_chassis_msgs__msg__CommStatus *)allocator.allocate(sizeof(masc_chassis_msgs__msg__CommStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__CommStatus));
  bool success = masc_chassis_msgs__msg__CommStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__CommStatus__destroy(masc_chassis_msgs__msg__CommStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__CommStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__CommStatus__Sequence__init(masc_chassis_msgs__msg__CommStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__CommStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__CommStatus)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__CommStatus *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__CommStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__CommStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__CommStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
masc_chassis_msgs__msg__CommStatus__Sequence__fini(masc_chassis_msgs__msg__CommStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      masc_chassis_msgs__msg__CommStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

masc_chassis_msgs__msg__CommStatus__Sequence *
masc_chassis_msgs__msg__CommStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__CommStatus__Sequence * array = (masc_chassis_msgs__msg__CommStatus__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__CommStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__CommStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__CommStatus__Sequence__destroy(masc_chassis_msgs__msg__CommStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__CommStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__CommStatus__Sequence__are_equal(const masc_chassis_msgs__msg__CommStatus__Sequence * lhs, const masc_chassis_msgs__msg__CommStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__CommStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__CommStatus__Sequence__copy(
  const masc_chassis_msgs__msg__CommStatus__Sequence * input,
  masc_chassis_msgs__msg__CommStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__CommStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__CommStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__CommStatus * data =
      (masc_chassis_msgs__msg__CommStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__CommStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__CommStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__CommStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
