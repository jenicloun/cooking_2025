// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_move:srv/ActionSequences.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_move/srv/detail/action_sequences__rosidl_typesupport_introspection_c.h"
#include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_move/srv/detail/action_sequences__functions.h"
#include "panda_move/srv/detail/action_sequences__struct.h"


// Include directives for member types
// Member `action_sequences`
#include "panda_move/msg/action.h"
// Member `action_sequences`
#include "panda_move/msg/detail/action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__ActionSequences_Request__init(message_memory);
}

void panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_fini_function(void * message_memory)
{
  panda_move__srv__ActionSequences_Request__fini(message_memory);
}

size_t panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__size_function__ActionSequences_Request__action_sequences(
  const void * untyped_member)
{
  const panda_move__msg__Action__Sequence * member =
    (const panda_move__msg__Action__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__get_const_function__ActionSequences_Request__action_sequences(
  const void * untyped_member, size_t index)
{
  const panda_move__msg__Action__Sequence * member =
    (const panda_move__msg__Action__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__get_function__ActionSequences_Request__action_sequences(
  void * untyped_member, size_t index)
{
  panda_move__msg__Action__Sequence * member =
    (panda_move__msg__Action__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__fetch_function__ActionSequences_Request__action_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const panda_move__msg__Action * item =
    ((const panda_move__msg__Action *)
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__get_const_function__ActionSequences_Request__action_sequences(untyped_member, index));
  panda_move__msg__Action * value =
    (panda_move__msg__Action *)(untyped_value);
  *value = *item;
}

void panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__assign_function__ActionSequences_Request__action_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  panda_move__msg__Action * item =
    ((panda_move__msg__Action *)
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__get_function__ActionSequences_Request__action_sequences(untyped_member, index));
  const panda_move__msg__Action * value =
    (const panda_move__msg__Action *)(untyped_value);
  *item = *value;
}

bool panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__resize_function__ActionSequences_Request__action_sequences(
  void * untyped_member, size_t size)
{
  panda_move__msg__Action__Sequence * member =
    (panda_move__msg__Action__Sequence *)(untyped_member);
  panda_move__msg__Action__Sequence__fini(member);
  return panda_move__msg__Action__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_member_array[1] = {
  {
    "action_sequences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__ActionSequences_Request, action_sequences),  // bytes offset in struct
    NULL,  // default value
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__size_function__ActionSequences_Request__action_sequences,  // size() function pointer
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__get_const_function__ActionSequences_Request__action_sequences,  // get_const(index) function pointer
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__get_function__ActionSequences_Request__action_sequences,  // get(index) function pointer
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__fetch_function__ActionSequences_Request__action_sequences,  // fetch(index, &value) function pointer
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__assign_function__ActionSequences_Request__action_sequences,  // assign(index, value) function pointer
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__resize_function__ActionSequences_Request__action_sequences  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_members = {
  "panda_move__srv",  // message namespace
  "ActionSequences_Request",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__ActionSequences_Request),
  panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_member_array,  // message members
  panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_type_support_handle = {
  0,
  &panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences_Request)() {
  panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, msg, Action)();
  if (!panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__ActionSequences_Request__rosidl_typesupport_introspection_c__ActionSequences_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_move/srv/detail/action_sequences__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_move/srv/detail/action_sequences__functions.h"
// already included above
// #include "panda_move/srv/detail/action_sequences__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__srv__ActionSequences_Response__init(message_memory);
}

void panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_fini_function(void * message_memory)
{
  panda_move__srv__ActionSequences_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__srv__ActionSequences_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_members = {
  "panda_move__srv",  // message namespace
  "ActionSequences_Response",  // message name
  1,  // number of fields
  sizeof(panda_move__srv__ActionSequences_Response),
  panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_member_array,  // message members
  panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_type_support_handle = {
  0,
  &panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences_Response)() {
  if (!panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_type_support_handle.typesupport_identifier) {
    panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__srv__ActionSequences_Response__rosidl_typesupport_introspection_c__ActionSequences_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panda_move/srv/detail/action_sequences__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_members = {
  "panda_move__srv",  // service namespace
  "ActionSequences",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_Request_message_type_support_handle,
  NULL  // response message
  // panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_Response_message_type_support_handle
};

static rosidl_service_type_support_t panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_type_support_handle = {
  0,
  &panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences)() {
  if (!panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_type_support_handle.typesupport_identifier) {
    panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, srv, ActionSequences_Response)()->data;
  }

  return &panda_move__srv__detail__action_sequences__rosidl_typesupport_introspection_c__ActionSequences_service_type_support_handle;
}
