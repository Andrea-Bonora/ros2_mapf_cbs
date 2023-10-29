// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_intermediate_interfaces:msg/AgentPathRequest.idl
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
#include "my_intermediate_interfaces/msg/detail/agent_path_request__struct.h"
#include "my_intermediate_interfaces/msg/detail/agent_path_request__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "my_intermediate_interfaces/msg/detail/edge_constraint__functions.h"
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
bool my_intermediate_interfaces__msg__vertex_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * my_intermediate_interfaces__msg__vertex_constraint__convert_to_py(void * raw_ros_message);
bool my_intermediate_interfaces__msg__edge_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * my_intermediate_interfaces__msg__edge_constraint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool my_intermediate_interfaces__msg__agent_path_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("my_intermediate_interfaces.msg._agent_path_request.AgentPathRequest", full_classname_dest, 67) == 0);
  }
  my_intermediate_interfaces__msg__AgentPathRequest * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->start)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vertex_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertex_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vertex_constraints'");
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
    if (!my_intermediate_interfaces__msg__VertexConstraint__Sequence__init(&(ros_message->vertex_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create my_intermediate_interfaces__msg__VertexConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    my_intermediate_interfaces__msg__VertexConstraint * dest = ros_message->vertex_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!my_intermediate_interfaces__msg__vertex_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // edge_constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "edge_constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'edge_constraints'");
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
    if (!my_intermediate_interfaces__msg__EdgeConstraint__Sequence__init(&(ros_message->edge_constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create my_intermediate_interfaces__msg__EdgeConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    my_intermediate_interfaces__msg__EdgeConstraint * dest = ros_message->edge_constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!my_intermediate_interfaces__msg__edge_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * my_intermediate_interfaces__msg__agent_path_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AgentPathRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_intermediate_interfaces.msg._agent_path_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AgentPathRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_intermediate_interfaces__msg__AgentPathRequest * ros_message = (my_intermediate_interfaces__msg__AgentPathRequest *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->start);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertex_constraints
    PyObject * field = NULL;
    size_t size = ros_message->vertex_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    my_intermediate_interfaces__msg__VertexConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vertex_constraints.data[i]);
      PyObject * pyitem = my_intermediate_interfaces__msg__vertex_constraint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "vertex_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edge_constraints
    PyObject * field = NULL;
    size_t size = ros_message->edge_constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    my_intermediate_interfaces__msg__EdgeConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->edge_constraints.data[i]);
      PyObject * pyitem = my_intermediate_interfaces__msg__edge_constraint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "edge_constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
