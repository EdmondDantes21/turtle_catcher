// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_H_
#define TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'alive_turtles'
#include "turtle_catcher_interfaces/msg/detail/turtle__struct.h"

// Struct defined in msg/AliveTurtles in the package turtle_catcher_interfaces.
typedef struct turtle_catcher_interfaces__msg__AliveTurtles
{
  turtle_catcher_interfaces__msg__Turtle__Sequence alive_turtles;
} turtle_catcher_interfaces__msg__AliveTurtles;

// Struct for a sequence of turtle_catcher_interfaces__msg__AliveTurtles.
typedef struct turtle_catcher_interfaces__msg__AliveTurtles__Sequence
{
  turtle_catcher_interfaces__msg__AliveTurtles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_catcher_interfaces__msg__AliveTurtles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__STRUCT_H_
