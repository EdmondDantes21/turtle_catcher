// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_catcher_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice
#include "turtle_catcher_interfaces/srv/detail/catch_turtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `t`
#include "turtle_catcher_interfaces/msg/detail/turtle__functions.h"

bool
turtle_catcher_interfaces__srv__CatchTurtle_Request__init(turtle_catcher_interfaces__srv__CatchTurtle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // t
  if (!turtle_catcher_interfaces__msg__Turtle__init(&msg->t)) {
    turtle_catcher_interfaces__srv__CatchTurtle_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_catcher_interfaces__srv__CatchTurtle_Request__fini(turtle_catcher_interfaces__srv__CatchTurtle_Request * msg)
{
  if (!msg) {
    return;
  }
  // t
  turtle_catcher_interfaces__msg__Turtle__fini(&msg->t);
}

turtle_catcher_interfaces__srv__CatchTurtle_Request *
turtle_catcher_interfaces__srv__CatchTurtle_Request__create()
{
  turtle_catcher_interfaces__srv__CatchTurtle_Request * msg = (turtle_catcher_interfaces__srv__CatchTurtle_Request *)malloc(sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Request));
  bool success = turtle_catcher_interfaces__srv__CatchTurtle_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_catcher_interfaces__srv__CatchTurtle_Request__destroy(turtle_catcher_interfaces__srv__CatchTurtle_Request * msg)
{
  if (msg) {
    turtle_catcher_interfaces__srv__CatchTurtle_Request__fini(msg);
  }
  free(msg);
}


bool
turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence__init(turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_catcher_interfaces__srv__CatchTurtle_Request * data = NULL;
  if (size) {
    data = (turtle_catcher_interfaces__srv__CatchTurtle_Request *)calloc(size, sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_catcher_interfaces__srv__CatchTurtle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_catcher_interfaces__srv__CatchTurtle_Request__fini(&data[i - 1]);
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
turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence__fini(turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_catcher_interfaces__srv__CatchTurtle_Request__fini(&array->data[i]);
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

turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence *
turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence__create(size_t size)
{
  turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence * array = (turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence *)malloc(sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence__destroy(turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence * array)
{
  if (array) {
    turtle_catcher_interfaces__srv__CatchTurtle_Request__Sequence__fini(array);
  }
  free(array);
}


bool
turtle_catcher_interfaces__srv__CatchTurtle_Response__init(turtle_catcher_interfaces__srv__CatchTurtle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
turtle_catcher_interfaces__srv__CatchTurtle_Response__fini(turtle_catcher_interfaces__srv__CatchTurtle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

turtle_catcher_interfaces__srv__CatchTurtle_Response *
turtle_catcher_interfaces__srv__CatchTurtle_Response__create()
{
  turtle_catcher_interfaces__srv__CatchTurtle_Response * msg = (turtle_catcher_interfaces__srv__CatchTurtle_Response *)malloc(sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Response));
  bool success = turtle_catcher_interfaces__srv__CatchTurtle_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_catcher_interfaces__srv__CatchTurtle_Response__destroy(turtle_catcher_interfaces__srv__CatchTurtle_Response * msg)
{
  if (msg) {
    turtle_catcher_interfaces__srv__CatchTurtle_Response__fini(msg);
  }
  free(msg);
}


bool
turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence__init(turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_catcher_interfaces__srv__CatchTurtle_Response * data = NULL;
  if (size) {
    data = (turtle_catcher_interfaces__srv__CatchTurtle_Response *)calloc(size, sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_catcher_interfaces__srv__CatchTurtle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_catcher_interfaces__srv__CatchTurtle_Response__fini(&data[i - 1]);
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
turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence__fini(turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_catcher_interfaces__srv__CatchTurtle_Response__fini(&array->data[i]);
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

turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence *
turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence__create(size_t size)
{
  turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence * array = (turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence *)malloc(sizeof(turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence__destroy(turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence * array)
{
  if (array) {
    turtle_catcher_interfaces__srv__CatchTurtle_Response__Sequence__fini(array);
  }
  free(array);
}
