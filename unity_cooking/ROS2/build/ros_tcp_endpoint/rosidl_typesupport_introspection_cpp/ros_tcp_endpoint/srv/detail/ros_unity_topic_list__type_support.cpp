// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_tcp_endpoint:srv/RosUnityTopicList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_tcp_endpoint/srv/detail/ros_unity_topic_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_tcp_endpoint
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RosUnityTopicList_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_tcp_endpoint::srv::RosUnityTopicList_Request(_init);
}

void RosUnityTopicList_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_tcp_endpoint::srv::RosUnityTopicList_Request *>(message_memory);
  typed_message->~RosUnityTopicList_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RosUnityTopicList_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::srv::RosUnityTopicList_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RosUnityTopicList_Request_message_members = {
  "ros_tcp_endpoint::srv",  // message namespace
  "RosUnityTopicList_Request",  // message name
  1,  // number of fields
  sizeof(ros_tcp_endpoint::srv::RosUnityTopicList_Request),
  RosUnityTopicList_Request_message_member_array,  // message members
  RosUnityTopicList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RosUnityTopicList_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RosUnityTopicList_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosUnityTopicList_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_tcp_endpoint


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_tcp_endpoint::srv::RosUnityTopicList_Request>()
{
  return &::ros_tcp_endpoint::srv::rosidl_typesupport_introspection_cpp::RosUnityTopicList_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_tcp_endpoint, srv, RosUnityTopicList_Request)() {
  return &::ros_tcp_endpoint::srv::rosidl_typesupport_introspection_cpp::RosUnityTopicList_Request_message_type_support_handle;
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
// #include "ros_tcp_endpoint/srv/detail/ros_unity_topic_list__struct.hpp"
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

namespace ros_tcp_endpoint
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RosUnityTopicList_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_tcp_endpoint::srv::RosUnityTopicList_Response(_init);
}

void RosUnityTopicList_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_tcp_endpoint::srv::RosUnityTopicList_Response *>(message_memory);
  typed_message->~RosUnityTopicList_Response();
}

size_t size_function__RosUnityTopicList_Response__topics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RosUnityTopicList_Response__topics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RosUnityTopicList_Response__topics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RosUnityTopicList_Response__topics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RosUnityTopicList_Response__topics(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RosUnityTopicList_Response__topics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RosUnityTopicList_Response__topics(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RosUnityTopicList_Response__topics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RosUnityTopicList_Response_message_member_array[1] = {
  {
    "topics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::srv::RosUnityTopicList_Response, topics),  // bytes offset in struct
    nullptr,  // default value
    size_function__RosUnityTopicList_Response__topics,  // size() function pointer
    get_const_function__RosUnityTopicList_Response__topics,  // get_const(index) function pointer
    get_function__RosUnityTopicList_Response__topics,  // get(index) function pointer
    fetch_function__RosUnityTopicList_Response__topics,  // fetch(index, &value) function pointer
    assign_function__RosUnityTopicList_Response__topics,  // assign(index, value) function pointer
    resize_function__RosUnityTopicList_Response__topics  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RosUnityTopicList_Response_message_members = {
  "ros_tcp_endpoint::srv",  // message namespace
  "RosUnityTopicList_Response",  // message name
  1,  // number of fields
  sizeof(ros_tcp_endpoint::srv::RosUnityTopicList_Response),
  RosUnityTopicList_Response_message_member_array,  // message members
  RosUnityTopicList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RosUnityTopicList_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RosUnityTopicList_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosUnityTopicList_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_tcp_endpoint


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_tcp_endpoint::srv::RosUnityTopicList_Response>()
{
  return &::ros_tcp_endpoint::srv::rosidl_typesupport_introspection_cpp::RosUnityTopicList_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_tcp_endpoint, srv, RosUnityTopicList_Response)() {
  return &::ros_tcp_endpoint::srv::rosidl_typesupport_introspection_cpp::RosUnityTopicList_Response_message_type_support_handle;
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
// #include "ros_tcp_endpoint/srv/detail/ros_unity_topic_list__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ros_tcp_endpoint
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RosUnityTopicList_service_members = {
  "ros_tcp_endpoint::srv",  // service namespace
  "RosUnityTopicList",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ros_tcp_endpoint::srv::RosUnityTopicList>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RosUnityTopicList_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosUnityTopicList_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ros_tcp_endpoint


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_tcp_endpoint::srv::RosUnityTopicList>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ros_tcp_endpoint::srv::rosidl_typesupport_introspection_cpp::RosUnityTopicList_service_type_support_handle;
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
        ::ros_tcp_endpoint::srv::RosUnityTopicList_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ros_tcp_endpoint::srv::RosUnityTopicList_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_tcp_endpoint, srv, RosUnityTopicList)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ros_tcp_endpoint::srv::RosUnityTopicList>();
}

#ifdef __cplusplus
}
#endif
