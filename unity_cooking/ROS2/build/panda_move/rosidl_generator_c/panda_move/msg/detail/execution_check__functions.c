// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panda_move:msg/ExecutionCheck.idl
// generated code does not contain a copyright notice
#include "panda_move/msg/detail/execution_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
panda_move__msg__ExecutionCheck__init(panda_move__msg__ExecutionCheck * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
panda_move__msg__ExecutionCheck__fini(panda_move__msg__ExecutionCheck * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
panda_move__msg__ExecutionCheck__are_equal(const panda_move__msg__ExecutionCheck * lhs, const panda_move__msg__ExecutionCheck * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
panda_move__msg__ExecutionCheck__copy(
  const panda_move__msg__ExecutionCheck * input,
  panda_move__msg__ExecutionCheck * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

panda_move__msg__ExecutionCheck *
panda_move__msg__ExecutionCheck__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__msg__ExecutionCheck * msg = (panda_move__msg__ExecutionCheck *)allocator.allocate(sizeof(panda_move__msg__ExecutionCheck), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_move__msg__ExecutionCheck));
  bool success = panda_move__msg__ExecutionCheck__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_move__msg__ExecutionCheck__destroy(panda_move__msg__ExecutionCheck * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_move__msg__ExecutionCheck__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_move__msg__ExecutionCheck__Sequence__init(panda_move__msg__ExecutionCheck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__msg__ExecutionCheck * data = NULL;

  if (size) {
    data = (panda_move__msg__ExecutionCheck *)allocator.zero_allocate(size, sizeof(panda_move__msg__ExecutionCheck), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_move__msg__ExecutionCheck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_move__msg__ExecutionCheck__fini(&data[i - 1]);
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
panda_move__msg__ExecutionCheck__Sequence__fini(panda_move__msg__ExecutionCheck__Sequence * array)
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
      panda_move__msg__ExecutionCheck__fini(&array->data[i]);
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

panda_move__msg__ExecutionCheck__Sequence *
panda_move__msg__ExecutionCheck__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__msg__ExecutionCheck__Sequence * array = (panda_move__msg__ExecutionCheck__Sequence *)allocator.allocate(sizeof(panda_move__msg__ExecutionCheck__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_move__msg__ExecutionCheck__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_move__msg__ExecutionCheck__Sequence__destroy(panda_move__msg__ExecutionCheck__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_move__msg__ExecutionCheck__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_move__msg__ExecutionCheck__Sequence__are_equal(const panda_move__msg__ExecutionCheck__Sequence * lhs, const panda_move__msg__ExecutionCheck__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_move__msg__ExecutionCheck__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_move__msg__ExecutionCheck__Sequence__copy(
  const panda_move__msg__ExecutionCheck__Sequence * input,
  panda_move__msg__ExecutionCheck__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_move__msg__ExecutionCheck);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_move__msg__ExecutionCheck * data =
      (panda_move__msg__ExecutionCheck *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_move__msg__ExecutionCheck__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_move__msg__ExecutionCheck__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_move__msg__ExecutionCheck__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
