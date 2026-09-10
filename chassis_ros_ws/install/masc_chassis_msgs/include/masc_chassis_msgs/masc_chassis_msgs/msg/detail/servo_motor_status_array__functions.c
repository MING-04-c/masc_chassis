// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/ServoMotorStatusArray.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/servo_motor_status_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "masc_chassis_msgs/msg/detail/servo_motor_status__functions.h"

bool
masc_chassis_msgs__msg__ServoMotorStatusArray__init(masc_chassis_msgs__msg__ServoMotorStatusArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    masc_chassis_msgs__msg__ServoMotorStatusArray__fini(msg);
    return false;
  }
  // status
  if (!masc_chassis_msgs__msg__ServoMotorStatus__Sequence__init(&msg->status, 0)) {
    masc_chassis_msgs__msg__ServoMotorStatusArray__fini(msg);
    return false;
  }
  return true;
}

void
masc_chassis_msgs__msg__ServoMotorStatusArray__fini(masc_chassis_msgs__msg__ServoMotorStatusArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  masc_chassis_msgs__msg__ServoMotorStatus__Sequence__fini(&msg->status);
}

bool
masc_chassis_msgs__msg__ServoMotorStatusArray__are_equal(const masc_chassis_msgs__msg__ServoMotorStatusArray * lhs, const masc_chassis_msgs__msg__ServoMotorStatusArray * rhs)
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
  // status
  if (!masc_chassis_msgs__msg__ServoMotorStatus__Sequence__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__msg__ServoMotorStatusArray__copy(
  const masc_chassis_msgs__msg__ServoMotorStatusArray * input,
  masc_chassis_msgs__msg__ServoMotorStatusArray * output)
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
  // status
  if (!masc_chassis_msgs__msg__ServoMotorStatus__Sequence__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

masc_chassis_msgs__msg__ServoMotorStatusArray *
masc_chassis_msgs__msg__ServoMotorStatusArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__ServoMotorStatusArray * msg = (masc_chassis_msgs__msg__ServoMotorStatusArray *)allocator.allocate(sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray));
  bool success = masc_chassis_msgs__msg__ServoMotorStatusArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__ServoMotorStatusArray__destroy(masc_chassis_msgs__msg__ServoMotorStatusArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__ServoMotorStatusArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__init(masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__ServoMotorStatusArray * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__ServoMotorStatusArray *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__ServoMotorStatusArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__ServoMotorStatusArray__fini(&data[i - 1]);
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
masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__fini(masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * array)
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
      masc_chassis_msgs__msg__ServoMotorStatusArray__fini(&array->data[i]);
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

masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence *
masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * array = (masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__destroy(masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__are_equal(const masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * lhs, const masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__ServoMotorStatusArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__copy(
  const masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * input,
  masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__ServoMotorStatusArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__ServoMotorStatusArray * data =
      (masc_chassis_msgs__msg__ServoMotorStatusArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__ServoMotorStatusArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__ServoMotorStatusArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__ServoMotorStatusArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
