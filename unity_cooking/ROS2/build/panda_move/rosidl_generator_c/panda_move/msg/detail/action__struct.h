// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__ACTION__STRUCT_H_
#define PANDA_MOVE__MSG__DETAIL__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'params'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Action in the package panda_move.
typedef struct panda_move__msg__Action
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String__Sequence params;
} panda_move__msg__Action;

// Struct for a sequence of panda_move__msg__Action.
typedef struct panda_move__msg__Action__Sequence
{
  panda_move__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__MSG__DETAIL__ACTION__STRUCT_H_
