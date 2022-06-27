// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_catcher_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice
#include "turtle_catcher_interfaces/srv/detail/catch_turtle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_catcher_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_catcher_interfaces/srv/detail/catch_turtle__struct.h"
#include "turtle_catcher_interfaces/srv/detail/catch_turtle__functions.h"
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

#include "turtle_catcher_interfaces/msg/detail/turtle__functions.h"  // t

// forward declare type support functions
size_t get_serialized_size_turtle_catcher_interfaces__msg__Turtle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_turtle_catcher_interfaces__msg__Turtle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, Turtle)();


using _CatchTurtle_Request__ros_msg_type = turtle_catcher_interfaces__srv__CatchTurtle_Request;

static bool _CatchTurtle_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CatchTurtle_Request__ros_msg_type * ros_message = static_cast<const _CatchTurtle_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: t
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, Turtle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CatchTurtle_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CatchTurtle_Request__ros_msg_type * ros_message = static_cast<_CatchTurtle_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: t
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, msg, Turtle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_catcher_interfaces
size_t get_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CatchTurtle_Request__ros_msg_type * ros_message = static_cast<const _CatchTurtle_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name t

  current_alignment += get_serialized_size_turtle_catcher_interfaces__msg__Turtle(
    &(ros_message->t), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CatchTurtle_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_catcher_interfaces
size_t max_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: t
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_turtle_catcher_interfaces__msg__Turtle(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CatchTurtle_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CatchTurtle_Request = {
  "turtle_catcher_interfaces::srv",
  "CatchTurtle_Request",
  _CatchTurtle_Request__cdr_serialize,
  _CatchTurtle_Request__cdr_deserialize,
  _CatchTurtle_Request__get_serialized_size,
  _CatchTurtle_Request__max_serialized_size
};

static rosidl_message_type_support_t _CatchTurtle_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CatchTurtle_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, srv, CatchTurtle_Request)() {
  return &_CatchTurtle_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtle_catcher_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtle_catcher_interfaces/srv/detail/catch_turtle__struct.h"
// already included above
// #include "turtle_catcher_interfaces/srv/detail/catch_turtle__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _CatchTurtle_Response__ros_msg_type = turtle_catcher_interfaces__srv__CatchTurtle_Response;

static bool _CatchTurtle_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CatchTurtle_Response__ros_msg_type * ros_message = static_cast<const _CatchTurtle_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _CatchTurtle_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CatchTurtle_Response__ros_msg_type * ros_message = static_cast<_CatchTurtle_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_catcher_interfaces
size_t get_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CatchTurtle_Response__ros_msg_type * ros_message = static_cast<const _CatchTurtle_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CatchTurtle_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_catcher_interfaces
size_t max_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CatchTurtle_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_catcher_interfaces__srv__CatchTurtle_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CatchTurtle_Response = {
  "turtle_catcher_interfaces::srv",
  "CatchTurtle_Response",
  _CatchTurtle_Response__cdr_serialize,
  _CatchTurtle_Response__cdr_deserialize,
  _CatchTurtle_Response__get_serialized_size,
  _CatchTurtle_Response__max_serialized_size
};

static rosidl_message_type_support_t _CatchTurtle_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CatchTurtle_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, srv, CatchTurtle_Response)() {
  return &_CatchTurtle_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "turtle_catcher_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_catcher_interfaces/srv/catch_turtle.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CatchTurtle__callbacks = {
  "turtle_catcher_interfaces::srv",
  "CatchTurtle",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, srv, CatchTurtle_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, srv, CatchTurtle_Response)(),
};

static rosidl_service_type_support_t CatchTurtle__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CatchTurtle__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_catcher_interfaces, srv, CatchTurtle)() {
  return &CatchTurtle__handle;
}

#if defined(__cplusplus)
}
#endif
