// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/msg/detail/chassis_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
masc_chassis_msgs__msg__ChassisStatus__init(masc_chassis_msgs__msg__ChassisStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    masc_chassis_msgs__msg__ChassisStatus__fini(msg);
    return false;
  }
  // chassis_state
  // current_motion_mode
  // motion_mode_switching
  // brake_active
  // low_battery
  // excessive_tilt
  // manual_charging
  // dock_charging
  // main_power_active
  // obstacle_status_flags
  // system_status_flags
  // chassis_fault
  return true;
}

void
masc_chassis_msgs__msg__ChassisStatus__fini(masc_chassis_msgs__msg__ChassisStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // chassis_state
  // current_motion_mode
  // motion_mode_switching
  // brake_active
  // low_battery
  // excessive_tilt
  // manual_charging
  // dock_charging
  // main_power_active
  // obstacle_status_flags
  // system_status_flags
  // chassis_fault
}

bool
masc_chassis_msgs__msg__ChassisStatus__are_equal(const masc_chassis_msgs__msg__ChassisStatus * lhs, const masc_chassis_msgs__msg__ChassisStatus * rhs)
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
  // chassis_state
  if (lhs->chassis_state != rhs->chassis_state) {
    return false;
  }
  // current_motion_mode
  if (lhs->current_motion_mode != rhs->current_motion_mode) {
    return false;
  }
  // motion_mode_switching
  if (lhs->motion_mode_switching != rhs->motion_mode_switching) {
    return false;
  }
  // brake_active
  if (lhs->brake_active != rhs->brake_active) {
    return false;
  }
  // low_battery
  if (lhs->low_battery != rhs->low_battery) {
    return false;
  }
  // excessive_tilt
  if (lhs->excessive_tilt != rhs->excessive_tilt) {
    return false;
  }
  // manual_charging
  if (lhs->manual_charging != rhs->manual_charging) {
    return false;
  }
  // dock_charging
  if (lhs->dock_charging != rhs->dock_charging) {
    return false;
  }
  // main_power_active
  if (lhs->main_power_active != rhs->main_power_active) {
    return false;
  }
  // obstacle_status_flags
  if (lhs->obstacle_status_flags != rhs->obstacle_status_flags) {
    return false;
  }
  // system_status_flags
  if (lhs->system_status_flags != rhs->system_status_flags) {
    return false;
  }
  // chassis_fault
  if (lhs->chassis_fault != rhs->chassis_fault) {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__msg__ChassisStatus__copy(
  const masc_chassis_msgs__msg__ChassisStatus * input,
  masc_chassis_msgs__msg__ChassisStatus * output)
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
  // chassis_state
  output->chassis_state = input->chassis_state;
  // current_motion_mode
  output->current_motion_mode = input->current_motion_mode;
  // motion_mode_switching
  output->motion_mode_switching = input->motion_mode_switching;
  // brake_active
  output->brake_active = input->brake_active;
  // low_battery
  output->low_battery = input->low_battery;
  // excessive_tilt
  output->excessive_tilt = input->excessive_tilt;
  // manual_charging
  output->manual_charging = input->manual_charging;
  // dock_charging
  output->dock_charging = input->dock_charging;
  // main_power_active
  output->main_power_active = input->main_power_active;
  // obstacle_status_flags
  output->obstacle_status_flags = input->obstacle_status_flags;
  // system_status_flags
  output->system_status_flags = input->system_status_flags;
  // chassis_fault
  output->chassis_fault = input->chassis_fault;
  return true;
}

masc_chassis_msgs__msg__ChassisStatus *
masc_chassis_msgs__msg__ChassisStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__ChassisStatus * msg = (masc_chassis_msgs__msg__ChassisStatus *)allocator.allocate(sizeof(masc_chassis_msgs__msg__ChassisStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__msg__ChassisStatus));
  bool success = masc_chassis_msgs__msg__ChassisStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__msg__ChassisStatus__destroy(masc_chassis_msgs__msg__ChassisStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__msg__ChassisStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__msg__ChassisStatus__Sequence__init(masc_chassis_msgs__msg__ChassisStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__ChassisStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__ChassisStatus)) {
      return false;
    }
    data = (masc_chassis_msgs__msg__ChassisStatus *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__msg__ChassisStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__msg__ChassisStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__msg__ChassisStatus__fini(&data[i - 1]);
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
masc_chassis_msgs__msg__ChassisStatus__Sequence__fini(masc_chassis_msgs__msg__ChassisStatus__Sequence * array)
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
      masc_chassis_msgs__msg__ChassisStatus__fini(&array->data[i]);
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

masc_chassis_msgs__msg__ChassisStatus__Sequence *
masc_chassis_msgs__msg__ChassisStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__msg__ChassisStatus__Sequence * array = (masc_chassis_msgs__msg__ChassisStatus__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__msg__ChassisStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__msg__ChassisStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__msg__ChassisStatus__Sequence__destroy(masc_chassis_msgs__msg__ChassisStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__msg__ChassisStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__msg__ChassisStatus__Sequence__are_equal(const masc_chassis_msgs__msg__ChassisStatus__Sequence * lhs, const masc_chassis_msgs__msg__ChassisStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__msg__ChassisStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__msg__ChassisStatus__Sequence__copy(
  const masc_chassis_msgs__msg__ChassisStatus__Sequence * input,
  masc_chassis_msgs__msg__ChassisStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__msg__ChassisStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__msg__ChassisStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__msg__ChassisStatus * data =
      (masc_chassis_msgs__msg__ChassisStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__msg__ChassisStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__msg__ChassisStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__msg__ChassisStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
