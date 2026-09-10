// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from masc_chassis_msgs:srv/CalibrateServo.idl
// generated code does not contain a copyright notice
#include "masc_chassis_msgs/srv/detail/calibrate_servo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
masc_chassis_msgs__srv__CalibrateServo_Request__init(masc_chassis_msgs__srv__CalibrateServo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // servo_id
  return true;
}

void
masc_chassis_msgs__srv__CalibrateServo_Request__fini(masc_chassis_msgs__srv__CalibrateServo_Request * msg)
{
  if (!msg) {
    return;
  }
  // servo_id
}

bool
masc_chassis_msgs__srv__CalibrateServo_Request__are_equal(const masc_chassis_msgs__srv__CalibrateServo_Request * lhs, const masc_chassis_msgs__srv__CalibrateServo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_id
  if (lhs->servo_id != rhs->servo_id) {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__srv__CalibrateServo_Request__copy(
  const masc_chassis_msgs__srv__CalibrateServo_Request * input,
  masc_chassis_msgs__srv__CalibrateServo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_id
  output->servo_id = input->servo_id;
  return true;
}

masc_chassis_msgs__srv__CalibrateServo_Request *
masc_chassis_msgs__srv__CalibrateServo_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Request * msg = (masc_chassis_msgs__srv__CalibrateServo_Request *)allocator.allocate(sizeof(masc_chassis_msgs__srv__CalibrateServo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__srv__CalibrateServo_Request));
  bool success = masc_chassis_msgs__srv__CalibrateServo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__srv__CalibrateServo_Request__destroy(masc_chassis_msgs__srv__CalibrateServo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__srv__CalibrateServo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__init(masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__srv__CalibrateServo_Request)) {
      return false;
    }
    data = (masc_chassis_msgs__srv__CalibrateServo_Request *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__srv__CalibrateServo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__srv__CalibrateServo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__srv__CalibrateServo_Request__fini(&data[i - 1]);
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
masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__fini(masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * array)
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
      masc_chassis_msgs__srv__CalibrateServo_Request__fini(&array->data[i]);
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

masc_chassis_msgs__srv__CalibrateServo_Request__Sequence *
masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * array = (masc_chassis_msgs__srv__CalibrateServo_Request__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__srv__CalibrateServo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__destroy(masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__are_equal(const masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * lhs, const masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__srv__CalibrateServo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__copy(
  const masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * input,
  masc_chassis_msgs__srv__CalibrateServo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__srv__CalibrateServo_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__srv__CalibrateServo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__srv__CalibrateServo_Request * data =
      (masc_chassis_msgs__srv__CalibrateServo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__srv__CalibrateServo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__srv__CalibrateServo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__srv__CalibrateServo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
masc_chassis_msgs__srv__CalibrateServo_Response__init(masc_chassis_msgs__srv__CalibrateServo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    masc_chassis_msgs__srv__CalibrateServo_Response__fini(msg);
    return false;
  }
  return true;
}

void
masc_chassis_msgs__srv__CalibrateServo_Response__fini(masc_chassis_msgs__srv__CalibrateServo_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
masc_chassis_msgs__srv__CalibrateServo_Response__are_equal(const masc_chassis_msgs__srv__CalibrateServo_Response * lhs, const masc_chassis_msgs__srv__CalibrateServo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__srv__CalibrateServo_Response__copy(
  const masc_chassis_msgs__srv__CalibrateServo_Response * input,
  masc_chassis_msgs__srv__CalibrateServo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

masc_chassis_msgs__srv__CalibrateServo_Response *
masc_chassis_msgs__srv__CalibrateServo_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Response * msg = (masc_chassis_msgs__srv__CalibrateServo_Response *)allocator.allocate(sizeof(masc_chassis_msgs__srv__CalibrateServo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__srv__CalibrateServo_Response));
  bool success = masc_chassis_msgs__srv__CalibrateServo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__srv__CalibrateServo_Response__destroy(masc_chassis_msgs__srv__CalibrateServo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__srv__CalibrateServo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__init(masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__srv__CalibrateServo_Response)) {
      return false;
    }
    data = (masc_chassis_msgs__srv__CalibrateServo_Response *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__srv__CalibrateServo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__srv__CalibrateServo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__srv__CalibrateServo_Response__fini(&data[i - 1]);
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
masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__fini(masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * array)
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
      masc_chassis_msgs__srv__CalibrateServo_Response__fini(&array->data[i]);
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

masc_chassis_msgs__srv__CalibrateServo_Response__Sequence *
masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * array = (masc_chassis_msgs__srv__CalibrateServo_Response__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__srv__CalibrateServo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__destroy(masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__are_equal(const masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * lhs, const masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__srv__CalibrateServo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__copy(
  const masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * input,
  masc_chassis_msgs__srv__CalibrateServo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__srv__CalibrateServo_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__srv__CalibrateServo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__srv__CalibrateServo_Response * data =
      (masc_chassis_msgs__srv__CalibrateServo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__srv__CalibrateServo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__srv__CalibrateServo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__srv__CalibrateServo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "masc_chassis_msgs/srv/detail/calibrate_servo__functions.h"

bool
masc_chassis_msgs__srv__CalibrateServo_Event__init(masc_chassis_msgs__srv__CalibrateServo_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    masc_chassis_msgs__srv__CalibrateServo_Event__fini(msg);
    return false;
  }
  // request
  if (!masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__init(&msg->request, 0)) {
    masc_chassis_msgs__srv__CalibrateServo_Event__fini(msg);
    return false;
  }
  // response
  if (!masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__init(&msg->response, 0)) {
    masc_chassis_msgs__srv__CalibrateServo_Event__fini(msg);
    return false;
  }
  return true;
}

void
masc_chassis_msgs__srv__CalibrateServo_Event__fini(masc_chassis_msgs__srv__CalibrateServo_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__fini(&msg->request);
  // response
  masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__fini(&msg->response);
}

bool
masc_chassis_msgs__srv__CalibrateServo_Event__are_equal(const masc_chassis_msgs__srv__CalibrateServo_Event * lhs, const masc_chassis_msgs__srv__CalibrateServo_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
masc_chassis_msgs__srv__CalibrateServo_Event__copy(
  const masc_chassis_msgs__srv__CalibrateServo_Event * input,
  masc_chassis_msgs__srv__CalibrateServo_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

masc_chassis_msgs__srv__CalibrateServo_Event *
masc_chassis_msgs__srv__CalibrateServo_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Event * msg = (masc_chassis_msgs__srv__CalibrateServo_Event *)allocator.allocate(sizeof(masc_chassis_msgs__srv__CalibrateServo_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(masc_chassis_msgs__srv__CalibrateServo_Event));
  bool success = masc_chassis_msgs__srv__CalibrateServo_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
masc_chassis_msgs__srv__CalibrateServo_Event__destroy(masc_chassis_msgs__srv__CalibrateServo_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    masc_chassis_msgs__srv__CalibrateServo_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__init(masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(masc_chassis_msgs__srv__CalibrateServo_Event)) {
      return false;
    }
    data = (masc_chassis_msgs__srv__CalibrateServo_Event *)allocator.zero_allocate(size, sizeof(masc_chassis_msgs__srv__CalibrateServo_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = masc_chassis_msgs__srv__CalibrateServo_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        masc_chassis_msgs__srv__CalibrateServo_Event__fini(&data[i - 1]);
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
masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__fini(masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * array)
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
      masc_chassis_msgs__srv__CalibrateServo_Event__fini(&array->data[i]);
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

masc_chassis_msgs__srv__CalibrateServo_Event__Sequence *
masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * array = (masc_chassis_msgs__srv__CalibrateServo_Event__Sequence *)allocator.allocate(sizeof(masc_chassis_msgs__srv__CalibrateServo_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__destroy(masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__are_equal(const masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * lhs, const masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!masc_chassis_msgs__srv__CalibrateServo_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
masc_chassis_msgs__srv__CalibrateServo_Event__Sequence__copy(
  const masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * input,
  masc_chassis_msgs__srv__CalibrateServo_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(masc_chassis_msgs__srv__CalibrateServo_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(masc_chassis_msgs__srv__CalibrateServo_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    masc_chassis_msgs__srv__CalibrateServo_Event * data =
      (masc_chassis_msgs__srv__CalibrateServo_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!masc_chassis_msgs__srv__CalibrateServo_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          masc_chassis_msgs__srv__CalibrateServo_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!masc_chassis_msgs__srv__CalibrateServo_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
