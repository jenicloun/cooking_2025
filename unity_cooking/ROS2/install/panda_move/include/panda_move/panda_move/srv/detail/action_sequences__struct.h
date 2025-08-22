// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:srv/ActionSequences.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__STRUCT_H_
#define PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action_sequences'
#include "panda_move/msg/detail/action__struct.h"

/// Struct defined in srv/ActionSequences in the package panda_move.
typedef struct panda_move__srv__ActionSequences_Request
{
  panda_move__msg__Action__Sequence action_sequences;
} panda_move__srv__ActionSequences_Request;

// Struct for a sequence of panda_move__srv__ActionSequences_Request.
typedef struct panda_move__srv__ActionSequences_Request__Sequence
{
  panda_move__srv__ActionSequences_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__ActionSequences_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ActionSequences in the package panda_move.
typedef struct panda_move__srv__ActionSequences_Response
{
  bool result;
} panda_move__srv__ActionSequences_Response;

// Struct for a sequence of panda_move__srv__ActionSequences_Response.
typedef struct panda_move__srv__ActionSequences_Response__Sequence
{
  panda_move__srv__ActionSequences_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__ActionSequences_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__STRUCT_H_
