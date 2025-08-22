// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_move:srv/Sync.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_move/srv/detail/sync__rosidl_typesupport_introspection_c.h"
#include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_move/srv/detail/sync__functions.h"
#include "panda_move/srv/detail/sync__struct.h"


// Include directives for member types
// Member `activated_object`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__Sync_Request__init(message_memory);
}

void panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_fini_function(void * message_memory)
{
  panda_move__srv__Sync_Request__fini(message_memory);
}

size_t panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__size_function__Sync_Request__activated_object(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__get_const_function__Sync_Request__activated_object(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__get_function__Sync_Request__activated_object(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__fetch_function__Sync_Request__activated_object(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__get_const_function__Sync_Request__activated_object(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__assign_function__Sync_Request__activated_object(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__get_function__Sync_Request__activated_object(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__resize_function__Sync_Request__activated_object(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_member_array[1] = {
  {
    "activated_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Sync_Request, activated_object),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__size_function__Sync_Request__activated_object,  // size() function pointer
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__get_const_function__Sync_Request__activated_object,  // get_const(index) function pointer
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__get_function__Sync_Request__activated_object,  // get(index) function pointer
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__fetch_function__Sync_Request__activated_object,  // fetch(index, &value) function pointer
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__assign_function__Sync_Request__activated_object,  // assign(index, value) function pointer
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__resize_function__Sync_Request__activated_object  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_members = {
  "panda_move__srv",  // message namespace
  "Sync_Request",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__Sync_Request),
  panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_member_array,  // message members
  panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_type_support_handle = {
  0,
  &panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync_Request)() {
  if (!panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__Sync_Request__rosidl_typesupport_introspection_c__Sync_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_move/srv/detail/sync__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_move/srv/detail/sync__functions.h"
// already included above
// #include "panda_move/srv/detail/sync__struct.h"


// Include directives for member types
// Member `object_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `joint_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__Sync_Response__init(message_memory);
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_fini_function(void * message_memory)
{
  panda_move__srv__Sync_Response__fini(message_memory);
}

size_t panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__object_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__object_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__object_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__object_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__object_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__object_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__object_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__object_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__position(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__position(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__position(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__position(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__position(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__position(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__orientation(
  const void * untyped_member)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__orientation(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__orientation(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Quaternion * item =
    ((const geometry_msgs__msg__Quaternion *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__orientation(untyped_member, index));
  geometry_msgs__msg__Quaternion * value =
    (geometry_msgs__msg__Quaternion *)(untyped_value);
  *value = *item;
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Quaternion * item =
    ((geometry_msgs__msg__Quaternion *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__orientation(untyped_member, index));
  const geometry_msgs__msg__Quaternion * value =
    (const geometry_msgs__msg__Quaternion *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__orientation(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  geometry_msgs__msg__Quaternion__Sequence__fini(member);
  return geometry_msgs__msg__Quaternion__Sequence__init(member, size);
}

size_t panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__joint_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__joint_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__joint_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__joint_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__joint_state(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__joint_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__joint_state(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__joint_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_member_array[4] = {
  {
    "object_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Sync_Response, object_name),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__object_name,  // size() function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__object_name,  // get_const(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__object_name,  // get(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__object_name,  // fetch(index, &value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__object_name,  // assign(index, value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__object_name  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Sync_Response, position),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__position,  // size() function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__position,  // get_const(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__position,  // get(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__position,  // fetch(index, &value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__position,  // assign(index, value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__position  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Sync_Response, orientation),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__orientation,  // size() function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__orientation,  // get_const(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__orientation,  // get(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__orientation,  // fetch(index, &value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__orientation,  // assign(index, value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__orientation  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__Sync_Response, joint_state),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__size_function__Sync_Response__joint_state,  // size() function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_const_function__Sync_Response__joint_state,  // get_const(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__get_function__Sync_Response__joint_state,  // get(index) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__fetch_function__Sync_Response__joint_state,  // fetch(index, &value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__assign_function__Sync_Response__joint_state,  // assign(index, value) function pointer
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__resize_function__Sync_Response__joint_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_members = {
  "panda_move__srv",  // message namespace
  "Sync_Response",  // message name
  4,  // number of fields
  sizeof(panda_move__srv__Sync_Response),
  panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_member_array,  // message members
  panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_type_support_handle = {
  0,
  &panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync_Response)() {
  panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__Sync_Response__rosidl_typesupport_introspection_c__Sync_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panda_move/srv/detail/sync__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_members = {
  "panda_move__srv",  // service namespace
  "Sync",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_Request_message_type_support_handle,
  NULL  // response message
  // panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_Response_message_type_support_handle
};

static rosidl_service_type_support_t panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_type_support_handle = {
  0,
  &panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync)() {
  if (!panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_type_support_handle.typesupport_identifier) {
    panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, Sync_Response)()->data;
  }

  return &panda_move__srv__detail__sync__rosidl_typesupport_introspection_c__Sync_service_type_support_handle;
}
