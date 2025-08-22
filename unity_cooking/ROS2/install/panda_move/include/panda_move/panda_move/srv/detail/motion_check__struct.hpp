// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:srv/MotionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__STRUCT_HPP_
#define PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__MotionCheck_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__MotionCheck_Request __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionCheck_Request_
{
  using Type = MotionCheck_Request_<ContainerAllocator>;

  explicit MotionCheck_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_type = "";
    }
  }

  explicit MotionCheck_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_type = "";
    }
  }

  // field types and members
  using _motion_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motion_type_type motion_type;
  using _object_1_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _object_1_type object_1;
  using _object_2_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _object_2_type object_2;

  // setters for named parameter idiom
  Type & set__motion_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motion_type = _arg;
    return *this;
  }
  Type & set__object_1(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->object_1 = _arg;
    return *this;
  }
  Type & set__object_2(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->object_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::MotionCheck_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::MotionCheck_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::MotionCheck_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::MotionCheck_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__MotionCheck_Request
    std::shared_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__MotionCheck_Request
    std::shared_ptr<panda_move::srv::MotionCheck_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCheck_Request_ & other) const
  {
    if (this->motion_type != other.motion_type) {
      return false;
    }
    if (this->object_1 != other.object_1) {
      return false;
    }
    if (this->object_2 != other.object_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCheck_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCheck_Request_

// alias to use template instance with default allocator
using MotionCheck_Request =
  panda_move::srv::MotionCheck_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__MotionCheck_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__MotionCheck_Response __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionCheck_Response_
{
  using Type = MotionCheck_Response_<ContainerAllocator>;

  explicit MotionCheck_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_state = 0ll;
    }
  }

  explicit MotionCheck_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    panda_move::srv::MotionCheck_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::MotionCheck_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::MotionCheck_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::MotionCheck_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__MotionCheck_Response
    std::shared_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__MotionCheck_Response
    std::shared_ptr<panda_move::srv::MotionCheck_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCheck_Response_ & other) const
  {
    if (this->execute_state != other.execute_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCheck_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCheck_Response_

// alias to use template instance with default allocator
using MotionCheck_Response =
  panda_move::srv::MotionCheck_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move

namespace panda_move
{

namespace srv
{

struct MotionCheck
{
  using Request = panda_move::srv::MotionCheck_Request;
  using Response = panda_move::srv::MotionCheck_Response;
};

}  // namespace srv

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__STRUCT_HPP_
