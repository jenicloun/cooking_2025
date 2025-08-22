// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:msg/ExecutionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__STRUCT_H_
#define PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ExecutionCheck in the package panda_move.
typedef struct panda_move__msg__ExecutionCheck
{
  int64_t status;
} panda_move__msg__ExecutionCheck;

// Struct for a sequence of panda_move__msg__ExecutionCheck.
typedef struct panda_move__msg__ExecutionCheck__Sequence
{
  panda_move__msg__ExecutionCheck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__msg__ExecutionCheck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__STRUCT_H_
