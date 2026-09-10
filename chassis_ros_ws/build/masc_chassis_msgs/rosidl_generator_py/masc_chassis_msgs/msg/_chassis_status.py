# generated from rosidl_generator_py/resource/_idl.py.em
# with input from masc_chassis_msgs:msg/ChassisStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChassisStatus(type):
    """Metaclass of message 'ChassisStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CHASSIS_STATE_UNKNOWN': 0,
        'CHASSIS_STATE_ESTOP': 1,
        'CHASSIS_STATE_TOW': 2,
        'CHASSIS_STATE_FAULT': 3,
        'CHASSIS_STATE_SELF_CHECK': 4,
        'CHASSIS_STATE_PARK': 5,
        'CHASSIS_STATE_REMOTE_CONTROL': 6,
        'CHASSIS_STATE_COMM_CONTROL': 7,
        'MOTION_MODE_DEFAULT_CHASSIS': 0,
        'MOTION_MODE_PARK': 1,
        'MOTION_MODE_ACKERMANN': 2,
        'MOTION_MODE_SPIN': 3,
        'MOTION_MODE_LATERAL': 4,
        'MOTION_MODE_DIAGONAL': 5,
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
                'masc_chassis_msgs.msg.ChassisStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__chassis_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__chassis_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__chassis_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__chassis_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__chassis_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CHASSIS_STATE_UNKNOWN': cls.__constants['CHASSIS_STATE_UNKNOWN'],
            'CHASSIS_STATE_ESTOP': cls.__constants['CHASSIS_STATE_ESTOP'],
            'CHASSIS_STATE_TOW': cls.__constants['CHASSIS_STATE_TOW'],
            'CHASSIS_STATE_FAULT': cls.__constants['CHASSIS_STATE_FAULT'],
            'CHASSIS_STATE_SELF_CHECK': cls.__constants['CHASSIS_STATE_SELF_CHECK'],
            'CHASSIS_STATE_PARK': cls.__constants['CHASSIS_STATE_PARK'],
            'CHASSIS_STATE_REMOTE_CONTROL': cls.__constants['CHASSIS_STATE_REMOTE_CONTROL'],
            'CHASSIS_STATE_COMM_CONTROL': cls.__constants['CHASSIS_STATE_COMM_CONTROL'],
            'MOTION_MODE_DEFAULT_CHASSIS': cls.__constants['MOTION_MODE_DEFAULT_CHASSIS'],
            'MOTION_MODE_PARK': cls.__constants['MOTION_MODE_PARK'],
            'MOTION_MODE_ACKERMANN': cls.__constants['MOTION_MODE_ACKERMANN'],
            'MOTION_MODE_SPIN': cls.__constants['MOTION_MODE_SPIN'],
            'MOTION_MODE_LATERAL': cls.__constants['MOTION_MODE_LATERAL'],
            'MOTION_MODE_DIAGONAL': cls.__constants['MOTION_MODE_DIAGONAL'],
        }

    @property
    def CHASSIS_STATE_UNKNOWN(self):
        """Message constant 'CHASSIS_STATE_UNKNOWN'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_UNKNOWN']

    @property
    def CHASSIS_STATE_ESTOP(self):
        """Message constant 'CHASSIS_STATE_ESTOP'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_ESTOP']

    @property
    def CHASSIS_STATE_TOW(self):
        """Message constant 'CHASSIS_STATE_TOW'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_TOW']

    @property
    def CHASSIS_STATE_FAULT(self):
        """Message constant 'CHASSIS_STATE_FAULT'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_FAULT']

    @property
    def CHASSIS_STATE_SELF_CHECK(self):
        """Message constant 'CHASSIS_STATE_SELF_CHECK'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_SELF_CHECK']

    @property
    def CHASSIS_STATE_PARK(self):
        """Message constant 'CHASSIS_STATE_PARK'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_PARK']

    @property
    def CHASSIS_STATE_REMOTE_CONTROL(self):
        """Message constant 'CHASSIS_STATE_REMOTE_CONTROL'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_REMOTE_CONTROL']

    @property
    def CHASSIS_STATE_COMM_CONTROL(self):
        """Message constant 'CHASSIS_STATE_COMM_CONTROL'."""
        return Metaclass_ChassisStatus.__constants['CHASSIS_STATE_COMM_CONTROL']

    @property
    def MOTION_MODE_DEFAULT_CHASSIS(self):
        """Message constant 'MOTION_MODE_DEFAULT_CHASSIS'."""
        return Metaclass_ChassisStatus.__constants['MOTION_MODE_DEFAULT_CHASSIS']

    @property
    def MOTION_MODE_PARK(self):
        """Message constant 'MOTION_MODE_PARK'."""
        return Metaclass_ChassisStatus.__constants['MOTION_MODE_PARK']

    @property
    def MOTION_MODE_ACKERMANN(self):
        """Message constant 'MOTION_MODE_ACKERMANN'."""
        return Metaclass_ChassisStatus.__constants['MOTION_MODE_ACKERMANN']

    @property
    def MOTION_MODE_SPIN(self):
        """Message constant 'MOTION_MODE_SPIN'."""
        return Metaclass_ChassisStatus.__constants['MOTION_MODE_SPIN']

    @property
    def MOTION_MODE_LATERAL(self):
        """Message constant 'MOTION_MODE_LATERAL'."""
        return Metaclass_ChassisStatus.__constants['MOTION_MODE_LATERAL']

    @property
    def MOTION_MODE_DIAGONAL(self):
        """Message constant 'MOTION_MODE_DIAGONAL'."""
        return Metaclass_ChassisStatus.__constants['MOTION_MODE_DIAGONAL']


class ChassisStatus(metaclass=Metaclass_ChassisStatus):
    """
    Message class 'ChassisStatus'.

    Constants:
      CHASSIS_STATE_UNKNOWN
      CHASSIS_STATE_ESTOP
      CHASSIS_STATE_TOW
      CHASSIS_STATE_FAULT
      CHASSIS_STATE_SELF_CHECK
      CHASSIS_STATE_PARK
      CHASSIS_STATE_REMOTE_CONTROL
      CHASSIS_STATE_COMM_CONTROL
      MOTION_MODE_DEFAULT_CHASSIS
      MOTION_MODE_PARK
      MOTION_MODE_ACKERMANN
      MOTION_MODE_SPIN
      MOTION_MODE_LATERAL
      MOTION_MODE_DIAGONAL
    """

    __slots__ = [
        '_header',
        '_chassis_state',
        '_current_motion_mode',
        '_motion_mode_switching',
        '_brake_active',
        '_low_battery',
        '_excessive_tilt',
        '_manual_charging',
        '_dock_charging',
        '_main_power_active',
        '_obstacle_status_flags',
        '_system_status_flags',
        '_chassis_fault',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'chassis_state': 'uint8',
        'current_motion_mode': 'uint8',
        'motion_mode_switching': 'boolean',
        'brake_active': 'boolean',
        'low_battery': 'boolean',
        'excessive_tilt': 'boolean',
        'manual_charging': 'boolean',
        'dock_charging': 'boolean',
        'main_power_active': 'boolean',
        'obstacle_status_flags': 'uint8',
        'system_status_flags': 'uint32',
        'chassis_fault': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.chassis_state = kwargs.get('chassis_state', int())
        self.current_motion_mode = kwargs.get('current_motion_mode', int())
        self.motion_mode_switching = kwargs.get('motion_mode_switching', bool())
        self.brake_active = kwargs.get('brake_active', bool())
        self.low_battery = kwargs.get('low_battery', bool())
        self.excessive_tilt = kwargs.get('excessive_tilt', bool())
        self.manual_charging = kwargs.get('manual_charging', bool())
        self.dock_charging = kwargs.get('dock_charging', bool())
        self.main_power_active = kwargs.get('main_power_active', bool())
        self.obstacle_status_flags = kwargs.get('obstacle_status_flags', int())
        self.system_status_flags = kwargs.get('system_status_flags', int())
        self.chassis_fault = kwargs.get('chassis_fault', int())

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
        if self.chassis_state != other.chassis_state:
            return False
        if self.current_motion_mode != other.current_motion_mode:
            return False
        if self.motion_mode_switching != other.motion_mode_switching:
            return False
        if self.brake_active != other.brake_active:
            return False
        if self.low_battery != other.low_battery:
            return False
        if self.excessive_tilt != other.excessive_tilt:
            return False
        if self.manual_charging != other.manual_charging:
            return False
        if self.dock_charging != other.dock_charging:
            return False
        if self.main_power_active != other.main_power_active:
            return False
        if self.obstacle_status_flags != other.obstacle_status_flags:
            return False
        if self.system_status_flags != other.system_status_flags:
            return False
        if self.chassis_fault != other.chassis_fault:
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
    def chassis_state(self):
        """Message field 'chassis_state'."""
        return self._chassis_state

    @chassis_state.setter
    def chassis_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chassis_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chassis_state' field must be an unsigned integer in [0, 255]"
        self._chassis_state = value

    @builtins.property
    def current_motion_mode(self):
        """Message field 'current_motion_mode'."""
        return self._current_motion_mode

    @current_motion_mode.setter
    def current_motion_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_motion_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_motion_mode' field must be an unsigned integer in [0, 255]"
        self._current_motion_mode = value

    @builtins.property
    def motion_mode_switching(self):
        """Message field 'motion_mode_switching'."""
        return self._motion_mode_switching

    @motion_mode_switching.setter
    def motion_mode_switching(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'motion_mode_switching' field must be of type 'bool'"
        self._motion_mode_switching = value

    @builtins.property
    def brake_active(self):
        """Message field 'brake_active'."""
        return self._brake_active

    @brake_active.setter
    def brake_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'brake_active' field must be of type 'bool'"
        self._brake_active = value

    @builtins.property
    def low_battery(self):
        """Message field 'low_battery'."""
        return self._low_battery

    @low_battery.setter
    def low_battery(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'low_battery' field must be of type 'bool'"
        self._low_battery = value

    @builtins.property
    def excessive_tilt(self):
        """Message field 'excessive_tilt'."""
        return self._excessive_tilt

    @excessive_tilt.setter
    def excessive_tilt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'excessive_tilt' field must be of type 'bool'"
        self._excessive_tilt = value

    @builtins.property
    def manual_charging(self):
        """Message field 'manual_charging'."""
        return self._manual_charging

    @manual_charging.setter
    def manual_charging(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'manual_charging' field must be of type 'bool'"
        self._manual_charging = value

    @builtins.property
    def dock_charging(self):
        """Message field 'dock_charging'."""
        return self._dock_charging

    @dock_charging.setter
    def dock_charging(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'dock_charging' field must be of type 'bool'"
        self._dock_charging = value

    @builtins.property
    def main_power_active(self):
        """Message field 'main_power_active'."""
        return self._main_power_active

    @main_power_active.setter
    def main_power_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'main_power_active' field must be of type 'bool'"
        self._main_power_active = value

    @builtins.property
    def obstacle_status_flags(self):
        """Message field 'obstacle_status_flags'."""
        return self._obstacle_status_flags

    @obstacle_status_flags.setter
    def obstacle_status_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'obstacle_status_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstacle_status_flags' field must be an unsigned integer in [0, 255]"
        self._obstacle_status_flags = value

    @builtins.property
    def system_status_flags(self):
        """Message field 'system_status_flags'."""
        return self._system_status_flags

    @system_status_flags.setter
    def system_status_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'system_status_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'system_status_flags' field must be an unsigned integer in [0, 4294967295]"
        self._system_status_flags = value

    @builtins.property
    def chassis_fault(self):
        """Message field 'chassis_fault'."""
        return self._chassis_fault

    @chassis_fault.setter
    def chassis_fault(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chassis_fault' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'chassis_fault' field must be an unsigned integer in [0, 4294967295]"
        self._chassis_fault = value
