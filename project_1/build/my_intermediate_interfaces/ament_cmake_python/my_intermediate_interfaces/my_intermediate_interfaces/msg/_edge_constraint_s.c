// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
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
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.h"
#include "my_intermediate_interfaces/msg/detail/edge_constraint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool my_intermediate_interfaces__msg__edge_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("my_intermediate_interfaces.msg._edge_constraint.EdgeConstraint", full_classname_dest, 62) == 0);
  }
  my_intermediate_interfaces__msg__EdgeConstraint * ros_message = _ros_message;
  {  // cell_from
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_from");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->cell_from)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cell_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_to");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->cell_to)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_step = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_intermediate_interfaces__msg__edge_constraint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EdgeConstraint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_intermediate_interfaces.msg._edge_constraint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EdgeConstraint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_intermediate_interfaces__msg__EdgeConstraint * ros_message = (my_intermediate_interfaces__msg__EdgeConstraint *)raw_ros_message;
  {  // cell_from
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->cell_from);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_from", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_to
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->cell_to);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_step
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->time_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
