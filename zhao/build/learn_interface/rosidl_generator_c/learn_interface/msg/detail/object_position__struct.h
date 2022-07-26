// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learn_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_
#define LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ObjectPosition in the package learn_interface.
typedef struct learn_interface__msg__ObjectPosition
{
  int32_t x;
  int32_t y;
} learn_interface__msg__ObjectPosition;

// Struct for a sequence of learn_interface__msg__ObjectPosition.
typedef struct learn_interface__msg__ObjectPosition__Sequence
{
  learn_interface__msg__ObjectPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learn_interface__msg__ObjectPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_
