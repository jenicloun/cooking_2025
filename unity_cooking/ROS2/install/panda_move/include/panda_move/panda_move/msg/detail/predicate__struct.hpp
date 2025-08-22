// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:msg/Predicate.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__PREDICATE__STRUCT_HPP_
#define PANDA_MOVE__MSG__DETAIL__PREDICATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_move__msg__Predicate __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__msg__Predicate __declspec(deprecated)
#endif

namespace panda_move
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Predicate_
{
  using Type = Predicate_<ContainerAllocator>;

  explicit Predicate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Predicate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _params_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _params_type params;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::msg::Predicate_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::msg::Predicate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::msg::Predicate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::msg::Predicate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::msg::Predicate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::msg::Predicate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::msg::Predicate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::msg::Predicate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::msg::Predicate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::msg::Predicate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__msg__Predicate
    std::shared_ptr<panda_move::msg::Predicate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__msg__Predicate
    std::shared_ptr<panda_move::msg::Predicate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Predicate_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    return true;
  }
  bool operator!=(const Predicate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Predicate_

// alias to use template instance with default allocator
using Predicate =
  panda_move::msg::Predicate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace panda_move

#endif  // PANDA_MOVE__MSG__DETAIL__PREDICATE__STRUCT_HPP_
