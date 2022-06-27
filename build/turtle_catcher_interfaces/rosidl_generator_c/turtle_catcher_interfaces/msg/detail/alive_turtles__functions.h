// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__FUNCTIONS_H_
#define TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_catcher_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_catcher_interfaces/msg/detail/alive_turtles__struct.h"

/// Initialize msg/AliveTurtles message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_catcher_interfaces__msg__AliveTurtles
 * )) before or use
 * turtle_catcher_interfaces__msg__AliveTurtles__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
bool
turtle_catcher_interfaces__msg__AliveTurtles__init(turtle_catcher_interfaces__msg__AliveTurtles * msg);

/// Finalize msg/AliveTurtles message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
void
turtle_catcher_interfaces__msg__AliveTurtles__fini(turtle_catcher_interfaces__msg__AliveTurtles * msg);

/// Create msg/AliveTurtles message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_catcher_interfaces__msg__AliveTurtles__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
turtle_catcher_interfaces__msg__AliveTurtles *
turtle_catcher_interfaces__msg__AliveTurtles__create();

/// Destroy msg/AliveTurtles message.
/**
 * It calls
 * turtle_catcher_interfaces__msg__AliveTurtles__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
void
turtle_catcher_interfaces__msg__AliveTurtles__destroy(turtle_catcher_interfaces__msg__AliveTurtles * msg);


/// Initialize array of msg/AliveTurtles messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_catcher_interfaces__msg__AliveTurtles__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
bool
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__init(turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array, size_t size);

/// Finalize array of msg/AliveTurtles messages.
/**
 * It calls
 * turtle_catcher_interfaces__msg__AliveTurtles__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
void
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__fini(turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array);

/// Create array of msg/AliveTurtles messages.
/**
 * It allocates the memory for the array and calls
 * turtle_catcher_interfaces__msg__AliveTurtles__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
turtle_catcher_interfaces__msg__AliveTurtles__Sequence *
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__create(size_t size);

/// Destroy array of msg/AliveTurtles messages.
/**
 * It calls
 * turtle_catcher_interfaces__msg__AliveTurtles__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_catcher_interfaces
void
turtle_catcher_interfaces__msg__AliveTurtles__Sequence__destroy(turtle_catcher_interfaces__msg__AliveTurtles__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CATCHER_INTERFACES__MSG__DETAIL__ALIVE_TURTLES__FUNCTIONS_H_
