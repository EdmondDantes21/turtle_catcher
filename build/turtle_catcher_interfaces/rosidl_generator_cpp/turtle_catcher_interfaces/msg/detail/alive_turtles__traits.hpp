// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__TRAITS_HPP_
#define TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__TRAITS_HPP_

#include "turtle_catcher_interfaces/msg/detail/alive_turtles__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_catcher_interfaces::msg::AliveTurtles>()
{
  return "turtle_catcher_interfaces::msg::AliveTurtles";
}

template<>
inline const char * name<turtle_catcher_interfaces::msg::AliveTurtles>()
{
  return "turtle_catcher_interfaces/msg/AliveTurtles";
}

template<>
struct has_fixed_size<turtle_catcher_interfaces::msg::AliveTurtles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_catcher_interfaces::msg::AliveTurtles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_catcher_interfaces::msg::AliveTurtles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__TRAITS_HPP_
