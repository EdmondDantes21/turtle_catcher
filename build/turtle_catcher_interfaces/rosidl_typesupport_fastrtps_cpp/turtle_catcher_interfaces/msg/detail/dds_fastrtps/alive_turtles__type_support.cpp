// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace turtle_catcher_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const turtle_catcher_interfaces::msg::Turtle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  turtle_catcher_interfaces::msg::Turtle &);
size_t get_serialized_size(
  const turtle_catcher_interfaces::msg::Turtle &,
  size_t current_alignment);
size_t
max_serialized_size_Turtle(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace turtle_catcher_interfaces


namespace turtle_catcher_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_catcher_interfaces
cdr_serialize(
  const turtle_catcher_interfaces::msg::AliveTurtles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: alive_turtles
  {
    size_t size = ros_message.alive_turtles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      turtle_catcher_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.alive_turtles[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_catcher_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_catcher_interfaces::msg::AliveTurtles & ros_message)
{
  // Member: alive_turtles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.alive_turtles.resize(size);
    for (size_t i = 0; i < size; i++) {
      turtle_catcher_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.alive_turtles[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_catcher_interfaces
get_serialized_size(
  const turtle_catcher_interfaces::msg::AliveTurtles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: alive_turtles
  {
    size_t array_size = ros_message.alive_turtles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        turtle_catcher_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.alive_turtles[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_catcher_interfaces
max_serialized_size_AliveTurtles(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: alive_turtles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        turtle_catcher_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Turtle(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AliveTurtles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_catcher_interfaces::msg::AliveTurtles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AliveTurtles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_catcher_interfaces::msg::AliveTurtles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AliveTurtles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_catcher_interfaces::msg::AliveTurtles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AliveTurtles__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AliveTurtles(full_bounded, 0);
}

static message_type_support_callbacks_t _AliveTurtles__callbacks = {
  "turtle_catcher_interfaces::msg",
  "AliveTurtles",
  _AliveTurtles__cdr_serialize,
  _AliveTurtles__cdr_deserialize,
  _AliveTurtles__get_serialized_size,
  _AliveTurtles__max_serialized_size
};

static rosidl_message_type_support_t _AliveTurtles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AliveTurtles__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtle_catcher_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_catcher_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_catcher_interfaces::msg::AliveTurtles>()
{
  return &turtle_catcher_interfaces::msg::typesupport_fastrtps_cpp::_AliveTurtles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_catcher_interfaces, msg, AliveTurtles)() {
  return &turtle_catcher_interfaces::msg::typesupport_fastrtps_cpp::_AliveTurtles__handle;
}

#ifdef __cplusplus
}
#endif
