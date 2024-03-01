// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/RerouteAvailability.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/reroute_availability__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tier4_planning_msgs__msg__RerouteAvailability__init(tier4_planning_msgs__msg__RerouteAvailability * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_planning_msgs__msg__RerouteAvailability__fini(msg);
    return false;
  }
  // availability
  return true;
}

void
tier4_planning_msgs__msg__RerouteAvailability__fini(tier4_planning_msgs__msg__RerouteAvailability * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // availability
}

bool
tier4_planning_msgs__msg__RerouteAvailability__are_equal(const tier4_planning_msgs__msg__RerouteAvailability * lhs, const tier4_planning_msgs__msg__RerouteAvailability * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // availability
  if (lhs->availability != rhs->availability) {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__RerouteAvailability__copy(
  const tier4_planning_msgs__msg__RerouteAvailability * input,
  tier4_planning_msgs__msg__RerouteAvailability * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // availability
  output->availability = input->availability;
  return true;
}

tier4_planning_msgs__msg__RerouteAvailability *
tier4_planning_msgs__msg__RerouteAvailability__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__RerouteAvailability * msg = (tier4_planning_msgs__msg__RerouteAvailability *)allocator.allocate(sizeof(tier4_planning_msgs__msg__RerouteAvailability), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__RerouteAvailability));
  bool success = tier4_planning_msgs__msg__RerouteAvailability__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__RerouteAvailability__destroy(tier4_planning_msgs__msg__RerouteAvailability * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_planning_msgs__msg__RerouteAvailability__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_planning_msgs__msg__RerouteAvailability__Sequence__init(tier4_planning_msgs__msg__RerouteAvailability__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__RerouteAvailability * data = NULL;

  if (size) {
    data = (tier4_planning_msgs__msg__RerouteAvailability *)allocator.zero_allocate(size, sizeof(tier4_planning_msgs__msg__RerouteAvailability), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__RerouteAvailability__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__RerouteAvailability__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tier4_planning_msgs__msg__RerouteAvailability__Sequence__fini(tier4_planning_msgs__msg__RerouteAvailability__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__RerouteAvailability__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tier4_planning_msgs__msg__RerouteAvailability__Sequence *
tier4_planning_msgs__msg__RerouteAvailability__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__RerouteAvailability__Sequence * array = (tier4_planning_msgs__msg__RerouteAvailability__Sequence *)allocator.allocate(sizeof(tier4_planning_msgs__msg__RerouteAvailability__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__RerouteAvailability__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__RerouteAvailability__Sequence__destroy(tier4_planning_msgs__msg__RerouteAvailability__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_planning_msgs__msg__RerouteAvailability__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_planning_msgs__msg__RerouteAvailability__Sequence__are_equal(const tier4_planning_msgs__msg__RerouteAvailability__Sequence * lhs, const tier4_planning_msgs__msg__RerouteAvailability__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__RerouteAvailability__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__RerouteAvailability__Sequence__copy(
  const tier4_planning_msgs__msg__RerouteAvailability__Sequence * input,
  tier4_planning_msgs__msg__RerouteAvailability__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__RerouteAvailability);
    tier4_planning_msgs__msg__RerouteAvailability * data =
      (tier4_planning_msgs__msg__RerouteAvailability *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__RerouteAvailability__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__RerouteAvailability__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_planning_msgs__msg__RerouteAvailability__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
