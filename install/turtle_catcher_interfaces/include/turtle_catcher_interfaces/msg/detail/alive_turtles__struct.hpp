// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_HPP_
#define TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'alive_turtles'
#include "turtle_catcher_interfaces/msg/detail/turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_catcher_interfaces__msg__AliveTurtles __attribute__((deprecated))
#else
# define DEPRECATED__turtle_catcher_interfaces__msg__AliveTurtles __declspec(deprecated)
#endif

namespace turtle_catcher_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AliveTurtles_
{
  using Type = AliveTurtles_<ContainerAllocator>;

  explicit AliveTurtles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AliveTurtles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _alive_turtles_type =
    std::vector<turtle_catcher_interfaces::msg::Turtle_<ContainerAllocator>, typename ContainerAllocator::template rebind<turtle_catcher_interfaces::msg::Turtle_<ContainerAllocator>>::other>;
  _alive_turtles_type alive_turtles;

  // setters for named parameter idiom
  Type & set__alive_turtles(
    const std::vector<turtle_catcher_interfaces::msg::Turtle_<ContainerAllocator>, typename ContainerAllocator::template rebind<turtle_catcher_interfaces::msg::Turtle_<ContainerAllocator>>::other> & _arg)
  {
    this->alive_turtles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_catcher_interfaces__msg__AliveTurtles
    std::shared_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_catcher_interfaces__msg__AliveTurtles
    std::shared_ptr<turtle_catcher_interfaces::msg::AliveTurtles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AliveTurtles_ & other) const
  {
    if (this->alive_turtles != other.alive_turtles) {
      return false;
    }
    return true;
  }
  bool operator!=(const AliveTurtles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AliveTurtles_

// alias to use template instance with default allocator
using AliveTurtles =
  turtle_catcher_interfaces::msg::AliveTurtles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_catcher_interfaces

#endif  // TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_HPP_
