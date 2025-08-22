// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panda_move:srv/MotionCheck.idl
// generated code does not contain a copyright notice
#include "panda_move/srv/detail/motion_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `motion_type`
// Member `object_1`
// Member `object_2`
#include "rosidl_runtime_c/string_functions.h"

bool
panda_move__srv__MotionCheck_Request__init(panda_move__srv__MotionCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_type
  if (!rosidl_runtime_c__String__init(&msg->motion_type)) {
    panda_move__srv__MotionCheck_Request__fini(msg);
    return false;
  }
  // object_1
  if (!rosidl_runtime_c__String__Sequence__init(&msg->object_1, 0)) {
    panda_move__srv__MotionCheck_Request__fini(msg);
    return false;
  }
  // object_2
  if (!rosidl_runtime_c__String__Sequence__init(&msg->object_2, 0)) {
    panda_move__srv__MotionCheck_Request__fini(msg);
    return false;
  }
  return true;
}

void
panda_move__srv__MotionCheck_Request__fini(panda_move__srv__MotionCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_type
  rosidl_runtime_c__String__fini(&msg->motion_type);
  // object_1
  rosidl_runtime_c__String__Sequence__fini(&msg->object_1);
  // object_2
  rosidl_runtime_c__String__Sequence__fini(&msg->object_2);
}

bool
panda_move__srv__MotionCheck_Request__are_equal(const panda_move__srv__MotionCheck_Request * lhs, const panda_move__srv__MotionCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motion_type), &(rhs->motion_type)))
  {
    return false;
  }
  // object_1
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->object_1), &(rhs->object_1)))
  {
    return false;
  }
  // object_2
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->object_2), &(rhs->object_2)))
  {
    return false;
  }
  return true;
}

bool
panda_move__srv__MotionCheck_Request__copy(
  const panda_move__srv__MotionCheck_Request * input,
  panda_move__srv__MotionCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_type
  if (!rosidl_runtime_c__String__copy(
      &(input->motion_type), &(output->motion_type)))
  {
    return false;
  }
  // object_1
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->object_1), &(output->object_1)))
  {
    return false;
  }
  // object_2
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->object_2), &(output->object_2)))
  {
    return false;
  }
  return true;
}

panda_move__srv__MotionCheck_Request *
panda_move__srv__MotionCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__MotionCheck_Request * msg = (panda_move__srv__MotionCheck_Request *)allocator.allocate(sizeof(panda_move__srv__MotionCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_move__srv__MotionCheck_Request));
  bool success = panda_move__srv__MotionCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_move__srv__MotionCheck_Request__destroy(panda_move__srv__MotionCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_move__srv__MotionCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_move__srv__MotionCheck_Request__Sequence__init(panda_move__srv__MotionCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__MotionCheck_Request * data = NULL;

  if (size) {
    data = (panda_move__srv__MotionCheck_Request *)allocator.zero_allocate(size, sizeof(panda_move__srv__MotionCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_move__srv__MotionCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_move__srv__MotionCheck_Request__fini(&data[i - 1]);
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
panda_move__srv__MotionCheck_Request__Sequence__fini(panda_move__srv__MotionCheck_Request__Sequence * array)
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
      panda_move__srv__MotionCheck_Request__fini(&array->data[i]);
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

panda_move__srv__MotionCheck_Request__Sequence *
panda_move__srv__MotionCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__MotionCheck_Request__Sequence * array = (panda_move__srv__MotionCheck_Request__Sequence *)allocator.allocate(sizeof(panda_move__srv__MotionCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_move__srv__MotionCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_move__srv__MotionCheck_Request__Sequence__destroy(panda_move__srv__MotionCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_move__srv__MotionCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_move__srv__MotionCheck_Request__Sequence__are_equal(const panda_move__srv__MotionCheck_Request__Sequence * lhs, const panda_move__srv__MotionCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_move__srv__MotionCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_move__srv__MotionCheck_Request__Sequence__copy(
  const panda_move__srv__MotionCheck_Request__Sequence * input,
  panda_move__srv__MotionCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_move__srv__MotionCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_move__srv__MotionCheck_Request * data =
      (panda_move__srv__MotionCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_move__srv__MotionCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_move__srv__MotionCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_move__srv__MotionCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
panda_move__srv__MotionCheck_Response__init(panda_move__srv__MotionCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // execute_state
  return true;
}

void
panda_move__srv__MotionCheck_Response__fini(panda_move__srv__MotionCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // execute_state
}

bool
panda_move__srv__MotionCheck_Response__are_equal(const panda_move__srv__MotionCheck_Response * lhs, const panda_move__srv__MotionCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // execute_state
  if (lhs->execute_state != rhs->execute_state) {
    return false;
  }
  return true;
}

bool
panda_move__srv__MotionCheck_Response__copy(
  const panda_move__srv__MotionCheck_Response * input,
  panda_move__srv__MotionCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // execute_state
  output->execute_state = input->execute_state;
  return true;
}

panda_move__srv__MotionCheck_Response *
panda_move__srv__MotionCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__MotionCheck_Response * msg = (panda_move__srv__MotionCheck_Response *)allocator.allocate(sizeof(panda_move__srv__MotionCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_move__srv__MotionCheck_Response));
  bool success = panda_move__srv__MotionCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_move__srv__MotionCheck_Response__destroy(panda_move__srv__MotionCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_move__srv__MotionCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_move__srv__MotionCheck_Response__Sequence__init(panda_move__srv__MotionCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__MotionCheck_Response * data = NULL;

  if (size) {
    data = (panda_move__srv__MotionCheck_Response *)allocator.zero_allocate(size, sizeof(panda_move__srv__MotionCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_move__srv__MotionCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_move__srv__MotionCheck_Response__fini(&data[i - 1]);
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
panda_move__srv__MotionCheck_Response__Sequence__fini(panda_move__srv__MotionCheck_Response__Sequence * array)
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
      panda_move__srv__MotionCheck_Response__fini(&array->data[i]);
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

panda_move__srv__MotionCheck_Response__Sequence *
panda_move__srv__MotionCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__MotionCheck_Response__Sequence * array = (panda_move__srv__MotionCheck_Response__Sequence *)allocator.allocate(sizeof(panda_move__srv__MotionCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_move__srv__MotionCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_move__srv__MotionCheck_Response__Sequence__destroy(panda_move__srv__MotionCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_move__srv__MotionCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_move__srv__MotionCheck_Response__Sequence__are_equal(const panda_move__srv__MotionCheck_Response__Sequence * lhs, const panda_move__srv__MotionCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_move__srv__MotionCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_move__srv__MotionCheck_Response__Sequence__copy(
  const panda_move__srv__MotionCheck_Response__Sequence * input,
  panda_move__srv__MotionCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_move__srv__MotionCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_move__srv__MotionCheck_Response * data =
      (panda_move__srv__MotionCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_move__srv__MotionCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_move__srv__MotionCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_move__srv__MotionCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
