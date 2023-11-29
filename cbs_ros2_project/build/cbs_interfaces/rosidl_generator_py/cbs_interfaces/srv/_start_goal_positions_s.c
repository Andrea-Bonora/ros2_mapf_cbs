// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cbs_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "cbs_interfaces/srv/detail/start_goal_positions__struct.h"
#include "cbs_interfaces/srv/detail/start_goal_positions__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cbs_interfaces/msg/detail/start_goal__functions.h"
// end nested array functions include
bool cbs_interfaces__msg__start_goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cbs_interfaces__msg__start_goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cbs_interfaces__srv__start_goal_positions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cbs_interfaces.srv._start_goal_positions.StartGoalPositions_Request", full_classname_dest, 67) == 0);
  }
  cbs_interfaces__srv__StartGoalPositions_Request * ros_message = _ros_message;
  {  // requests
    PyObject * field = PyObject_GetAttrString(_pymsg, "requests");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'requests'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cbs_interfaces__msg__StartGoal__Sequence__init(&(ros_message->requests), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cbs_interfaces__msg__StartGoal__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cbs_interfaces__msg__StartGoal * dest = ros_message->requests.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cbs_interfaces__msg__start_goal__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cbs_interfaces__srv__start_goal_positions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StartGoalPositions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cbs_interfaces.srv._start_goal_positions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StartGoalPositions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cbs_interfaces__srv__StartGoalPositions_Request * ros_message = (cbs_interfaces__srv__StartGoalPositions_Request *)raw_ros_message;
  {  // requests
    PyObject * field = NULL;
    size_t size = ros_message->requests.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cbs_interfaces__msg__StartGoal * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->requests.data[i]);
      PyObject * pyitem = cbs_interfaces__msg__start_goal__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "requests", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "cbs_interfaces/srv/detail/start_goal_positions__struct.h"
// already included above
// #include "cbs_interfaces/srv/detail/start_goal_positions__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cbs_interfaces/msg/detail/agent_path__functions.h"
// end nested array functions include
bool cbs_interfaces__msg__agent_path__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cbs_interfaces__msg__agent_path__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cbs_interfaces__srv__start_goal_positions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cbs_interfaces.srv._start_goal_positions.StartGoalPositions_Response", full_classname_dest, 68) == 0);
  }
  cbs_interfaces__srv__StartGoalPositions_Response * ros_message = _ros_message;
  {  // plans
    PyObject * field = PyObject_GetAttrString(_pymsg, "plans");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'plans'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cbs_interfaces__msg__AgentPath__Sequence__init(&(ros_message->plans), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cbs_interfaces__msg__AgentPath__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cbs_interfaces__msg__AgentPath * dest = ros_message->plans.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cbs_interfaces__msg__agent_path__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cbs_interfaces__srv__start_goal_positions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StartGoalPositions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cbs_interfaces.srv._start_goal_positions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StartGoalPositions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cbs_interfaces__srv__StartGoalPositions_Response * ros_message = (cbs_interfaces__srv__StartGoalPositions_Response *)raw_ros_message;
  {  // plans
    PyObject * field = NULL;
    size_t size = ros_message->plans.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cbs_interfaces__msg__AgentPath * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->plans.data[i]);
      PyObject * pyitem = cbs_interfaces__msg__agent_path__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "plans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
