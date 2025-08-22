// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:srv/Sync.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__SYNC__STRUCT_H_
#define PANDA_MOVE__SRV__DETAIL__SYNC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'activated_object'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Sync in the package panda_move.
typedef struct panda_move__srv__Sync_Request
{
  rosidl_runtime_c__String__Sequence activated_object;
} panda_move__srv__Sync_Request;

// Struct for a sequence of panda_move__srv__Sync_Request.
typedef struct panda_move__srv__Sync_Request__Sequence
{
  panda_move__srv__Sync_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Sync_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'joint_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Sync in the package panda_move.
typedef struct panda_move__srv__Sync_Response
{
  rosidl_runtime_c__String__Sequence object_name;
  geometry_msgs__msg__Point__Sequence position;
  geometry_msgs__msg__Quaternion__Sequence orientation;
  rosidl_runtime_c__double__Sequence joint_state;
} panda_move__srv__Sync_Response;

// Struct for a sequence of panda_move__srv__Sync_Response.
typedef struct panda_move__srv__Sync_Response__Sequence
{
  panda_move__srv__Sync_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Sync_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__SRV__DETAIL__SYNC__STRUCT_H_
