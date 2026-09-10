// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/RcStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/rc_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
masc_chassis_msgs__msg__RcStatus__init(masc_chassis_msgs__msg__RcStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    masc_chassis_msgs__msg__RcStatus__fini(msg);
    return false;
  }
  // online
  // channels
  return true;
}

void
masc_chassis_msgs__msg__RcStatus__fini(masc_chassis_msgs__msg__RcStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // online
  // channels
}

bool
masc_chassis_msgs__msg__RcStatus__are_equal(const masc_chassis_msgs__msg__RcStatus * lhs, const masc_chassis_msgs__msg__RcStatus * rhs)
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
  // online
  if (lhs->online != rhs->online) {
    return false;
  }
  // channels
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->channels[i] != rhs->channels[i]) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__RcStatus__copy(
  const masc_chassis_msgs__msg__RcStatus * input,
  masc_chassis_msgs__msg__RcStatus * output)
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
  // online
  output->online = input->online;
  // channels
  for (size_t i = 0; i < 7; ++i) {
    output->channels[i] = input->channels[i];
  }
  return true;
}

masc_chassis_msgs__msg__RcStatus *
masc_chassis_msgs__msg__RcStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__RcStatus * msg = (masc_chassis_msgs__msg__RcStatus *)allocator.allocate(sizeof(masc_chassis_msgs__msg__RcStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__RcStatus));
  bool success = masc_chassis_msgs__msg__RcStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__RcStatus__destroy(masc_chassis_msgs__msg__RcStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__RcStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__RcStatus__Sequence__init(masc_chassis_msgs__msg__RcStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__RcStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__RcStatus)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__RcStatus *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__RcStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__RcStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__RcStatus__fini(&data[i - 1]);
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
masc_chassis_msgs__msg__RcStatus__Sequence__fini(masc_chassis_msgs__msg__RcStatus__Sequence * array)
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
      masc_chassis_msgs__msg__RcStatus__fini(&array->data[i]);
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

masc_chassis_msgs__msg__RcStatus__Sequence *
masc_chassis_msgs__msg__RcStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__RcStatus__Sequence * array = (masc_chassis_msgs__msg__RcStatus__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__RcStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__RcStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__RcStatus__Sequence__destroy(masc_chassis_msgs__msg__RcStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__RcStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__RcStatus__Sequence__are_equal(const masc_chassis_msgs__msg__RcStatus__Sequence * lhs, const masc_chassis_msgs__msg__RcStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__RcStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__RcStatus__Sequence__copy(
  const masc_chassis_msgs__msg__RcStatus__Sequence * input,
  masc_chassis_msgs__msg__RcStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__RcStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__RcStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__RcStatus * data =
      (masc_chassis_msgs__msg__RcStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__RcStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__RcStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__RcStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
