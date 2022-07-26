// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from learn_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__FUNCTIONS_H_
#define LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "learn_interface/msg/rosidl_generator_c__visibility_control.h"

#include "learn_interface/msg/detail/object_position__struct.h"

/// Initialize msg/ObjectPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learn_interface__msg__ObjectPosition
 * )) before or use
 * learn_interface__msg__ObjectPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
bool
learn_interface__msg__ObjectPosition__init(learn_interface__msg__ObjectPosition * msg);

/// Finalize msg/ObjectPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__msg__ObjectPosition__fini(learn_interface__msg__ObjectPosition * msg);

/// Create msg/ObjectPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learn_interface__msg__ObjectPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
learn_interface__msg__ObjectPosition *
learn_interface__msg__ObjectPosition__create();

/// Destroy msg/ObjectPosition message.
/**
 * It calls
 * learn_interface__msg__ObjectPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__msg__ObjectPosition__destroy(learn_interface__msg__ObjectPosition * msg);


/// Initialize array of msg/ObjectPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * learn_interface__msg__ObjectPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
bool
learn_interface__msg__ObjectPosition__Sequence__init(learn_interface__msg__ObjectPosition__Sequence * array, size_t size);

/// Finalize array of msg/ObjectPosition messages.
/**
 * It calls
 * learn_interface__msg__ObjectPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__msg__ObjectPosition__Sequence__fini(learn_interface__msg__ObjectPosition__Sequence * array);

/// Create array of msg/ObjectPosition messages.
/**
 * It allocates the memory for the array and calls
 * learn_interface__msg__ObjectPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
learn_interface__msg__ObjectPosition__Sequence *
learn_interface__msg__ObjectPosition__Sequence__create(size_t size);

/// Destroy array of msg/ObjectPosition messages.
/**
 * It calls
 * learn_interface__msg__ObjectPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__msg__ObjectPosition__Sequence__destroy(learn_interface__msg__ObjectPosition__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__FUNCTIONS_H_
