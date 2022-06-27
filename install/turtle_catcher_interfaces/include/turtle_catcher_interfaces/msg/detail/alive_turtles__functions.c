// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `alive_turtles`
#include "turtle_catcher_interfaces/msg/detail/turtle__functions.h"

bool
turtle_catcher_interfaces__msg__AliveTurtles__init(turtle_catcher_interfaces__msg__AliveTurtles * msg)
{
  if (!msg) {
    return false;
  }
  // alive_turtles
  if (!turtle_catcher_interfaces__msg__Turtle__Sequence__init(&msg->alive_turtles, 0)) {
    turtle_catcher_interfaces__msg__AliveTurtles__fini(msg);
    return false;
  }
  return true;
}

void
turtle_catcher_interfaces__msg__AliveTurtles__fini(turtle_catcher_interfaces__msg__AliveTurtles * msg)
{
  if (!msg) {
    return;
  }
  // alive_turtles
  turtle_catcher_interfaces__msg__Turtle__Sequence__fini(&msg->alive_turtles);
}

turtle_catcher_interfaces__msg__AliveTurtles *
turtle_catcher_interfaces__msg__AliveTurtles__create()
{
  turtle_catcher_interfaces__msg__AliveTurtles * msg = (turtle_catcher_interfaces__msg__AliveTurtles *)malloc(sizeof(turtle_catcher_interfaces__msg__AliveTurtles));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_catcher_interfaces__msg__AliveTurtles));
  bool success = turtle_catcher_interfaces__msg__AliveTurtles__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_catcher_interfaces__msg__AliveTurtles__destroy(turtle_catcher_interfaces__msg__AliveTurtles * msg)
{
  if (msg) {
    turtle_catcher_interfaces__msg__AliveTurtles__fini(msg);
  }
  free(msg);
}


bool
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__init(turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_catcher_interfaces__msg__AliveTurtles * data = NULL;
  if (size) {
    data = (turtle_catcher_interfaces__msg__AliveTurtles *)calloc(size, sizeof(turtle_catcher_interfaces__msg__AliveTurtles));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_catcher_interfaces__msg__AliveTurtles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_catcher_interfaces__msg__AliveTurtles__fini(&data[i - 1]);
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
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__fini(turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_catcher_interfaces__msg__AliveTurtles__fini(&array->data[i]);
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

turtle_catcher_interfaces__msg__AliveTurtles__Sequence *
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__create(size_t size)
{
  turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array = (turtle_catcher_interfaces__msg__AliveTurtles__Sequence *)malloc(sizeof(turtle_catcher_interfaces__msg__AliveTurtles__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_catcher_interfaces__msg__AliveTurtles__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__destroy(turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array)
{
  if (array) {
    turtle_catcher_interfaces__msg__AliveTurtles__Sequence__fini(array);
  }
  free(array);
}
