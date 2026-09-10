# generated from rosidl_generator_py/resource/_idl.py.em
# with input from masc_chassis_msgs:msg/BmsStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsStatus(type):
    """Metaclass of message 'BmsStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BMS_HEALTH_TIMEOUT': 255,
        'BMS_HEALTH_UNKNOWN': 0,
        'BMS_HEALTH_GOOD': 1,
        'BMS_HEALTH_OVERHEAT': 2,
        'BMS_HEALTH_DEAD': 3,
        'BMS_HEALTH_OVERVOLTAGE': 4,
        'BMS_HEALTH_UNSPEC_FAILURE': 5,
        'BMS_HEALTH_COLD': 6,
        'BMS_HEALTH_WATCHDOG_TIMER_EXPIRE': 7,
        'BMS_HEALTH_SAFETY_TIMER_EXPIRE': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('masc_chassis_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'masc_chassis_msgs.msg.BmsStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BMS_HEALTH_TIMEOUT': cls.__constants['BMS_HEALTH_TIMEOUT'],
            'BMS_HEALTH_UNKNOWN': cls.__constants['BMS_HEALTH_UNKNOWN'],
            'BMS_HEALTH_GOOD': cls.__constants['BMS_HEALTH_GOOD'],
            'BMS_HEALTH_OVERHEAT': cls.__constants['BMS_HEALTH_OVERHEAT'],
            'BMS_HEALTH_DEAD': cls.__constants['BMS_HEALTH_DEAD'],
            'BMS_HEALTH_OVERVOLTAGE': cls.__constants['BMS_HEALTH_OVERVOLTAGE'],
            'BMS_HEALTH_UNSPEC_FAILURE': cls.__constants['BMS_HEALTH_UNSPEC_FAILURE'],
            'BMS_HEALTH_COLD': cls.__constants['BMS_HEALTH_COLD'],
            'BMS_HEALTH_WATCHDOG_TIMER_EXPIRE': cls.__constants['BMS_HEALTH_WATCHDOG_TIMER_EXPIRE'],
            'BMS_HEALTH_SAFETY_TIMER_EXPIRE': cls.__constants['BMS_HEALTH_SAFETY_TIMER_EXPIRE'],
        }

    @property
    def BMS_HEALTH_TIMEOUT(self):
        """Message constant 'BMS_HEALTH_TIMEOUT'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_TIMEOUT']

    @property
    def BMS_HEALTH_UNKNOWN(self):
        """Message constant 'BMS_HEALTH_UNKNOWN'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_UNKNOWN']

    @property
    def BMS_HEALTH_GOOD(self):
        """Message constant 'BMS_HEALTH_GOOD'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_GOOD']

    @property
    def BMS_HEALTH_OVERHEAT(self):
        """Message constant 'BMS_HEALTH_OVERHEAT'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_OVERHEAT']

    @property
    def BMS_HEALTH_DEAD(self):
        """Message constant 'BMS_HEALTH_DEAD'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_DEAD']

    @property
    def BMS_HEALTH_OVERVOLTAGE(self):
        """Message constant 'BMS_HEALTH_OVERVOLTAGE'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_OVERVOLTAGE']

    @property
    def BMS_HEALTH_UNSPEC_FAILURE(self):
        """Message constant 'BMS_HEALTH_UNSPEC_FAILURE'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_UNSPEC_FAILURE']

    @property
    def BMS_HEALTH_COLD(self):
        """Message constant 'BMS_HEALTH_COLD'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_COLD']

    @property
    def BMS_HEALTH_WATCHDOG_TIMER_EXPIRE(self):
        """Message constant 'BMS_HEALTH_WATCHDOG_TIMER_EXPIRE'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_WATCHDOG_TIMER_EXPIRE']

    @property
    def BMS_HEALTH_SAFETY_TIMER_EXPIRE(self):
        """Message constant 'BMS_HEALTH_SAFETY_TIMER_EXPIRE'."""
        return Metaclass_BmsStatus.__constants['BMS_HEALTH_SAFETY_TIMER_EXPIRE']


class BmsStatus(metaclass=Metaclass_BmsStatus):
    """
    Message class 'BmsStatus'.

    Constants:
      BMS_HEALTH_TIMEOUT
      BMS_HEALTH_UNKNOWN
      BMS_HEALTH_GOOD
      BMS_HEALTH_OVERHEAT
      BMS_HEALTH_DEAD
      BMS_HEALTH_OVERVOLTAGE
      BMS_HEALTH_UNSPEC_FAILURE
      BMS_HEALTH_COLD
      BMS_HEALTH_WATCHDOG_TIMER_EXPIRE
      BMS_HEALTH_SAFETY_TIMER_EXPIRE
    """

    __slots__ = [
        '_header',
        '_bat_soc',
        '_bat_soh',
        '_bat_voltage',
        '_bat_current',
        '_bat_max_voltage',
        '_bat_max_current',
        '_bat_temp_max',
        '_bat_temp_min',
        '_bms_health',
        '_bms_cycle_count',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bat_soc': 'uint8',
        'bat_soh': 'uint8',
        'bat_voltage': 'double',
        'bat_current': 'double',
        'bat_max_voltage': 'double',
        'bat_max_current': 'double',
        'bat_temp_max': 'double',
        'bat_temp_min': 'double',
        'bms_health': 'uint8',
        'bms_cycle_count': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.bat_soc = kwargs.get('bat_soc', int())
        self.bat_soh = kwargs.get('bat_soh', int())
        self.bat_voltage = kwargs.get('bat_voltage', float())
        self.bat_current = kwargs.get('bat_current', float())
        self.bat_max_voltage = kwargs.get('bat_max_voltage', float())
        self.bat_max_current = kwargs.get('bat_max_current', float())
        self.bat_temp_max = kwargs.get('bat_temp_max', float())
        self.bat_temp_min = kwargs.get('bat_temp_min', float())
        self.bms_health = kwargs.get('bms_health', int())
        self.bms_cycle_count = kwargs.get('bms_cycle_count', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.bat_soc != other.bat_soc:
            return False
        if self.bat_soh != other.bat_soh:
            return False
        if self.bat_voltage != other.bat_voltage:
            return False
        if self.bat_current != other.bat_current:
            return False
        if self.bat_max_voltage != other.bat_max_voltage:
            return False
        if self.bat_max_current != other.bat_max_current:
            return False
        if self.bat_temp_max != other.bat_temp_max:
            return False
        if self.bat_temp_min != other.bat_temp_min:
            return False
        if self.bms_health != other.bms_health:
            return False
        if self.bms_cycle_count != other.bms_cycle_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def bat_soc(self):
        """Message field 'bat_soc'."""
        return self._bat_soc

    @bat_soc.setter
    def bat_soc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bat_soc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bat_soc' field must be an unsigned integer in [0, 255]"
        self._bat_soc = value

    @builtins.property
    def bat_soh(self):
        """Message field 'bat_soh'."""
        return self._bat_soh

    @bat_soh.setter
    def bat_soh(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bat_soh' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bat_soh' field must be an unsigned integer in [0, 255]"
        self._bat_soh = value

    @builtins.property
    def bat_voltage(self):
        """Message field 'bat_voltage'."""
        return self._bat_voltage

    @bat_voltage.setter
    def bat_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bat_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bat_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bat_voltage = value

    @builtins.property
    def bat_current(self):
        """Message field 'bat_current'."""
        return self._bat_current

    @bat_current.setter
    def bat_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bat_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bat_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bat_current = value

    @builtins.property
    def bat_max_voltage(self):
        """Message field 'bat_max_voltage'."""
        return self._bat_max_voltage

    @bat_max_voltage.setter
    def bat_max_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bat_max_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bat_max_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bat_max_voltage = value

    @builtins.property
    def bat_max_current(self):
        """Message field 'bat_max_current'."""
        return self._bat_max_current

    @bat_max_current.setter
    def bat_max_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bat_max_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bat_max_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bat_max_current = value

    @builtins.property
    def bat_temp_max(self):
        """Message field 'bat_temp_max'."""
        return self._bat_temp_max

    @bat_temp_max.setter
    def bat_temp_max(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bat_temp_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bat_temp_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bat_temp_max = value

    @builtins.property
    def bat_temp_min(self):
        """Message field 'bat_temp_min'."""
        return self._bat_temp_min

    @bat_temp_min.setter
    def bat_temp_min(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bat_temp_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bat_temp_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bat_temp_min = value

    @builtins.property
    def bms_health(self):
        """Message field 'bms_health'."""
        return self._bms_health

    @bms_health.setter
    def bms_health(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bms_health' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_health' field must be an unsigned integer in [0, 255]"
        self._bms_health = value

    @builtins.property
    def bms_cycle_count(self):
        """Message field 'bms_cycle_count'."""
        return self._bms_cycle_count

    @bms_cycle_count.setter
    def bms_cycle_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bms_cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bms_cycle_count' field must be an unsigned integer in [0, 65535]"
        self._bms_cycle_count = value
