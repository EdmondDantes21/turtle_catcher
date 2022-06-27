// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_catcher_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice
#include "turtle_catcher_interfaces/msg/detail/turtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_catcher_interfaces__msg__Turtle__init(turtle_catcher_interfaces__msg__Turtle * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtle_catcher_interfaces__msg__Turtle__fini(msg);
    return false;
  }
  // x
  // y
  return true;
}

void
turtle_catcher_interfaces__msg__Turtle__fini(turtle_catcher_interfaces__msg__Turtle * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
}

turtle_catcher_interfaces__msg__Turtle *
turtle_catcher_interfaces__msg__Turtle__create()
{
  turtle_catcher_interfaces__msg__Turtle * msg = (turtle_catcher_interfaces__msg__Turtle *)malloc(sizeof(turtle_catcher_interfaces__msg__Turtle));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_catcher_interfaces__msg__Turtle));
  bool success = turtle_catcher_interfaces__msg__Turtle__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_catcher_interfaces__msg__Turtle__destroy(turtle_catcher_interfaces__msg__Turtle * msg)
{
  if (msg) {
    turtle_catcher_interfaces__msg__Turtle__fini(msg);
  }
  free(msg);
}


bool
turtle_catcher_interfaces__msg__Turtle__Sequence__init(turtle_catcher_interfaces__msg__Turtle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_catcher_interfaces__msg__Turtle * data = NULL;
  if (size) {
    data = (turtle_catcher_interfaces__msg__Turtle *)calloc(size, sizeof(turtle_catcher_interfaces__msg__Turtle));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_catcher_interfaces__msg__Turtle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_catcher_interfaces__msg__Turtle__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_catcher_interfaces__msg__Turtle__Sequence__fini(turtle_catcher_interfaces__msg__Turtle__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_catcher_interfaces__msg__Turtle__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_catcher_interfaces__msg__Turtle__Sequence *
turtle_catcher_interfaces__msg__Turtle__Sequence__create(size_t size)
{
  turtle_catcher_interfaces__msg__Turtle__Sequence * array = (turtle_catcher_interfaces__msg__Turtle__Sequence *)malloc(sizeof(turtle_catcher_interfaces__msg__Turtle__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_catcher_interfaces__msg__Turtle__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_catcher_interfaces__msg__Turtle__Sequence__destroy(turtle_catcher_interfaces__msg__Turtle__Sequence * array)
{
  if (array) {
    turtle_catcher_interfaces__msg__Turtle__Sequence__fini(array);
  }
  free(array);
}
