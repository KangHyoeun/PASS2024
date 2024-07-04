// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pass:msg/ThrusterCommand.idl
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
#include "pass/msg/detail/thruster_command__struct.h"
#include "pass/msg/detail/thruster_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pass__msg__thruster_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("pass.msg._thruster_command.ThrusterCommand", full_classname_dest, 42) == 0);
  }
  pass__msg__ThrusterCommand * ros_message = _ros_message;
  {  // delta_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_p = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rps_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "rps_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rps_p = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rps_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "rps_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rps_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pass__msg__thruster_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ThrusterCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pass.msg._thruster_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ThrusterCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pass__msg__ThrusterCommand * ros_message = (pass__msg__ThrusterCommand *)raw_ros_message;
  {  // delta_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rps_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rps_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rps_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rps_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rps_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rps_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
