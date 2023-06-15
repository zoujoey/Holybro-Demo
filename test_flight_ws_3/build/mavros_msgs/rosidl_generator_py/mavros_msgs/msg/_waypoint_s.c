// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mavros_msgs:msg/Waypoint.idl
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
#include "mavros_msgs/msg/detail/waypoint__struct.h"
#include "mavros_msgs/msg/detail/waypoint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mavros_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("mavros_msgs.msg._waypoint.Waypoint", full_classname_dest, 34) == 0);
  }
  mavros_msgs__msg__Waypoint * ros_message = _ros_message;
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_current");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_current = (Py_True == field);
    Py_DECREF(field);
  }
  {  // autocontinue
    PyObject * field = PyObject_GetAttrString(_pymsg, "autocontinue");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autocontinue = (Py_True == field);
    Py_DECREF(field);
  }
  {  // param1
    PyObject * field = PyObject_GetAttrString(_pymsg, "param1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param2
    PyObject * field = PyObject_GetAttrString(_pymsg, "param2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param3
    PyObject * field = PyObject_GetAttrString(_pymsg, "param3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param4
    PyObject * field = PyObject_GetAttrString(_pymsg, "param4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_long");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_long = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_alt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mavros_msgs__msg__waypoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Waypoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mavros_msgs.msg._waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Waypoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mavros_msgs__msg__Waypoint * ros_message = (mavros_msgs__msg__Waypoint *)raw_ros_message;
  {  // frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_current
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_current ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autocontinue
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autocontinue ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autocontinue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_long
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_long);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_long", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
