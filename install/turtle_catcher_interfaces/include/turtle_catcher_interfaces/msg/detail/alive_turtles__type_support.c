// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_catcher_interfaces:msg/AliveTurtles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__rosidl_typesupport_introspection_c.h"
#include "turtle_catcher_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__functions.h"
#include "turtle_catcher_interfaces/msg/detail/alive_turtles__struct.h"


// Include directives for member types
// Member `alive_turtles`
#include "turtle_catcher_interfaces/msg/turtle.h"
// Member `alive_turtles`
#include "turtle_catcher_interfaces/msg/detail/turtle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_catcher_interfaces__msg__AliveTurtles__init(message_memory);
}

void AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_fini_function(void * message_memory)
{
  turtle_catcher_interfaces__msg__AliveTurtles__fini(message_memory);
}

size_t AliveTurtles__rosidl_typesupport_introspection_c__size_function__Turtle__alive_turtles(
  const void * untyped_member)
{
  const turtle_catcher_interfaces__msg__Turtle__Sequence * member =
    (const turtle_catcher_interfaces__msg__Turtle__Sequence *)(untyped_member);
  return member->size;
}

const void * AliveTurtles__rosidl_typesupport_introspection_c__get_const_function__Turtle__alive_turtles(
  const void * untyped_member, size_t index)
{
  const turtle_catcher_interfaces__msg__Turtle__Sequence * member =
    (const turtle_catcher_interfaces__msg__Turtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AliveTurtles__rosidl_typesupport_introspection_c__get_function__Turtle__alive_turtles(
  void * untyped_member, size_t index)
{
  turtle_catcher_interfaces__msg__Turtle__Sequence * member =
    (turtle_catcher_interfaces__msg__Turtle__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AliveTurtles__rosidl_typesupport_introspection_c__resize_function__Turtle__alive_turtles(
  void * untyped_member, size_t size)
{
  turtle_catcher_interfaces__msg__Turtle__Sequence * member =
    (turtle_catcher_interfaces__msg__Turtle__Sequence *)(untyped_member);
  turtle_catcher_interfaces__msg__Turtle__Sequence__fini(member);
  return turtle_catcher_interfaces__msg__Turtle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_member_array[1] = {
  {
    "alive_turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_catcher_interfaces__msg__AliveTurtles, alive_turtles),  // bytes offset in struct
    NULL,  // default value
    AliveTurtles__rosidl_typesupport_introspection_c__size_function__Turtle__alive_turtles,  // size() function pointer
    AliveTurtles__rosidl_typesupport_introspection_c__get_const_function__Turtle__alive_turtles,  // get_const(index) function pointer
    AliveTurtles__rosidl_typesupport_introspection_c__get_function__Turtle__alive_turtles,  // get(index) function pointer
    AliveTurtles__rosidl_typesupport_introspection_c__resize_function__Turtle__alive_turtles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_members = {
  "turtle_catcher_interfaces__msg",  // message namespace
  "AliveTurtles",  // message name
  1,  // number of fields
  sizeof(turtle_catcher_interfaces__msg__AliveTurtles),
  AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_member_array,  // message members
  AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_init_function,  // function to initialize message memory (memory has to be allocated)
  AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_type_support_handle = {
  0,
  &AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_catcher_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_catcher_interfaces, msg, AliveTurtles)() {
  AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_catcher_interfaces, msg, Turtle)();
  if (!AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_type_support_handle.typesupport_identifier) {
    AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AliveTurtles__rosidl_typesupport_introspection_c__AliveTurtles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
