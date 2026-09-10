# generated from rosidl_generator_py/resource/_idl.py.em
# with input from masc_chassis_msgs:msg/ServoMotor.idl
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


class Metaclass_ServoMotor(type):
    """Metaclass of message 'ServoMotor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SERVO_CALIBRATION_NOT_CALIBRATED': 0,
        'SERVO_CALIBRATION_CALIBRATING': 1,
        'SERVO_CALIBRATION_CALIBRATED': 2,
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
                'masc_chassis_msgs.msg.ServoMotor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_motor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_motor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_motor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_motor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_motor

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SERVO_CALIBRATION_NOT_CALIBRATED': cls.__constants['SERVO_CALIBRATION_NOT_CALIBRATED'],
            'SERVO_CALIBRATION_CALIBRATING': cls.__constants['SERVO_CALIBRATION_CALIBRATING'],
            'SERVO_CALIBRATION_CALIBRATED': cls.__constants['SERVO_CALIBRATION_CALIBRATED'],
        }

    @property
    def SERVO_CALIBRATION_NOT_CALIBRATED(self):
        """Message constant 'SERVO_CALIBRATION_NOT_CALIBRATED'."""
        return Metaclass_ServoMotor.__constants['SERVO_CALIBRATION_NOT_CALIBRATED']

    @property
    def SERVO_CALIBRATION_CALIBRATING(self):
        """Message constant 'SERVO_CALIBRATION_CALIBRATING'."""
        return Metaclass_ServoMotor.__constants['SERVO_CALIBRATION_CALIBRATING']

    @property
    def SERVO_CALIBRATION_CALIBRATED(self):
        """Message constant 'SERVO_CALIBRATION_CALIBRATED'."""
        return Metaclass_ServoMotor.__constants['SERVO_CALIBRATION_CALIBRATED']


class ServoMotor(metaclass=Metaclass_ServoMotor):
    """
    Message class 'ServoMotor'.

    Constants:
      SERVO_CALIBRATION_NOT_CALIBRATED
      SERVO_CALIBRATION_CALIBRATING
      SERVO_CALIBRATION_CALIBRATED
    """

    __slots__ = [
        '_header',
        '_index',
        '_calibration_state',
        '_angle',
        '_current',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'index': 'uint8',
        'calibration_state': 'uint8',
        'angle': 'double',
        'current': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.index = kwargs.get('index', int())
        self.calibration_state = kwargs.get('calibration_state', int())
        self.angle = kwargs.get('angle', float())
        self.current = kwargs.get('current', float())

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
        if self.index != other.index:
            return False
        if self.calibration_state != other.calibration_state:
            return False
        if self.angle != other.angle:
            return False
        if self.current != other.current:
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
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'index' field must be an unsigned integer in [0, 255]"
        self._index = value

    @builtins.property
    def calibration_state(self):
        """Message field 'calibration_state'."""
        return self._calibration_state

    @calibration_state.setter
    def calibration_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'calibration_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'calibration_state' field must be an unsigned integer in [0, 255]"
        self._calibration_state = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current = value
