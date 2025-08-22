// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:srv/Hand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__HAND__STRUCT_HPP_
#define PANDA_MOVE__SRV__DETAIL__HAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__Hand_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__Hand_Request __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Hand_Request_
{
  using Type = Hand_Request_<ContainerAllocator>;

  explicit Hand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grasp_state = false;
      this->object_name = "";
      this->grasp_size = 0.0;
    }
  }

  explicit Hand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grasp_state = false;
      this->object_name = "";
      this->grasp_size = 0.0;
    }
  }

  // field types and members
  using _grasp_state_type =
    bool;
  _grasp_state_type grasp_state;
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_name_type object_name;
  using _grasp_size_type =
    double;
  _grasp_size_type grasp_size;

  // setters for named parameter idiom
  Type & set__grasp_state(
    const bool & _arg)
  {
    this->grasp_state = _arg;
    return *this;
  }
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }
  Type & set__grasp_size(
    const double & _arg)
  {
    this->grasp_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::Hand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::Hand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::Hand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::Hand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Hand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Hand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Hand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Hand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::Hand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::Hand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__Hand_Request
    std::shared_ptr<panda_move::srv::Hand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__Hand_Request
    std::shared_ptr<panda_move::srv::Hand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hand_Request_ & other) const
  {
    if (this->grasp_state != other.grasp_state) {
      return false;
    }
    if (this->object_name != other.object_name) {
      return false;
    }
    if (this->grasp_size != other.grasp_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hand_Request_

// alias to use template instance with default allocator
using Hand_Request =
  panda_move::srv::Hand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__Hand_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__Hand_Response __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Hand_Response_
{
  using Type = Hand_Response_<ContainerAllocator>;

  explicit Hand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_state = 0ll;
    }
  }

  explicit Hand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_state = 0ll;
    }
  }

  // field types and members
  using _execute_state_type =
    int64_t;
  _execute_state_type execute_state;

  // setters for named parameter idiom
  Type & set__execute_state(
    const int64_t & _arg)
  {
    this->execute_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::Hand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::Hand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::Hand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::Hand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Hand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Hand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Hand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Hand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::Hand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::Hand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__Hand_Response
    std::shared_ptr<panda_move::srv::Hand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__Hand_Response
    std::shared_ptr<panda_move::srv::Hand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hand_Response_ & other) const
  {
    if (this->execute_state != other.execute_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hand_Response_

// alias to use template instance with default allocator
using Hand_Response =
  panda_move::srv::Hand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move

namespace panda_move
{

namespace srv
{

struct Hand
{
  using Request = panda_move::srv::Hand_Request;
  using Response = panda_move::srv::Hand_Response;
};

}  // namespace srv

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__HAND__STRUCT_HPP_
