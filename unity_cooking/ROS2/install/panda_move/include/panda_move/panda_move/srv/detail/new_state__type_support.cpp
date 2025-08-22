// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from panda_move:srv/NewState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "panda_move/srv/detail/new_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace panda_move
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NewState_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panda_move::srv::NewState_Request(_init);
}

void NewState_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panda_move::srv::NewState_Request *>(message_memory);
  typed_message->~NewState_Request();
}

size_t size_function__NewState_Request__new_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<panda_move::msg::Predicate> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NewState_Request__new_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<panda_move::msg::Predicate> *>(untyped_member);
  return &member[index];
}

void * get_function__NewState_Request__new_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<panda_move::msg::Predicate> *>(untyped_member);
  return &member[index];
}

void fetch_function__NewState_Request__new_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const panda_move::msg::Predicate *>(
    get_const_function__NewState_Request__new_state(untyped_member, index));
  auto & value = *reinterpret_cast<panda_move::msg::Predicate *>(untyped_value);
  value = item;
}

void assign_function__NewState_Request__new_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<panda_move::msg::Predicate *>(
    get_function__NewState_Request__new_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const panda_move::msg::Predicate *>(untyped_value);
  item = value;
}

void resize_function__NewState_Request__new_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<panda_move::msg::Predicate> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NewState_Request_message_member_array[1] = {
  {
    "new_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<panda_move::msg::Predicate>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::NewState_Request, new_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__NewState_Request__new_state,  // size() function pointer
    get_const_function__NewState_Request__new_state,  // get_const(index) function pointer
    get_function__NewState_Request__new_state,  // get(index) function pointer
    fetch_function__NewState_Request__new_state,  // fetch(index, &value) function pointer
    assign_function__NewState_Request__new_state,  // assign(index, value) function pointer
    resize_function__NewState_Request__new_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NewState_Request_message_members = {
  "panda_move::srv",  // message namespace
  "NewState_Request",  // message name
  1,  // number of fields
  sizeof(panda_move::srv::NewState_Request),
  NewState_Request_message_member_array,  // message members
  NewState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NewState_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NewState_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NewState_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace panda_move


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_move::srv::NewState_Request>()
{
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::NewState_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, srv, NewState_Request)() {
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::NewState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "panda_move/srv/detail/new_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace panda_move
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NewState_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panda_move::srv::NewState_Response(_init);
}

void NewState_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panda_move::srv::NewState_Response *>(message_memory);
  typed_message->~NewState_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NewState_Response_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::NewState_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NewState_Response_message_members = {
  "panda_move::srv",  // message namespace
  "NewState_Response",  // message name
  1,  // number of fields
  sizeof(panda_move::srv::NewState_Response),
  NewState_Response_message_member_array,  // message members
  NewState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NewState_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NewState_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NewState_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace panda_move


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_move::srv::NewState_Response>()
{
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::NewState_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, srv, NewState_Response)() {
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::NewState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "panda_move/srv/detail/new_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace panda_move
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NewState_service_members = {
  "panda_move::srv",  // service namespace
  "NewState",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<panda_move::srv::NewState>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t NewState_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NewState_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace panda_move


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<panda_move::srv::NewState>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::panda_move::srv::rosidl_typesupport_introspection_cpp::NewState_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::panda_move::srv::NewState_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::panda_move::srv::NewState_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, srv, NewState)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<panda_move::srv::NewState>();
}

#ifdef __cplusplus
}
#endif
