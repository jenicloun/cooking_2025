// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_move:srv/NewState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_move/srv/detail/new_state__rosidl_typesupport_introspection_c.h"
#include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_move/srv/detail/new_state__functions.h"
#include "panda_move/srv/detail/new_state__struct.h"


// Include directives for member types
// Member `new_state`
#include "panda_move/msg/predicate.h"
// Member `new_state`
#include "panda_move/msg/detail/predicate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__NewState_Request__init(message_memory);
}

void panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_fini_function(void * message_memory)
{
  panda_move__srv__NewState_Request__fini(message_memory);
}

size_t panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__size_function__NewState_Request__new_state(
  const void * untyped_member)
{
  const panda_move__msg__Predicate__Sequence * member =
    (const panda_move__msg__Predicate__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__get_const_function__NewState_Request__new_state(
  const void * untyped_member, size_t index)
{
  const panda_move__msg__Predicate__Sequence * member =
    (const panda_move__msg__Predicate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__get_function__NewState_Request__new_state(
  void * untyped_member, size_t index)
{
  panda_move__msg__Predicate__Sequence * member =
    (panda_move__msg__Predicate__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__fetch_function__NewState_Request__new_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const panda_move__msg__Predicate * item =
    ((const panda_move__msg__Predicate *)
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__get_const_function__NewState_Request__new_state(untyped_member, index));
  panda_move__msg__Predicate * value =
    (panda_move__msg__Predicate *)(untyped_value);
  *value = *item;
}

void panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__assign_function__NewState_Request__new_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  panda_move__msg__Predicate * item =
    ((panda_move__msg__Predicate *)
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__get_function__NewState_Request__new_state(untyped_member, index));
  const panda_move__msg__Predicate * value =
    (const panda_move__msg__Predicate *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__resize_function__NewState_Request__new_state(
  void * untyped_member, size_t size)
{
  panda_move__msg__Predicate__Sequence * member =
    (panda_move__msg__Predicate__Sequence *)(untyped_member);
  panda_move__msg__Predicate__Sequence__fini(member);
  return panda_move__msg__Predicate__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_member_array[1] = {
  {
    "new_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__NewState_Request, new_state),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__size_function__NewState_Request__new_state,  // size() function pointer
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__get_const_function__NewState_Request__new_state,  // get_const(index) function pointer
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__get_function__NewState_Request__new_state,  // get(index) function pointer
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__fetch_function__NewState_Request__new_state,  // fetch(index, &value) function pointer
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__assign_function__NewState_Request__new_state,  // assign(index, value) function pointer
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__resize_function__NewState_Request__new_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_members = {
  "panda_move__srv",  // message namespace
  "NewState_Request",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__NewState_Request),
  panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_member_array,  // message members
  panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_type_support_handle = {
  0,
  &panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState_Request)() {
  panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, msg, Predicate)();
  if (!panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__NewState_Request__rosidl_typesupport_introspection_c__NewState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_move/srv/detail/new_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_move/srv/detail/new_state__functions.h"
// already included above
// #include "panda_move/srv/detail/new_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__NewState_Response__init(message_memory);
}

void panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_fini_function(void * message_memory)
{
  panda_move__srv__NewState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__NewState_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_members = {
  "panda_move__srv",  // message namespace
  "NewState_Response",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__NewState_Response),
  panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_member_array,  // message members
  panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_type_support_handle = {
  0,
  &panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState_Response)() {
  if (!panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__NewState_Response__rosidl_typesupport_introspection_c__NewState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panda_move/srv/detail/new_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_members = {
  "panda_move__srv",  // service namespace
  "NewState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_Request_message_type_support_handle,
  NULL  // response message
  // panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_Response_message_type_support_handle
};

static rosidl_service_type_support_t panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_type_support_handle = {
  0,
  &panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState)() {
  if (!panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_type_support_handle.typesupport_identifier) {
    panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, NewState_Response)()->data;
  }

  return &panda_move__srv__detail__new_state__rosidl_typesupport_introspection_c__NewState_service_type_support_handle;
}
