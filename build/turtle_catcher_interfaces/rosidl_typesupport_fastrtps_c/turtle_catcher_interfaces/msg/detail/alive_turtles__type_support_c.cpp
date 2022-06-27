// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_catcher_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__struct.h"
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "turtle_catcher_interfaces/msg/detail/turtle__functions.h"  // alive_turtles

// forward declare type support functions
size_t get_serialized_size_turtle_catcher_interfaces__msg__Turtle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_turtle_catcher_interfaces__msg__Turtle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, Turtle)();


using _AliveTurtles__ros_msg_type = turtle_catcher_interfaces__msg__AliveTurtles;

static bool _AliveTurtles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AliveTurtles__ros_msg_type * ros_message = static_cast<const _AliveTurtles__ros_msg_type *>(untyped_ros_message);
  // Field name: alive_turtles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, Turtle
      )()->data);
    size_t size = ros_message->alive_turtles.size;
    auto array_ptr = ros_message->alive_turtles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _AliveTurtles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AliveTurtles__ros_msg_type * ros_message = static_cast<_AliveTurtles__ros_msg_type *>(untyped_ros_message);
  // Field name: alive_turtles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, Turtle
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->alive_turtles.data) {
      turtle_catcher_interfaces__msg__Turtle__Sequence__fini(&ros_message->alive_turtles);
    }
    if (!turtle_catcher_interfaces__msg__Turtle__Sequence__init(&ros_message->alive_turtles, size)) {
      return "failed to create array for field 'alive_turtles'";
    }
    auto array_ptr = ros_message->alive_turtles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_catcher_interfaces
size_t get_serialized_size_turtle_catcher_interfaces__msg__AliveTurtles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AliveTurtles__ros_msg_type * ros_message = static_cast<const _AliveTurtles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name alive_turtles
  {
    size_t array_size = ros_message->alive_turtles.size;
    auto array_ptr = ros_message->alive_turtles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_turtle_catcher_interfaces__msg__Turtle(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AliveTurtles__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_catcher_interfaces__msg__AliveTurtles(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_catcher_interfaces
size_t max_serialized_size_turtle_catcher_interfaces__msg__AliveTurtles(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: alive_turtles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_turtle_catcher_interfaces__msg__Turtle(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AliveTurtles__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_catcher_interfaces__msg__AliveTurtles(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AliveTurtles = {
  "turtle_catcher_interfaces::msg",
  "AliveTurtles",
  _AliveTurtles__cdr_serialize,
  _AliveTurtles__cdr_deserialize,
  _AliveTurtles__get_serialized_size,
  _AliveTurtles__max_serialized_size
};

static rosidl_message_type_support_t _AliveTurtles__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AliveTurtles,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, AliveTurtles)() {
  return &_AliveTurtles__type_support;
}

#if defined(__cplusplus)
}
#endif
