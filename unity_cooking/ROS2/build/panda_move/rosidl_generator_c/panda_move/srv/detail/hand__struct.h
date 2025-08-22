// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:srv/Hand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__HAND__STRUCT_H_
#define PANDA_MOVE__SRV__DETAIL__HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Hand in the package panda_move.
typedef struct panda_move__srv__Hand_Request
{
  bool grasp_state;
  rosidl_runtime_c__String object_name;
  double grasp_size;
} panda_move__srv__Hand_Request;

// Struct for a sequence of panda_move__srv__Hand_Request.
typedef struct panda_move__srv__Hand_Request__Sequence
{
  panda_move__srv__Hand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Hand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Hand in the package panda_move.
typedef struct panda_move__srv__Hand_Response
{
  int64_t execute_state;
} panda_move__srv__Hand_Response;

// Struct for a sequence of panda_move__srv__Hand_Response.
typedef struct panda_move__srv__Hand_Response__Sequence
{
  panda_move__srv__Hand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Hand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__SRV__DETAIL__HAND__STRUCT_H_
