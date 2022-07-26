// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from learn_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice
#include "learn_interface/msg/detail/object_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "learn_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "learn_interface/msg/detail/object_position__struct.h"
#include "learn_interface/msg/detail/object_position__functions.h"
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


// forward declare type support functions


using _ObjectPosition__ros_msg_type = learn_interface__msg__ObjectPosition;

static bool _ObjectPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectPosition__ros_msg_type * ros_message = static_cast<const _ObjectPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _ObjectPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectPosition__ros_msg_type * ros_message = static_cast<_ObjectPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learn_interface
size_t get_serialized_size_learn_interface__msg__ObjectPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectPosition__ros_msg_type * ros_message = static_cast<const _ObjectPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_learn_interface__msg__ObjectPosition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learn_interface
size_t max_serialized_size_learn_interface__msg__ObjectPosition(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectPosition__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_learn_interface__msg__ObjectPosition(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectPosition = {
  "learn_interface::msg",
  "ObjectPosition",
  _ObjectPosition__cdr_serialize,
  _ObjectPosition__cdr_deserialize,
  _ObjectPosition__get_serialized_size,
  _ObjectPosition__max_serialized_size
};

static rosidl_message_type_support_t _ObjectPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectPosition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, learn_interface, msg, ObjectPosition)() {
  return &_ObjectPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
