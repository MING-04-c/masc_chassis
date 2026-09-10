// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `can_id`
#include "rosidl_runtime_c/string_functions.h"

bool
masc_chassis_msgs__msg__CanFrameStats__init(masc_chassis_msgs__msg__CanFrameStats * msg)
{
  if (!msg) {
    return false;
  }
  // can_id
  if (!rosidl_runtime_c__String__init(&msg->can_id)) {
    masc_chassis_msgs__msg__CanFrameStats__fini(msg);
    return false;
  }
  // rx_count
  // parse_error_count
  // drop_count
  // frequency
  // last_rx_age_ms
  return true;
}

void
masc_chassis_msgs__msg__CanFrameStats__fini(masc_chassis_msgs__msg__CanFrameStats * msg)
{
  if (!msg) {
    return;
  }
  // can_id
  rosidl_runtime_c__String__fini(&msg->can_id);
  // rx_count
  // parse_error_count
  // drop_count
  // frequency
  // last_rx_age_ms
}

bool
masc_chassis_msgs__msg__CanFrameStats__are_equal(const masc_chassis_msgs__msg__CanFrameStats * lhs, const masc_chassis_msgs__msg__CanFrameStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // can_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->can_id), &(rhs->can_id)))
  {
    return false;
  }
  // rx_count
  if (lhs->rx_count != rhs->rx_count) {
    return false;
  }
  // parse_error_count
  if (lhs->parse_error_count != rhs->parse_error_count) {
    return false;
  }
  // drop_count
  if (lhs->drop_count != rhs->drop_count) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // last_rx_age_ms
  if (lhs->last_rx_age_ms != rhs->last_rx_age_ms) {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__msg__CanFrameStats__copy(
  const masc_chassis_msgs__msg__CanFrameStats * input,
  masc_chassis_msgs__msg__CanFrameStats * output)
{
  if (!input || !output) {
    return false;
  }
  // can_id
  if (!rosidl_runtime_c__String__copy(
      &(input->can_id), &(output->can_id)))
  {
    return false;
  }
  // rx_count
  output->rx_count = input->rx_count;
  // parse_error_count
  output->parse_error_count = input->parse_error_count;
  // drop_count
  output->drop_count = input->drop_count;
  // frequency
  output->frequency = input->frequency;
  // last_rx_age_ms
  output->last_rx_age_ms = input->last_rx_age_ms;
  return true;
}

masc_chassis_msgs__msg__CanFrameStats *
masc_chassis_msgs__msg__CanFrameStats__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__CanFrameStats * msg = (masc_chassis_msgs__msg__CanFrameStats *)allocator.allocate(sizeof(masc_chassis_msgs__msg__CanFrameStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__CanFrameStats));
  bool success = masc_chassis_msgs__msg__CanFrameStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__CanFrameStats__destroy(masc_chassis_msgs__msg__CanFrameStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__CanFrameStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__CanFrameStats__Sequence__init(masc_chassis_msgs__msg__CanFrameStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__CanFrameStats * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__CanFrameStats)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__CanFrameStats *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__CanFrameStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__CanFrameStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__CanFrameStats__fini(&data[i - 1]);
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
masc_chassis_msgs__msg__CanFrameStats__Sequence__fini(masc_chassis_msgs__msg__CanFrameStats__Sequence * array)
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
      masc_chassis_msgs__msg__CanFrameStats__fini(&array->data[i]);
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

masc_chassis_msgs__msg__CanFrameStats__Sequence *
masc_chassis_msgs__msg__CanFrameStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__CanFrameStats__Sequence * array = (masc_chassis_msgs__msg__CanFrameStats__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__CanFrameStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__CanFrameStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__CanFrameStats__Sequence__destroy(masc_chassis_msgs__msg__CanFrameStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__CanFrameStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__CanFrameStats__Sequence__are_equal(const masc_chassis_msgs__msg__CanFrameStats__Sequence * lhs, const masc_chassis_msgs__msg__CanFrameStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__CanFrameStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__CanFrameStats__Sequence__copy(
  const masc_chassis_msgs__msg__CanFrameStats__Sequence * input,
  masc_chassis_msgs__msg__CanFrameStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__CanFrameStats)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__CanFrameStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__CanFrameStats * data =
      (masc_chassis_msgs__msg__CanFrameStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__CanFrameStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__CanFrameStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__CanFrameStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
