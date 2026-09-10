# generated from rosidl_generator_py/resource/_idl.py.em
# with input from masc_chassis_msgs:msg/CanFrameStats.idl
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


class Metaclass_CanFrameStats(type):
    """Metaclass of message 'CanFrameStats'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'masc_chassis_msgs.msg.CanFrameStats')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_frame_stats
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_frame_stats
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_frame_stats
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_frame_stats
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_frame_stats

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CanFrameStats(metaclass=Metaclass_CanFrameStats):
    """Message class 'CanFrameStats'."""

    __slots__ = [
        '_can_id',
        '_rx_count',
        '_parse_error_count',
        '_drop_count',
        '_frequency',
        '_last_rx_age_ms',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'can_id': 'string',
        'rx_count': 'uint64',
        'parse_error_count': 'uint64',
        'drop_count': 'uint64',
        'frequency': 'double',
        'last_rx_age_ms': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.can_id = kwargs.get('can_id', str())
        self.rx_count = kwargs.get('rx_count', int())
        self.parse_error_count = kwargs.get('parse_error_count', int())
        self.drop_count = kwargs.get('drop_count', int())
        self.frequency = kwargs.get('frequency', float())
        self.last_rx_age_ms = kwargs.get('last_rx_age_ms', int())

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
        if self.can_id != other.can_id:
            return False
        if self.rx_count != other.rx_count:
            return False
        if self.parse_error_count != other.parse_error_count:
            return False
        if self.drop_count != other.drop_count:
            return False
        if self.frequency != other.frequency:
            return False
        if self.last_rx_age_ms != other.last_rx_age_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'can_id' field must be of type 'str'"
        self._can_id = value

    @builtins.property
    def rx_count(self):
        """Message field 'rx_count'."""
        return self._rx_count

    @rx_count.setter
    def rx_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rx_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rx_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rx_count = value

    @builtins.property
    def parse_error_count(self):
        """Message field 'parse_error_count'."""
        return self._parse_error_count

    @parse_error_count.setter
    def parse_error_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'parse_error_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'parse_error_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._parse_error_count = value

    @builtins.property
    def drop_count(self):
        """Message field 'drop_count'."""
        return self._drop_count

    @drop_count.setter
    def drop_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'drop_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'drop_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._drop_count = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'frequency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'frequency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._frequency = value

    @builtins.property
    def last_rx_age_ms(self):
        """Message field 'last_rx_age_ms'."""
        return self._last_rx_age_ms

    @last_rx_age_ms.setter
    def last_rx_age_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'last_rx_age_ms' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_rx_age_ms' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_rx_age_ms = value
