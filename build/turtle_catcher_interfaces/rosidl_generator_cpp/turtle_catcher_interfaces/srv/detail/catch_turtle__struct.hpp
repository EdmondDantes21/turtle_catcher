// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_catcher_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_HPP_
#define TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 't'
#include "turtle_catcher_interfaces/msg/detail/turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Request __declspec(deprecated)
#endif

namespace turtle_catcher_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CatchTurtle_Request_
{
  using Type = CatchTurtle_Request_<ContainerAllocator>;

  explicit CatchTurtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t(_init)
  {
    (void)_init;
  }

  explicit CatchTurtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _t_type =
    turtle_catcher_interfaces::msg::Turtle_<ContainerAllocator>;
  _t_type t;

  // setters for named parameter idiom
  Type & set__t(
    const turtle_catcher_interfaces::msg::Turtle_<ContainerAllocator> & _arg)
  {
    this->t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Request
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Request
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CatchTurtle_Request_ & other) const
  {
    if (this->t != other.t) {
      return false;
    }
    return true;
  }
  bool operator!=(const CatchTurtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CatchTurtle_Request_

// alias to use template instance with default allocator
using CatchTurtle_Request =
  turtle_catcher_interfaces::srv::CatchTurtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_catcher_interfaces


#ifndef _WIN32
# define DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Response __declspec(deprecated)
#endif

namespace turtle_catcher_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CatchTurtle_Response_
{
  using Type = CatchTurtle_Response_<ContainerAllocator>;

  explicit CatchTurtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit CatchTurtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Response
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_catcher_interfaces__srv__CatchTurtle_Response
    std::shared_ptr<turtle_catcher_interfaces::srv::CatchTurtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CatchTurtle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const CatchTurtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CatchTurtle_Response_

// alias to use template instance with default allocator
using CatchTurtle_Response =
  turtle_catcher_interfaces::srv::CatchTurtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_catcher_interfaces

namespace turtle_catcher_interfaces
{

namespace srv
{

struct CatchTurtle
{
  using Request = turtle_catcher_interfaces::srv::CatchTurtle_Request;
  using Response = turtle_catcher_interfaces::srv::CatchTurtle_Response;
};

}  // namespace srv

}  // namespace turtle_catcher_interfaces

#endif  // TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_HPP_
