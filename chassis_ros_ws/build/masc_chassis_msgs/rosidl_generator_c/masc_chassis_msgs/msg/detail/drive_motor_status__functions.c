// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/DriveMotorStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/drive_motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
masc_chassis_msgs__msg__DriveMotorStatus__init(masc_chassis_msgs__msg__DriveMotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    masc_chassis_msgs__msg__DriveMotorStatus__fini(msg);
    return false;
  }
  // index
  // motor_temperature
  // driver_temperature
  // driver_fault
  return true;
}

void
masc_chassis_msgs__msg__DriveMotorStatus__fini(masc_chassis_msgs__msg__DriveMotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // index
  // motor_temperature
  // driver_temperature
  // driver_fault
}

bool
masc_chassis_msgs__msg__DriveMotorStatus__are_equal(const masc_chassis_msgs__msg__DriveMotorStatus * lhs, const masc_chassis_msgs__msg__DriveMotorStatus * rhs)
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
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // motor_temperature
  if (lhs->motor_temperature != rhs->motor_temperature) {
    return false;
  }
  // driver_temperature
  if (lhs->driver_temperature != rhs->driver_temperature) {
    return false;
  }
  // driver_fault
  if (lhs->driver_fault != rhs->driver_fault) {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__msg__DriveMotorStatus__copy(
  const masc_chassis_msgs__msg__DriveMotorStatus * input,
  masc_chassis_msgs__msg__DriveMotorStatus * output)
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
  // index
  output->index = input->index;
  // motor_temperature
  output->motor_temperature = input->motor_temperature;
  // driver_temperature
  output->driver_temperature = input->driver_temperature;
  // driver_fault
  output->driver_fault = input->driver_fault;
  return true;
}

masc_chassis_msgs__msg__DriveMotorStatus *
masc_chassis_msgs__msg__DriveMotorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__DriveMotorStatus * msg = (masc_chassis_msgs__msg__DriveMotorStatus *)allocator.allocate(sizeof(masc_chassis_msgs__msg__DriveMotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__DriveMotorStatus));
  bool success = masc_chassis_msgs__msg__DriveMotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__DriveMotorStatus__destroy(masc_chassis_msgs__msg__DriveMotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__DriveMotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__DriveMotorStatus__Sequence__init(masc_chassis_msgs__msg__DriveMotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__DriveMotorStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__DriveMotorStatus)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__DriveMotorStatus *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__DriveMotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__DriveMotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__DriveMotorStatus__fini(&data[i - 1]);
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
masc_chassis_msgs__msg__DriveMotorStatus__Sequence__fini(masc_chassis_msgs__msg__DriveMotorStatus__Sequence * array)
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
      masc_chassis_msgs__msg__DriveMotorStatus__fini(&array->data[i]);
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

masc_chassis_msgs__msg__DriveMotorStatus__Sequence *
masc_chassis_msgs__msg__DriveMotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__DriveMotorStatus__Sequence * array = (masc_chassis_msgs__msg__DriveMotorStatus__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__DriveMotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__DriveMotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__DriveMotorStatus__Sequence__destroy(masc_chassis_msgs__msg__DriveMotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__DriveMotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__DriveMotorStatus__Sequence__are_equal(const masc_chassis_msgs__msg__DriveMotorStatus__Sequence * lhs, const masc_chassis_msgs__msg__DriveMotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__DriveMotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__DriveMotorStatus__Sequence__copy(
  const masc_chassis_msgs__msg__DriveMotorStatus__Sequence * input,
  masc_chassis_msgs__msg__DriveMotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__DriveMotorStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__DriveMotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__DriveMotorStatus * data =
      (masc_chassis_msgs__msg__DriveMotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__DriveMotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__DriveMotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__DriveMotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
