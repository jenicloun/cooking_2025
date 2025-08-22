// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_move:srv/Plan.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__PLAN__STRUCT_H_
#define PANDA_MOVE__SRV__DETAIL__PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in srv/Plan in the package panda_move.
typedef struct panda_move__srv__Plan_Request
{
  moveit_msgs__msg__RobotTrajectory__Sequence trajectories;
} panda_move__srv__Plan_Request;

// Struct for a sequence of panda_move__srv__Plan_Request.
typedef struct panda_move__srv__Plan_Request__Sequence
{
  panda_move__srv__Plan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Plan_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Plan in the package panda_move.
typedef struct panda_move__srv__Plan_Response
{
  int64_t execute_state;
} panda_move__srv__Plan_Response;

// Struct for a sequence of panda_move__srv__Plan_Response.
typedef struct panda_move__srv__Plan_Response__Sequence
{
  panda_move__srv__Plan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_move__srv__Plan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_MOVE__SRV__DETAIL__PLAN__STRUCT_H_
