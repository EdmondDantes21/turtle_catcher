// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_catcher_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__MSG__DETAIL__TURTLE__STRUCT_H_
#define TURTLE_CATCHER_INTERFACES__MSG__DETAIL__TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Turtle in the package turtle_catcher_interfaces.
typedef struct turtle_catcher_interfaces__msg__Turtle
{
  rosidl_runtime_c__String name;
  double x;
  double y;
} turtle_catcher_interfaces__msg__Turtle;

// Struct for a sequence of turtle_catcher_interfaces__msg__Turtle.
typedef struct turtle_catcher_interfaces__msg__Turtle__Sequence
{
  turtle_catcher_interfaces__msg__Turtle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_catcher_interfaces__msg__Turtle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CATCHER_INTERFACES__MSG__DETAIL__TURTLE__STRUCT_H_
