// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:srv/Init.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__INIT__STRUCT_H_
#define PANDA_MOVE__SRV__DETAIL__INIT__STRUCT_H_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'joint_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Init in the package panda_move.
typedef struct panda_move__srv__Init_Request
{
  rosidl_runtime_c__String__Sequence activated_object;
  geometry_msgs__msg__Point__Sequence position;
  geometry_msgs__msg__Quaternion__Sequence orientation;
  geometry_msgs__msg__Vector3__Sequence scale;
  rosidl_runtime_c__double__Sequence joint_state;
} panda_move__srv__Init_Request;

// Struct for a sequence of panda_move__srv__Init_Request.
typedef struct panda_move__srv__Init_Request__Sequence
{
  panda_move__srv__Init_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Init_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Init in the package panda_move.
typedef struct panda_move__srv__Init_Response
{
  int64_t init_state;
} panda_move__srv__Init_Response;

// Struct for a sequence of panda_move__srv__Init_Response.
typedef struct panda_move__srv__Init_Response__Sequence
{
  panda_move__srv__Init_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Init_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__SRV__DETAIL__INIT__STRUCT_H_
