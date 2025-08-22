// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:srv/MotionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__STRUCT_H_
#define PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motion_type'
// Member 'object_1'
// Member 'object_2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MotionCheck in the package panda_move.
typedef struct panda_move__srv__MotionCheck_Request
{
  rosidl_runtime_c__String motion_type;
  rosidl_runtime_c__String__Sequence object_1;
  rosidl_runtime_c__String__Sequence object_2;
} panda_move__srv__MotionCheck_Request;

// Struct for a sequence of panda_move__srv__MotionCheck_Request.
typedef struct panda_move__srv__MotionCheck_Request__Sequence
{
  panda_move__srv__MotionCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__MotionCheck_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MotionCheck in the package panda_move.
typedef struct panda_move__srv__MotionCheck_Response
{
  int64_t execute_state;
} panda_move__srv__MotionCheck_Response;

// Struct for a sequence of panda_move__srv__MotionCheck_Response.
typedef struct panda_move__srv__MotionCheck_Response__Sequence
{
  panda_move__srv__MotionCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__MotionCheck_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__STRUCT_H_
