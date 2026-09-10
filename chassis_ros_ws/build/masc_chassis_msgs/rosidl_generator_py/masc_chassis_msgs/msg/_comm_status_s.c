// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
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
#include "masc_chassis_msgs/msg/detail/comm_status__struct.h"
#include "masc_chassis_msgs/msg/detail/comm_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool masc_chassis_msgs__msg__comm_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("masc_chassis_msgs.msg._comm_status.CommStatus", full_classname_dest, 45) == 0);
  }
  masc_chassis_msgs__msg__CommStatus * ros_message = _ros_message;
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
  {  // comm_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "comm_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->comm_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fail_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "fail_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fail_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motion_command_timeout_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_command_timeout_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_command_timeout_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_attempt_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_attempt_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connection_attempt_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // transport_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "transport_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transport_error_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // tx_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_error_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rx_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_error_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // chassis_uuid
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_uuid");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 5;
      uint8_t * dest = ros_message->chassis_uuid;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // system_software_hardware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_software_hardware_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_software_hardware_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chassis_type_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_type_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_type_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chassis_protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_protocol_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_protocol_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * masc_chassis_msgs__msg__comm_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("masc_chassis_msgs.msg._comm_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  masc_chassis_msgs__msg__CommStatus * ros_message = (masc_chassis_msgs__msg__CommStatus *)raw_ros_message;
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
  {  // comm_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->comm_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comm_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fail_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fail_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fail_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_command_timeout_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_command_timeout_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_command_timeout_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_attempt_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->connection_attempt_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_attempt_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transport_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->transport_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transport_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->tx_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rx_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_uuid
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "chassis_uuid");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->chassis_uuid[0]);
    memcpy(dst, src, 5 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // system_software_hardware_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_software_hardware_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_software_hardware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_type_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_type_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_type_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_protocol_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_protocol_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
