// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_move:srv/Plan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_move/srv/detail/plan__rosidl_typesupport_introspection_c.h"
#include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_move/srv/detail/plan__functions.h"
#include "panda_move/srv/detail/plan__struct.h"


// Include directives for member types
// Member `trajectories`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `trajectories`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__Plan_Request__init(message_memory);
}

void panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_fini_function(void * message_memory)
{
  panda_move__srv__Plan_Request__fini(message_memory);
}

size_t panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__size_function__Plan_Request__trajectories(
  const void * untyped_member)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__get_const_function__Plan_Request__trajectories(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__get_function__Plan_Request__trajectories(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__fetch_function__Plan_Request__trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__RobotTrajectory * item =
    ((const moveit_msgs__msg__RobotTrajectory *)
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__get_const_function__Plan_Request__trajectories(untyped_member, index));
  moveit_msgs__msg__RobotTrajectory * value =
    (moveit_msgs__msg__RobotTrajectory *)(untyped_value);
  *value = *item;
}

void panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__assign_function__Plan_Request__trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__RobotTrajectory * item =
    ((moveit_msgs__msg__RobotTrajectory *)
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__get_function__Plan_Request__trajectories(untyped_member, index));
  const moveit_msgs__msg__RobotTrajectory * value =
    (const moveit_msgs__msg__RobotTrajectory *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__resize_function__Plan_Request__trajectories(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__RobotTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_member_array[1] = {
  {
    "trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Plan_Request, trajectories),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__size_function__Plan_Request__trajectories,  // size() function pointer
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__get_const_function__Plan_Request__trajectories,  // get_const(index) function pointer
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__get_function__Plan_Request__trajectories,  // get(index) function pointer
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__fetch_function__Plan_Request__trajectories,  // fetch(index, &value) function pointer
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__assign_function__Plan_Request__trajectories,  // assign(index, value) function pointer
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__resize_function__Plan_Request__trajectories  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_members = {
  "panda_move__srv",  // message namespace
  "Plan_Request",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__Plan_Request),
  panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_member_array,  // message members
  panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_type_support_handle = {
  0,
  &panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan_Request)() {
  panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  if (!panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__Plan_Request__rosidl_typesupport_introspection_c__Plan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_move/srv/detail/plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_move/srv/detail/plan__functions.h"
// already included above
// #include "panda_move/srv/detail/plan__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__Plan_Response__init(message_memory);
}

void panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_fini_function(void * message_memory)
{
  panda_move__srv__Plan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_member_array[1] = {
  {
    "execute_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Plan_Response, execute_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_members = {
  "panda_move__srv",  // message namespace
  "Plan_Response",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__Plan_Response),
  panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_member_array,  // message members
  panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_type_support_handle = {
  0,
  &panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan_Response)() {
  if (!panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__Plan_Response__rosidl_typesupport_introspection_c__Plan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panda_move/srv/detail/plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_members = {
  "panda_move__srv",  // service namespace
  "Plan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_Request_message_type_support_handle,
  NULL  // response message
  // panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_Response_message_type_support_handle
};

static rosidl_service_type_support_t panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_type_support_handle = {
  0,
  &panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan)() {
  if (!panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_type_support_handle.typesupport_identifier) {
    panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Plan_Response)()->data;
  }

  return &panda_move__srv__detail__plan__rosidl_typesupport_introspection_c__Plan_service_type_support_handle;
}
