// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from panda_move:msg/Predicate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "panda_move/msg/detail/predicate__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace panda_move
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Predicate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panda_move::msg::Predicate(_init);
}

void Predicate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panda_move::msg::Predicate *>(message_memory);
  typed_message->~Predicate();
}

size_t size_function__Predicate__params(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Predicate__params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Predicate__params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Predicate__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Predicate__params(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Predicate__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Predicate__params(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Predicate__params(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Predicate_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::msg::Predicate, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_move::msg::Predicate, params),  // bytes offset in struct
    nullptr,  // default value
    size_function__Predicate__params,  // size() function pointer
    get_const_function__Predicate__params,  // get_const(index) function pointer
    get_function__Predicate__params,  // get(index) function pointer
    fetch_function__Predicate__params,  // fetch(index, &value) function pointer
    assign_function__Predicate__params,  // assign(index, value) function pointer
    resize_function__Predicate__params  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Predicate_message_members = {
  "panda_move::msg",  // message namespace
  "Predicate",  // message name
  2,  // number of fields
  sizeof(panda_move::msg::Predicate),
  Predicate_message_member_array,  // message members
  Predicate_init_function,  // function to initialize message memory (memory has to be allocated)
  Predicate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Predicate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Predicate_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace panda_move


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_move::msg::Predicate>()
{
  return &::panda_move::msg::rosidl_typesupport_introspection_cpp::Predicate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_move, msg, Predicate)() {
  return &::panda_move::msg::rosidl_typesupport_introspection_cpp::Predicate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
