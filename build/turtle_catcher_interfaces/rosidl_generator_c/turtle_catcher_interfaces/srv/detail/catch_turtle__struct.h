// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_catcher_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
#define TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't'
#include "turtle_catcher_interfaces/msg/detail/turtle__struct.h"

// Struct defined in srv/CatchTurtle in the package turtle_catcher_interfaces.
typedef struct turtle_catcher_interfaces__srv__CatchTurtle_Request
{
  turtle_catcher_interfaces__msg__Turtle t;
} turtle_catcher_interfaces__srv__CatchTurtle_Request;

// Struct for a sequence of turtle_catcher_interfaces__srv__CatchTurtle_Request.
typedef struct turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence
{
  turtle_catcher_interfaces__srv__CatchTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CatchTurtle in the package turtle_catcher_interfaces.
typedef struct turtle_catcher_interfaces__srv__CatchTurtle_Response
{
  bool success;
} turtle_catcher_interfaces__srv__CatchTurtle_Response;

// Struct for a sequence of turtle_catcher_interfaces__srv__CatchTurtle_Response.
typedef struct turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence
{
  turtle_catcher_interfaces__srv__CatchTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CATCHER_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
