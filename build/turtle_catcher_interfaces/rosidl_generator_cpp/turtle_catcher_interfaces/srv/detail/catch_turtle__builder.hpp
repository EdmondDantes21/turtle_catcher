// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_catcher_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include "turtle_catcher_interfaces/srv/detail/catch_turtle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_catcher_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_t
{
public:
  Init_CatchTurtle_Request_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_catcher_interfaces::srv::CatchTurtle_Request t(::turtle_catcher_interfaces::srv::CatchTurtle_Request::_t_type arg)
  {
    msg_.t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_catcher_interfaces::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_catcher_interfaces::srv::CatchTurtle_Request>()
{
  return turtle_catcher_interfaces::srv::builder::Init_CatchTurtle_Request_t();
}

}  // namespace turtle_catcher_interfaces


namespace turtle_catcher_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_catcher_interfaces::srv::CatchTurtle_Response success(::turtle_catcher_interfaces::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_catcher_interfaces::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_catcher_interfaces::srv::CatchTurtle_Response>()
{
  return turtle_catcher_interfaces::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace turtle_catcher_interfaces

#endif  // TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
