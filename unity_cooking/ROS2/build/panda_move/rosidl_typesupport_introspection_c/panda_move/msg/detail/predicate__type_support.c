// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_move:msg/Predicate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_move/msg/detail/predicate__rosidl_typesupport_introspection_c.h"
#include "panda_move/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_move/msg/detail/predicate__functions.h"
#include "panda_move/msg/detail/predicate__struct.h"


// Include directives for member types
// Member `name`
// Member `params`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_move__msg__Predicate__init(message_memory);
}

void panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_fini_function(void * message_memory)
{
  panda_move__msg__Predicate__fini(message_memory);
}

size_t panda_move__msg__Predicate__rosidl_typesupport_introspection_c__size_function__Predicate__params(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_move__msg__Predicate__rosidl_typesupport_introspection_c__get_const_function__Predicate__params(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_move__msg__Predicate__rosidl_typesupport_introspection_c__get_function__Predicate__params(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_move__msg__Predicate__rosidl_typesupport_introspection_c__fetch_function__Predicate__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__get_const_function__Predicate__params(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void panda_move__msg__Predicate__rosidl_typesupport_introspection_c__assign_function__Predicate__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__get_function__Predicate__params(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool panda_move__msg__Predicate__rosidl_typesupport_introspection_c__resize_function__Predicate__params(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__msg__Predicate, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move__msg__Predicate, params),  // bytes offset in struct
    NULL,  // default value
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__size_function__Predicate__params,  // size() function pointer
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__get_const_function__Predicate__params,  // get_const(index) function pointer
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__get_function__Predicate__params,  // get(index) function pointer
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__fetch_function__Predicate__params,  // fetch(index, &value) function pointer
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__assign_function__Predicate__params,  // assign(index, value) function pointer
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__resize_function__Predicate__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_members = {
  "panda_move__msg",  // message namespace
  "Predicate",  // message name
  2,  // number of fields
  sizeof(panda_move__msg__Predicate),
  panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_member_array,  // message members
  panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_type_support_handle = {
  0,
  &panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_move
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_move, msg, Predicate)() {
  if (!panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_type_support_handle.typesupport_identifier) {
    panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_move__msg__Predicate__rosidl_typesupport_introspection_c__Predicate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
