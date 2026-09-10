// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
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
#include "masc_chassis_msgs/msg/detail/chassis_status__struct.h"
#include "masc_chassis_msgs/msg/detail/chassis_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool masc_chassis_msgs__msg__chassis_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("masc_chassis_msgs.msg._chassis_status.ChassisStatus", full_classname_dest, 51) == 0);
  }
  masc_chassis_msgs__msg__ChassisStatus * ros_message = _ros_message;
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
  {  // chassis_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_motion_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_motion_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_motion_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motion_mode_switching
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_mode_switching");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_mode_switching = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_battery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_battery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // excessive_tilt
    PyObject * field = PyObject_GetAttrString(_pymsg, "excessive_tilt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->excessive_tilt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // manual_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->manual_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dock_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "dock_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dock_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // main_power_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "main_power_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->main_power_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle_status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_status_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_status_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_status_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_status_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chassis_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_fault = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * masc_chassis_msgs__msg__chassis_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChassisStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("masc_chassis_msgs.msg._chassis_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChassisStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  masc_chassis_msgs__msg__ChassisStatus * ros_message = (masc_chassis_msgs__msg__ChassisStatus *)raw_ros_message;
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
  {  // chassis_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_motion_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_motion_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_motion_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_mode_switching
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_mode_switching ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_mode_switching", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_battery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_battery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // excessive_tilt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->excessive_tilt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "excessive_tilt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->manual_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dock_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dock_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dock_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // main_power_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->main_power_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "main_power_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_status_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacle_status_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_status_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_status_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
