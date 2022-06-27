// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_catcher_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
#define TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_

#include "turtle_catcher_interfaces/srv/detail/catch_turtle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 't'
#include "turtle_catcher_interfaces/msg/detail/turtle__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_catcher_interfaces::srv::CatchTurtle_Request>()
{
  return "turtle_catcher_interfaces::srv::CatchTurtle_Request";
}

template<>
inline const char * name<turtle_catcher_interfaces::srv::CatchTurtle_Request>()
{
  return "turtle_catcher_interfaces/srv/CatchTurtle_Request";
}

template<>
struct has_fixed_size<turtle_catcher_interfaces::srv::CatchTurtle_Request>
  : std::integral_constant<bool, has_fixed_size<turtle_catcher_interfaces::msg::Turtle>::value> {};

template<>
struct has_bounded_size<turtle_catcher_interfaces::srv::CatchTurtle_Request>
  : std::integral_constant<bool, has_bounded_size<turtle_catcher_interfaces::msg::Turtle>::value> {};

template<>
struct is_message<turtle_catcher_interfaces::srv::CatchTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_catcher_interfaces::srv::CatchTurtle_Response>()
{
  return "turtle_catcher_interfaces::srv::CatchTurtle_Response";
}

template<>
inline const char * name<turtle_catcher_interfaces::srv::CatchTurtle_Response>()
{
  return "turtle_catcher_interfaces/srv/CatchTurtle_Response";
}

template<>
struct has_fixed_size<turtle_catcher_interfaces::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_catcher_interfaces::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_catcher_interfaces::srv::CatchTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_catcher_interfaces::srv::CatchTurtle>()
{
  return "turtle_catcher_interfaces::srv::CatchTurtle";
}

template<>
inline const char * name<turtle_catcher_interfaces::srv::CatchTurtle>()
{
  return "turtle_catcher_interfaces/srv/CatchTurtle";
}

template<>
struct has_fixed_size<turtle_catcher_interfaces::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_catcher_interfaces::srv::CatchTurtle_Request>::value &&
    has_fixed_size<turtle_catcher_interfaces::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_catcher_interfaces::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_catcher_interfaces::srv::CatchTurtle_Request>::value &&
    has_bounded_size<turtle_catcher_interfaces::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct is_service<turtle_catcher_interfaces::srv::CatchTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_catcher_interfaces::srv::CatchTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_catcher_interfaces::srv::CatchTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
