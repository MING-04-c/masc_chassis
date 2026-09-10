// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
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
#include "masc_chassis_msgs/msg/detail/bms_status__struct.h"
#include "masc_chassis_msgs/msg/detail/bms_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool masc_chassis_msgs__msg__bms_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("masc_chassis_msgs.msg._bms_status.BmsStatus", full_classname_dest, 43) == 0);
  }
  masc_chassis_msgs__msg__BmsStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bat_soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bat_soc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bat_soh
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_soh");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bat_soh = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bat_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bat_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bat_max_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_max_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_max_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bat_max_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_max_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_max_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bat_temp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_temp_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_temp_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bat_temp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_temp_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_temp_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bms_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_health = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_cycle_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * masc_chassis_msgs__msg__bms_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BmsStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("masc_chassis_msgs.msg._bms_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BmsStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  masc_chassis_msgs__msg__BmsStatus * ros_message = (masc_chassis_msgs__msg__BmsStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bat_soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_soh
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bat_soh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_soh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_max_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_max_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_max_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_max_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_max_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_max_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_temp_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_temp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_temp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_temp_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_temp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_temp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_health
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_cycle_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
