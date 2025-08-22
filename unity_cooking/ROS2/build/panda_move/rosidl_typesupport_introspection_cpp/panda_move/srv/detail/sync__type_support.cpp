// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from panda_move:srv/Sync.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "panda_move/srv/detail/sync__struct.hpp"
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

void Sync_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panda_move::srv::Sync_Request(_init);
}

void Sync_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panda_move::srv::Sync_Request *>(message_memory);
  typed_message->~Sync_Request();
}

size_t size_function__Sync_Request__activated_object(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Sync_Request__activated_object(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Sync_Request__activated_object(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Sync_Request__activated_object(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Sync_Request__activated_object(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Sync_Request__activated_object(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Sync_Request__activated_object(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Sync_Request__activated_object(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sync_Request_message_member_array[1] = {
  {
    "activated_object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::Sync_Request, activated_object),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sync_Request__activated_object,  // size() function pointer
    get_const_function__Sync_Request__activated_object,  // get_const(index) function pointer
    get_function__Sync_Request__activated_object,  // get(index) function pointer
    fetch_function__Sync_Request__activated_object,  // fetch(index, &value) function pointer
    assign_function__Sync_Request__activated_object,  // assign(index, value) function pointer
    resize_function__Sync_Request__activated_object  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sync_Request_message_members = {
  "panda_move::srv",  // message namespace
  "Sync_Request",  // message name
  1,  // number of fields
  sizeof(panda_move::srv::Sync_Request),
  Sync_Request_message_member_array,  // message members
  Sync_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Sync_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sync_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sync_Request_message_members,
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
get_message_type_support_handle<panda_move::srv::Sync_Request>()
{
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::Sync_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, srv, Sync_Request)() {
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::Sync_Request_message_type_support_handle;
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
// #include "panda_move/srv/detail/sync__struct.hpp"
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

void Sync_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panda_move::srv::Sync_Response(_init);
}

void Sync_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panda_move::srv::Sync_Response *>(message_memory);
  typed_message->~Sync_Response();
}

size_t size_function__Sync_Response__object_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Sync_Response__object_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Sync_Response__object_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Sync_Response__object_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Sync_Response__object_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Sync_Response__object_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Sync_Response__object_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Sync_Response__object_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Sync_Response__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Sync_Response__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__Sync_Response__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__Sync_Response__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__Sync_Response__position(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__Sync_Response__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__Sync_Response__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__Sync_Response__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Sync_Response__orientation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Sync_Response__orientation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return &member[index];
}

void * get_function__Sync_Response__orientation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return &member[index];
}

void fetch_function__Sync_Response__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Quaternion *>(
    get_const_function__Sync_Response__orientation(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Quaternion *>(untyped_value);
  value = item;
}

void assign_function__Sync_Response__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Quaternion *>(
    get_function__Sync_Response__orientation(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Quaternion *>(untyped_value);
  item = value;
}

void resize_function__Sync_Response__orientation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Sync_Response__joint_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Sync_Response__joint_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Sync_Response__joint_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Sync_Response__joint_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Sync_Response__joint_state(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Sync_Response__joint_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Sync_Response__joint_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Sync_Response__joint_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sync_Response_message_member_array[4] = {
  {
    "object_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::Sync_Response, object_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sync_Response__object_name,  // size() function pointer
    get_const_function__Sync_Response__object_name,  // get_const(index) function pointer
    get_function__Sync_Response__object_name,  // get(index) function pointer
    fetch_function__Sync_Response__object_name,  // fetch(index, &value) function pointer
    assign_function__Sync_Response__object_name,  // assign(index, value) function pointer
    resize_function__Sync_Response__object_name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::Sync_Response, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sync_Response__position,  // size() function pointer
    get_const_function__Sync_Response__position,  // get_const(index) function pointer
    get_function__Sync_Response__position,  // get(index) function pointer
    fetch_function__Sync_Response__position,  // fetch(index, &value) function pointer
    assign_function__Sync_Response__position,  // assign(index, value) function pointer
    resize_function__Sync_Response__position  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::Sync_Response, orientation),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sync_Response__orientation,  // size() function pointer
    get_const_function__Sync_Response__orientation,  // get_const(index) function pointer
    get_function__Sync_Response__orientation,  // get(index) function pointer
    fetch_function__Sync_Response__orientation,  // fetch(index, &value) function pointer
    assign_function__Sync_Response__orientation,  // assign(index, value) function pointer
    resize_function__Sync_Response__orientation  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::srv::Sync_Response, joint_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sync_Response__joint_state,  // size() function pointer
    get_const_function__Sync_Response__joint_state,  // get_const(index) function pointer
    get_function__Sync_Response__joint_state,  // get(index) function pointer
    fetch_function__Sync_Response__joint_state,  // fetch(index, &value) function pointer
    assign_function__Sync_Response__joint_state,  // assign(index, value) function pointer
    resize_function__Sync_Response__joint_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sync_Response_message_members = {
  "panda_move::srv",  // message namespace
  "Sync_Response",  // message name
  4,  // number of fields
  sizeof(panda_move::srv::Sync_Response),
  Sync_Response_message_member_array,  // message members
  Sync_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Sync_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sync_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sync_Response_message_members,
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
get_message_type_support_handle<panda_move::srv::Sync_Response>()
{
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::Sync_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, srv, Sync_Response)() {
  return &::panda_move::srv::rosidl_typesupport_introspection_cpp::Sync_Response_message_type_support_handle;
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
// #include "panda_move/srv/detail/sync__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Sync_service_members = {
  "panda_move::srv",  // service namespace
  "Sync",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<panda_move::srv::Sync>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Sync_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sync_service_members,
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
get_service_type_support_handle<panda_move::srv::Sync>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::panda_move::srv::rosidl_typesupport_introspection_cpp::Sync_service_type_support_handle;
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
        ::panda_move::srv::Sync_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::panda_move::srv::Sync_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, srv, Sync)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<panda_move::srv::Sync>();
}

#ifdef __cplusplus
}
#endif
