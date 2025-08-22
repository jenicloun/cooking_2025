// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panda_move:srv/Hand.idl
// generated code does not contain a copyright notice
#include "panda_move/srv/detail/hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

bool
panda_move__srv__Hand_Request__init(panda_move__srv__Hand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // grasp_state
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    panda_move__srv__Hand_Request__fini(msg);
    return false;
  }
  // grasp_size
  return true;
}

void
panda_move__srv__Hand_Request__fini(panda_move__srv__Hand_Request * msg)
{
  if (!msg) {
    return;
  }
  // grasp_state
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
  // grasp_size
}

bool
panda_move__srv__Hand_Request__are_equal(const panda_move__srv__Hand_Request * lhs, const panda_move__srv__Hand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // grasp_state
  if (lhs->grasp_state != rhs->grasp_state) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  // grasp_size
  if (lhs->grasp_size != rhs->grasp_size) {
    return false;
  }
  return true;
}

bool
panda_move__srv__Hand_Request__copy(
  const panda_move__srv__Hand_Request * input,
  panda_move__srv__Hand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // grasp_state
  output->grasp_state = input->grasp_state;
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  // grasp_size
  output->grasp_size = input->grasp_size;
  return true;
}

panda_move__srv__Hand_Request *
panda_move__srv__Hand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__Hand_Request * msg = (panda_move__srv__Hand_Request *)allocator.allocate(sizeof(panda_move__srv__Hand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_move__srv__Hand_Request));
  bool success = panda_move__srv__Hand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_move__srv__Hand_Request__destroy(panda_move__srv__Hand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_move__srv__Hand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_move__srv__Hand_Request__Sequence__init(panda_move__srv__Hand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__Hand_Request * data = NULL;

  if (size) {
    data = (panda_move__srv__Hand_Request *)allocator.zero_allocate(size, sizeof(panda_move__srv__Hand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_move__srv__Hand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_move__srv__Hand_Request__fini(&data[i - 1]);
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
panda_move__srv__Hand_Request__Sequence__fini(panda_move__srv__Hand_Request__Sequence * array)
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
      panda_move__srv__Hand_Request__fini(&array->data[i]);
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

panda_move__srv__Hand_Request__Sequence *
panda_move__srv__Hand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__Hand_Request__Sequence * array = (panda_move__srv__Hand_Request__Sequence *)allocator.allocate(sizeof(panda_move__srv__Hand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_move__srv__Hand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_move__srv__Hand_Request__Sequence__destroy(panda_move__srv__Hand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_move__srv__Hand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_move__srv__Hand_Request__Sequence__are_equal(const panda_move__srv__Hand_Request__Sequence * lhs, const panda_move__srv__Hand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_move__srv__Hand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_move__srv__Hand_Request__Sequence__copy(
  const panda_move__srv__Hand_Request__Sequence * input,
  panda_move__srv__Hand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_move__srv__Hand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_move__srv__Hand_Request * data =
      (panda_move__srv__Hand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_move__srv__Hand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_move__srv__Hand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_move__srv__Hand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
panda_move__srv__Hand_Response__init(panda_move__srv__Hand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // execute_state
  return true;
}

void
panda_move__srv__Hand_Response__fini(panda_move__srv__Hand_Response * msg)
{
  if (!msg) {
    return;
  }
  // execute_state
}

bool
panda_move__srv__Hand_Response__are_equal(const panda_move__srv__Hand_Response * lhs, const panda_move__srv__Hand_Response * rhs)
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
panda_move__srv__Hand_Response__copy(
  const panda_move__srv__Hand_Response * input,
  panda_move__srv__Hand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // execute_state
  output->execute_state = input->execute_state;
  return true;
}

panda_move__srv__Hand_Response *
panda_move__srv__Hand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__Hand_Response * msg = (panda_move__srv__Hand_Response *)allocator.allocate(sizeof(panda_move__srv__Hand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_move__srv__Hand_Response));
  bool success = panda_move__srv__Hand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_move__srv__Hand_Response__destroy(panda_move__srv__Hand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_move__srv__Hand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_move__srv__Hand_Response__Sequence__init(panda_move__srv__Hand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__Hand_Response * data = NULL;

  if (size) {
    data = (panda_move__srv__Hand_Response *)allocator.zero_allocate(size, sizeof(panda_move__srv__Hand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_move__srv__Hand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_move__srv__Hand_Response__fini(&data[i - 1]);
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
panda_move__srv__Hand_Response__Sequence__fini(panda_move__srv__Hand_Response__Sequence * array)
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
      panda_move__srv__Hand_Response__fini(&array->data[i]);
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

panda_move__srv__Hand_Response__Sequence *
panda_move__srv__Hand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__srv__Hand_Response__Sequence * array = (panda_move__srv__Hand_Response__Sequence *)allocator.allocate(sizeof(panda_move__srv__Hand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_move__srv__Hand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_move__srv__Hand_Response__Sequence__destroy(panda_move__srv__Hand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_move__srv__Hand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_move__srv__Hand_Response__Sequence__are_equal(const panda_move__srv__Hand_Response__Sequence * lhs, const panda_move__srv__Hand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_move__srv__Hand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_move__srv__Hand_Response__Sequence__copy(
  const panda_move__srv__Hand_Response__Sequence * input,
  panda_move__srv__Hand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_move__srv__Hand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_move__srv__Hand_Response * data =
      (panda_move__srv__Hand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_move__srv__Hand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_move__srv__Hand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_move__srv__Hand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
