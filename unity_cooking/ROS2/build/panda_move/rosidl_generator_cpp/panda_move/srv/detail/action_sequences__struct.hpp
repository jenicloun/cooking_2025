// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:srv/ActionSequences.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__STRUCT_HPP_
#define PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action_sequences'
#include "panda_move/msg/detail/action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panda_move__srv__ActionSequences_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__ActionSequences_Request __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ActionSequences_Request_
{
  using Type = ActionSequences_Request_<ContainerAllocator>;

  explicit ActionSequences_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActionSequences_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _action_sequences_type =
    std::vector<panda_move::msg::Action_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panda_move::msg::Action_<ContainerAllocator>>>;
  _action_sequences_type action_sequences;

  // setters for named parameter idiom
  Type & set__action_sequences(
    const std::vector<panda_move::msg::Action_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panda_move::msg::Action_<ContainerAllocator>>> & _arg)
  {
    this->action_sequences = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::ActionSequences_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::ActionSequences_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::ActionSequences_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::ActionSequences_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__ActionSequences_Request
    std::shared_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__ActionSequences_Request
    std::shared_ptr<panda_move::srv::ActionSequences_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionSequences_Request_ & other) const
  {
    if (this->action_sequences != other.action_sequences) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionSequences_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionSequences_Request_

// alias to use template instance with default allocator
using ActionSequences_Request =
  panda_move::srv::ActionSequences_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__ActionSequences_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__ActionSequences_Response __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ActionSequences_Response_
{
  using Type = ActionSequences_Response_<ContainerAllocator>;

  explicit ActionSequences_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit ActionSequences_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::ActionSequences_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::ActionSequences_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::ActionSequences_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::ActionSequences_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__ActionSequences_Response
    std::shared_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__ActionSequences_Response
    std::shared_ptr<panda_move::srv::ActionSequences_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionSequences_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionSequences_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionSequences_Response_

// alias to use template instance with default allocator
using ActionSequences_Response =
  panda_move::srv::ActionSequences_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move

namespace panda_move
{

namespace srv
{

struct ActionSequences
{
  using Request = panda_move::srv::ActionSequences_Request;
  using Response = panda_move::srv::ActionSequences_Response;
};

}  // namespace srv

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__STRUCT_HPP_
