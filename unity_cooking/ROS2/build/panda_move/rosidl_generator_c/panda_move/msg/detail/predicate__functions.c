// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panda_move:msg/Predicate.idl
// generated code does not contain a copyright notice
#include "panda_move/msg/detail/predicate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `params`
#include "rosidl_runtime_c/string_functions.h"

bool
panda_move__msg__Predicate__init(panda_move__msg__Predicate * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    panda_move__msg__Predicate__fini(msg);
    return false;
  }
  // params
  if (!rosidl_runtime_c__String__Sequence__init(&msg->params, 0)) {
    panda_move__msg__Predicate__fini(msg);
    return false;
  }
  return true;
}

void
panda_move__msg__Predicate__fini(panda_move__msg__Predicate * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // params
  rosidl_runtime_c__String__Sequence__fini(&msg->params);
}

bool
panda_move__msg__Predicate__are_equal(const panda_move__msg__Predicate * lhs, const panda_move__msg__Predicate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // params
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  return true;
}

bool
panda_move__msg__Predicate__copy(
  const panda_move__msg__Predicate * input,
  panda_move__msg__Predicate * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // params
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  return true;
}

panda_move__msg__Predicate *
panda_move__msg__Predicate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__msg__Predicate * msg = (panda_move__msg__Predicate *)allocator.allocate(sizeof(panda_move__msg__Predicate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_move__msg__Predicate));
  bool success = panda_move__msg__Predicate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_move__msg__Predicate__destroy(panda_move__msg__Predicate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_move__msg__Predicate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_move__msg__Predicate__Sequence__init(panda_move__msg__Predicate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__msg__Predicate * data = NULL;

  if (size) {
    data = (panda_move__msg__Predicate *)allocator.zero_allocate(size, sizeof(panda_move__msg__Predicate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_move__msg__Predicate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_move__msg__Predicate__fini(&data[i - 1]);
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
panda_move__msg__Predicate__Sequence__fini(panda_move__msg__Predicate__Sequence * array)
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
      panda_move__msg__Predicate__fini(&array->data[i]);
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

panda_move__msg__Predicate__Sequence *
panda_move__msg__Predicate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_move__msg__Predicate__Sequence * array = (panda_move__msg__Predicate__Sequence *)allocator.allocate(sizeof(panda_move__msg__Predicate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_move__msg__Predicate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_move__msg__Predicate__Sequence__destroy(panda_move__msg__Predicate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_move__msg__Predicate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_move__msg__Predicate__Sequence__are_equal(const panda_move__msg__Predicate__Sequence * lhs, const panda_move__msg__Predicate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_move__msg__Predicate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_move__msg__Predicate__Sequence__copy(
  const panda_move__msg__Predicate__Sequence * input,
  panda_move__msg__Predicate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_move__msg__Predicate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_move__msg__Predicate * data =
      (panda_move__msg__Predicate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_move__msg__Predicate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_move__msg__Predicate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_move__msg__Predicate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
