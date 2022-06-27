// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__BUILDER_HPP_
#define TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__BUILDER_HPP_

#include "turtle_catcher_interfaces/msg/detail/alive_turtles__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_catcher_interfaces
{

namespace msg
{

namespace builder
{

class Init_AliveTurtles_alive_turtles
{
public:
  Init_AliveTurtles_alive_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_catcher_interfaces::msg::AliveTurtles alive_turtles(::turtle_catcher_interfaces::msg::AliveTurtles::_alive_turtles_type arg)
  {
    msg_.alive_turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_catcher_interfaces::msg::AliveTurtles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_catcher_interfaces::msg::AliveTurtles>()
{
  return turtle_catcher_interfaces::msg::builder::Init_AliveTurtles_alive_turtles();
}

}  // namespace turtle_catcher_interfaces

#endif  // TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__BUILDER_HPP_
