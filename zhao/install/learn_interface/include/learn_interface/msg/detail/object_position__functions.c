// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learn_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice
#include "learn_interface/msg/detail/object_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
learn_interface__msg__ObjectPosition__init(learn_interface__msg__ObjectPosition * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
learn_interface__msg__ObjectPosition__fini(learn_interface__msg__ObjectPosition * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

learn_interface__msg__ObjectPosition *
learn_interface__msg__ObjectPosition__create()
{
  learn_interface__msg__ObjectPosition * msg = (learn_interface__msg__ObjectPosition *)malloc(sizeof(learn_interface__msg__ObjectPosition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__msg__ObjectPosition));
  bool success = learn_interface__msg__ObjectPosition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__msg__ObjectPosition__destroy(learn_interface__msg__ObjectPosition * msg)
{
  if (msg) {
    learn_interface__msg__ObjectPosition__fini(msg);
  }
  free(msg);
}


bool
learn_interface__msg__ObjectPosition__Sequence__init(learn_interface__msg__ObjectPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__msg__ObjectPosition * data = NULL;
  if (size) {
    data = (learn_interface__msg__ObjectPosition *)calloc(size, sizeof(learn_interface__msg__ObjectPosition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__msg__ObjectPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__msg__ObjectPosition__fini(&data[i - 1]);
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
learn_interface__msg__ObjectPosition__Sequence__fini(learn_interface__msg__ObjectPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__msg__ObjectPosition__fini(&array->data[i]);
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

learn_interface__msg__ObjectPosition__Sequence *
learn_interface__msg__ObjectPosition__Sequence__create(size_t size)
{
  learn_interface__msg__ObjectPosition__Sequence * array = (learn_interface__msg__ObjectPosition__Sequence *)malloc(sizeof(learn_interface__msg__ObjectPosition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__msg__ObjectPosition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__msg__ObjectPosition__Sequence__destroy(learn_interface__msg__ObjectPosition__Sequence * array)
{
  if (array) {
    learn_interface__msg__ObjectPosition__Sequence__fini(array);
  }
  free(array);
}
