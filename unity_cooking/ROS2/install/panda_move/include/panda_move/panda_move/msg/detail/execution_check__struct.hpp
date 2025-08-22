// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:msg/ExecutionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__STRUCT_HPP_
#define PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_move__msg__ExecutionCheck __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__msg__ExecutionCheck __declspec(deprecated)
#endif

namespace panda_move
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExecutionCheck_
{
  using Type = ExecutionCheck_<ContainerAllocator>;

  explicit ExecutionCheck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
    }
  }

  explicit ExecutionCheck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
    }
  }

  // field types and members
  using _status_type =
    int64_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::msg::ExecutionCheck_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::msg::ExecutionCheck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::msg::ExecutionCheck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::msg::ExecutionCheck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__msg__ExecutionCheck
    std::shared_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__msg__ExecutionCheck
    std::shared_ptr<panda_move::msg::ExecutionCheck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutionCheck_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutionCheck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutionCheck_

// alias to use template instance with default allocator
using ExecutionCheck =
  panda_move::msg::ExecutionCheck_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace panda_move

#endif  // PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__STRUCT_HPP_
