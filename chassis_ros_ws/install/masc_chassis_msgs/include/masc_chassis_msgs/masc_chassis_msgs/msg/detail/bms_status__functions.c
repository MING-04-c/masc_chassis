// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/bms_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
masc_chassis_msgs__msg__BmsStatus__init(masc_chassis_msgs__msg__BmsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    masc_chassis_msgs__msg__BmsStatus__fini(msg);
    return false;
  }
  // bat_soc
  // bat_soh
  // bat_voltage
  // bat_current
  // bat_max_voltage
  // bat_max_current
  // bat_temp_max
  // bat_temp_min
  // bms_health
  // bms_cycle_count
  return true;
}

void
masc_chassis_msgs__msg__BmsStatus__fini(masc_chassis_msgs__msg__BmsStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bat_soc
  // bat_soh
  // bat_voltage
  // bat_current
  // bat_max_voltage
  // bat_max_current
  // bat_temp_max
  // bat_temp_min
  // bms_health
  // bms_cycle_count
}

bool
masc_chassis_msgs__msg__BmsStatus__are_equal(const masc_chassis_msgs__msg__BmsStatus * lhs, const masc_chassis_msgs__msg__BmsStatus * rhs)
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
  // bat_soc
  if (lhs->bat_soc != rhs->bat_soc) {
    return false;
  }
  // bat_soh
  if (lhs->bat_soh != rhs->bat_soh) {
    return false;
  }
  // bat_voltage
  if (lhs->bat_voltage != rhs->bat_voltage) {
    return false;
  }
  // bat_current
  if (lhs->bat_current != rhs->bat_current) {
    return false;
  }
  // bat_max_voltage
  if (lhs->bat_max_voltage != rhs->bat_max_voltage) {
    return false;
  }
  // bat_max_current
  if (lhs->bat_max_current != rhs->bat_max_current) {
    return false;
  }
  // bat_temp_max
  if (lhs->bat_temp_max != rhs->bat_temp_max) {
    return false;
  }
  // bat_temp_min
  if (lhs->bat_temp_min != rhs->bat_temp_min) {
    return false;
  }
  // bms_health
  if (lhs->bms_health != rhs->bms_health) {
    return false;
  }
  // bms_cycle_count
  if (lhs->bms_cycle_count != rhs->bms_cycle_count) {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__msg__BmsStatus__copy(
  const masc_chassis_msgs__msg__BmsStatus * input,
  masc_chassis_msgs__msg__BmsStatus * output)
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
  // bat_soc
  output->bat_soc = input->bat_soc;
  // bat_soh
  output->bat_soh = input->bat_soh;
  // bat_voltage
  output->bat_voltage = input->bat_voltage;
  // bat_current
  output->bat_current = input->bat_current;
  // bat_max_voltage
  output->bat_max_voltage = input->bat_max_voltage;
  // bat_max_current
  output->bat_max_current = input->bat_max_current;
  // bat_temp_max
  output->bat_temp_max = input->bat_temp_max;
  // bat_temp_min
  output->bat_temp_min = input->bat_temp_min;
  // bms_health
  output->bms_health = input->bms_health;
  // bms_cycle_count
  output->bms_cycle_count = input->bms_cycle_count;
  return true;
}

masc_chassis_msgs__msg__BmsStatus *
masc_chassis_msgs__msg__BmsStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__BmsStatus * msg = (masc_chassis_msgs__msg__BmsStatus *)allocator.allocate(sizeof(masc_chassis_msgs__msg__BmsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__BmsStatus));
  bool success = masc_chassis_msgs__msg__BmsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__BmsStatus__destroy(masc_chassis_msgs__msg__BmsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__BmsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__BmsStatus__Sequence__init(masc_chassis_msgs__msg__BmsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__BmsStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__BmsStatus)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__BmsStatus *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__BmsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__BmsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__BmsStatus__fini(&data[i - 1]);
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
masc_chassis_msgs__msg__BmsStatus__Sequence__fini(masc_chassis_msgs__msg__BmsStatus__Sequence * array)
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
      masc_chassis_msgs__msg__BmsStatus__fini(&array->data[i]);
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

masc_chassis_msgs__msg__BmsStatus__Sequence *
masc_chassis_msgs__msg__BmsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__BmsStatus__Sequence * array = (masc_chassis_msgs__msg__BmsStatus__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__BmsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__BmsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__BmsStatus__Sequence__destroy(masc_chassis_msgs__msg__BmsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__BmsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__BmsStatus__Sequence__are_equal(const masc_chassis_msgs__msg__BmsStatus__Sequence * lhs, const masc_chassis_msgs__msg__BmsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__BmsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__BmsStatus__Sequence__copy(
  const masc_chassis_msgs__msg__BmsStatus__Sequence * input,
  masc_chassis_msgs__msg__BmsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__BmsStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__BmsStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__BmsStatus * data =
      (masc_chassis_msgs__msg__BmsStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__BmsStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__BmsStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__BmsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
