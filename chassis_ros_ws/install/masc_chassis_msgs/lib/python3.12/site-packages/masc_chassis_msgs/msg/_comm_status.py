# generated from rosidl_generator_py/resource/_idl.py.em
# with input from masc_chassis_msgs:msg/CommStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'chassis_uuid'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommStatus(type):
    """Metaclass of message 'CommStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMM_STATE_UNKNOWN': 0,
        'COMM_STATE_DISCONNECTED': 1,
        'COMM_STATE_CONNECTING': 2,
        'COMM_STATE_PROTOCOL_MISMATCH': 3,
        'COMM_STATE_CONNECTED': 4,
        'FAIL_REASON_NONE': 0,
        'FAIL_REASON_PORT_OPEN_FAILED': 1,
        'FAIL_REASON_VERSION_TIMEOUT': 2,
        'FAIL_REASON_PROTOCOL_VERSION_MISMATCH': 3,
        'FAIL_REASON_READ_ERROR': 4,
        'FAIL_REASON_WRITE_ERROR': 5,
        'FAIL_REASON_TRANSPORT_ERROR': 6,
        'FAIL_REASON_UNKNOWN': 255,
        'CHASSIS_TYPE_RESERVED': 0,
        'CHASSIS_TYPE_DIFF_2WD': 1,
        'CHASSIS_TYPE_DIFF_4WD': 2,
        'CHASSIS_TYPE_DIFF_6WD': 3,
        'CHASSIS_TYPE_DIFF_8WD': 4,
        'CHASSIS_TYPE_TRICYCLE_UNSPECIFIED': 32,
        'CHASSIS_TYPE_TRICYCLE_FRONT': 33,
        'CHASSIS_TYPE_TRICYCLE_REAR': 34,
        'CHASSIS_TYPE_ACKERMANN_UNSPECIFIED': 64,
        'CHASSIS_TYPE_ACKERMANN_FRONT': 65,
        'CHASSIS_TYPE_ACKERMANN_REAR': 66,
        'CHASSIS_TYPE_ACKERMANN_FRONT_REAR': 67,
        'CHASSIS_TYPE_AWS_4WS': 97,
        'CHASSIS_TYPE_AWS_6WS': 98,
        'CHASSIS_TYPE_AWS_8WS': 99,
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
                'masc_chassis_msgs.msg.CommStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__comm_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__comm_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__comm_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__comm_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__comm_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMM_STATE_UNKNOWN': cls.__constants['COMM_STATE_UNKNOWN'],
            'COMM_STATE_DISCONNECTED': cls.__constants['COMM_STATE_DISCONNECTED'],
            'COMM_STATE_CONNECTING': cls.__constants['COMM_STATE_CONNECTING'],
            'COMM_STATE_PROTOCOL_MISMATCH': cls.__constants['COMM_STATE_PROTOCOL_MISMATCH'],
            'COMM_STATE_CONNECTED': cls.__constants['COMM_STATE_CONNECTED'],
            'FAIL_REASON_NONE': cls.__constants['FAIL_REASON_NONE'],
            'FAIL_REASON_PORT_OPEN_FAILED': cls.__constants['FAIL_REASON_PORT_OPEN_FAILED'],
            'FAIL_REASON_VERSION_TIMEOUT': cls.__constants['FAIL_REASON_VERSION_TIMEOUT'],
            'FAIL_REASON_PROTOCOL_VERSION_MISMATCH': cls.__constants['FAIL_REASON_PROTOCOL_VERSION_MISMATCH'],
            'FAIL_REASON_READ_ERROR': cls.__constants['FAIL_REASON_READ_ERROR'],
            'FAIL_REASON_WRITE_ERROR': cls.__constants['FAIL_REASON_WRITE_ERROR'],
            'FAIL_REASON_TRANSPORT_ERROR': cls.__constants['FAIL_REASON_TRANSPORT_ERROR'],
            'FAIL_REASON_UNKNOWN': cls.__constants['FAIL_REASON_UNKNOWN'],
            'CHASSIS_TYPE_RESERVED': cls.__constants['CHASSIS_TYPE_RESERVED'],
            'CHASSIS_TYPE_DIFF_2WD': cls.__constants['CHASSIS_TYPE_DIFF_2WD'],
            'CHASSIS_TYPE_DIFF_4WD': cls.__constants['CHASSIS_TYPE_DIFF_4WD'],
            'CHASSIS_TYPE_DIFF_6WD': cls.__constants['CHASSIS_TYPE_DIFF_6WD'],
            'CHASSIS_TYPE_DIFF_8WD': cls.__constants['CHASSIS_TYPE_DIFF_8WD'],
            'CHASSIS_TYPE_TRICYCLE_UNSPECIFIED': cls.__constants['CHASSIS_TYPE_TRICYCLE_UNSPECIFIED'],
            'CHASSIS_TYPE_TRICYCLE_FRONT': cls.__constants['CHASSIS_TYPE_TRICYCLE_FRONT'],
            'CHASSIS_TYPE_TRICYCLE_REAR': cls.__constants['CHASSIS_TYPE_TRICYCLE_REAR'],
            'CHASSIS_TYPE_ACKERMANN_UNSPECIFIED': cls.__constants['CHASSIS_TYPE_ACKERMANN_UNSPECIFIED'],
            'CHASSIS_TYPE_ACKERMANN_FRONT': cls.__constants['CHASSIS_TYPE_ACKERMANN_FRONT'],
            'CHASSIS_TYPE_ACKERMANN_REAR': cls.__constants['CHASSIS_TYPE_ACKERMANN_REAR'],
            'CHASSIS_TYPE_ACKERMANN_FRONT_REAR': cls.__constants['CHASSIS_TYPE_ACKERMANN_FRONT_REAR'],
            'CHASSIS_TYPE_AWS_4WS': cls.__constants['CHASSIS_TYPE_AWS_4WS'],
            'CHASSIS_TYPE_AWS_6WS': cls.__constants['CHASSIS_TYPE_AWS_6WS'],
            'CHASSIS_TYPE_AWS_8WS': cls.__constants['CHASSIS_TYPE_AWS_8WS'],
        }

    @property
    def COMM_STATE_UNKNOWN(self):
        """Message constant 'COMM_STATE_UNKNOWN'."""
        return Metaclass_CommStatus.__constants['COMM_STATE_UNKNOWN']

    @property
    def COMM_STATE_DISCONNECTED(self):
        """Message constant 'COMM_STATE_DISCONNECTED'."""
        return Metaclass_CommStatus.__constants['COMM_STATE_DISCONNECTED']

    @property
    def COMM_STATE_CONNECTING(self):
        """Message constant 'COMM_STATE_CONNECTING'."""
        return Metaclass_CommStatus.__constants['COMM_STATE_CONNECTING']

    @property
    def COMM_STATE_PROTOCOL_MISMATCH(self):
        """Message constant 'COMM_STATE_PROTOCOL_MISMATCH'."""
        return Metaclass_CommStatus.__constants['COMM_STATE_PROTOCOL_MISMATCH']

    @property
    def COMM_STATE_CONNECTED(self):
        """Message constant 'COMM_STATE_CONNECTED'."""
        return Metaclass_CommStatus.__constants['COMM_STATE_CONNECTED']

    @property
    def FAIL_REASON_NONE(self):
        """Message constant 'FAIL_REASON_NONE'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_NONE']

    @property
    def FAIL_REASON_PORT_OPEN_FAILED(self):
        """Message constant 'FAIL_REASON_PORT_OPEN_FAILED'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_PORT_OPEN_FAILED']

    @property
    def FAIL_REASON_VERSION_TIMEOUT(self):
        """Message constant 'FAIL_REASON_VERSION_TIMEOUT'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_VERSION_TIMEOUT']

    @property
    def FAIL_REASON_PROTOCOL_VERSION_MISMATCH(self):
        """Message constant 'FAIL_REASON_PROTOCOL_VERSION_MISMATCH'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_PROTOCOL_VERSION_MISMATCH']

    @property
    def FAIL_REASON_READ_ERROR(self):
        """Message constant 'FAIL_REASON_READ_ERROR'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_READ_ERROR']

    @property
    def FAIL_REASON_WRITE_ERROR(self):
        """Message constant 'FAIL_REASON_WRITE_ERROR'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_WRITE_ERROR']

    @property
    def FAIL_REASON_TRANSPORT_ERROR(self):
        """Message constant 'FAIL_REASON_TRANSPORT_ERROR'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_TRANSPORT_ERROR']

    @property
    def FAIL_REASON_UNKNOWN(self):
        """Message constant 'FAIL_REASON_UNKNOWN'."""
        return Metaclass_CommStatus.__constants['FAIL_REASON_UNKNOWN']

    @property
    def CHASSIS_TYPE_RESERVED(self):
        """Message constant 'CHASSIS_TYPE_RESERVED'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_RESERVED']

    @property
    def CHASSIS_TYPE_DIFF_2WD(self):
        """Message constant 'CHASSIS_TYPE_DIFF_2WD'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_DIFF_2WD']

    @property
    def CHASSIS_TYPE_DIFF_4WD(self):
        """Message constant 'CHASSIS_TYPE_DIFF_4WD'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_DIFF_4WD']

    @property
    def CHASSIS_TYPE_DIFF_6WD(self):
        """Message constant 'CHASSIS_TYPE_DIFF_6WD'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_DIFF_6WD']

    @property
    def CHASSIS_TYPE_DIFF_8WD(self):
        """Message constant 'CHASSIS_TYPE_DIFF_8WD'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_DIFF_8WD']

    @property
    def CHASSIS_TYPE_TRICYCLE_UNSPECIFIED(self):
        """Message constant 'CHASSIS_TYPE_TRICYCLE_UNSPECIFIED'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_TRICYCLE_UNSPECIFIED']

    @property
    def CHASSIS_TYPE_TRICYCLE_FRONT(self):
        """Message constant 'CHASSIS_TYPE_TRICYCLE_FRONT'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_TRICYCLE_FRONT']

    @property
    def CHASSIS_TYPE_TRICYCLE_REAR(self):
        """Message constant 'CHASSIS_TYPE_TRICYCLE_REAR'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_TRICYCLE_REAR']

    @property
    def CHASSIS_TYPE_ACKERMANN_UNSPECIFIED(self):
        """Message constant 'CHASSIS_TYPE_ACKERMANN_UNSPECIFIED'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_ACKERMANN_UNSPECIFIED']

    @property
    def CHASSIS_TYPE_ACKERMANN_FRONT(self):
        """Message constant 'CHASSIS_TYPE_ACKERMANN_FRONT'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_ACKERMANN_FRONT']

    @property
    def CHASSIS_TYPE_ACKERMANN_REAR(self):
        """Message constant 'CHASSIS_TYPE_ACKERMANN_REAR'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_ACKERMANN_REAR']

    @property
    def CHASSIS_TYPE_ACKERMANN_FRONT_REAR(self):
        """Message constant 'CHASSIS_TYPE_ACKERMANN_FRONT_REAR'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_ACKERMANN_FRONT_REAR']

    @property
    def CHASSIS_TYPE_AWS_4WS(self):
        """Message constant 'CHASSIS_TYPE_AWS_4WS'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_AWS_4WS']

    @property
    def CHASSIS_TYPE_AWS_6WS(self):
        """Message constant 'CHASSIS_TYPE_AWS_6WS'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_AWS_6WS']

    @property
    def CHASSIS_TYPE_AWS_8WS(self):
        """Message constant 'CHASSIS_TYPE_AWS_8WS'."""
        return Metaclass_CommStatus.__constants['CHASSIS_TYPE_AWS_8WS']


class CommStatus(metaclass=Metaclass_CommStatus):
    """
    Message class 'CommStatus'.

    Constants:
      COMM_STATE_UNKNOWN
      COMM_STATE_DISCONNECTED
      COMM_STATE_CONNECTING
      COMM_STATE_PROTOCOL_MISMATCH
      COMM_STATE_CONNECTED
      FAIL_REASON_NONE
      FAIL_REASON_PORT_OPEN_FAILED
      FAIL_REASON_VERSION_TIMEOUT
      FAIL_REASON_PROTOCOL_VERSION_MISMATCH
      FAIL_REASON_READ_ERROR
      FAIL_REASON_WRITE_ERROR
      FAIL_REASON_TRANSPORT_ERROR
      FAIL_REASON_UNKNOWN
      CHASSIS_TYPE_RESERVED
      CHASSIS_TYPE_DIFF_2WD
      CHASSIS_TYPE_DIFF_4WD
      CHASSIS_TYPE_DIFF_6WD
      CHASSIS_TYPE_DIFF_8WD
      CHASSIS_TYPE_TRICYCLE_UNSPECIFIED
      CHASSIS_TYPE_TRICYCLE_FRONT
      CHASSIS_TYPE_TRICYCLE_REAR
      CHASSIS_TYPE_ACKERMANN_UNSPECIFIED
      CHASSIS_TYPE_ACKERMANN_FRONT
      CHASSIS_TYPE_ACKERMANN_REAR
      CHASSIS_TYPE_ACKERMANN_FRONT_REAR
      CHASSIS_TYPE_AWS_4WS
      CHASSIS_TYPE_AWS_6WS
      CHASSIS_TYPE_AWS_8WS
    """

    __slots__ = [
        '_header',
        '_comm_state',
        '_fail_reason',
        '_motion_command_timeout_active',
        '_connection_attempt_count',
        '_transport_error_count',
        '_tx_error_count',
        '_rx_error_count',
        '_chassis_uuid',
        '_system_software_hardware_version',
        '_chassis_type_version',
        '_chassis_protocol_version',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'comm_state': 'uint8',
        'fail_reason': 'uint8',
        'motion_command_timeout_active': 'boolean',
        'connection_attempt_count': 'uint64',
        'transport_error_count': 'uint64',
        'tx_error_count': 'uint64',
        'rx_error_count': 'uint64',
        'chassis_uuid': 'uint8[5]',
        'system_software_hardware_version': 'uint8',
        'chassis_type_version': 'uint8',
        'chassis_protocol_version': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.comm_state = kwargs.get('comm_state', int())
        self.fail_reason = kwargs.get('fail_reason', int())
        self.motion_command_timeout_active = kwargs.get('motion_command_timeout_active', bool())
        self.connection_attempt_count = kwargs.get('connection_attempt_count', int())
        self.transport_error_count = kwargs.get('transport_error_count', int())
        self.tx_error_count = kwargs.get('tx_error_count', int())
        self.rx_error_count = kwargs.get('rx_error_count', int())
        if 'chassis_uuid' not in kwargs:
            self.chassis_uuid = numpy.zeros(5, dtype=numpy.uint8)
        else:
            self.chassis_uuid = kwargs.get('chassis_uuid')
        self.system_software_hardware_version = kwargs.get('system_software_hardware_version', int())
        self.chassis_type_version = kwargs.get('chassis_type_version', int())
        self.chassis_protocol_version = kwargs.get('chassis_protocol_version', int())

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
        if self.comm_state != other.comm_state:
            return False
        if self.fail_reason != other.fail_reason:
            return False
        if self.motion_command_timeout_active != other.motion_command_timeout_active:
            return False
        if self.connection_attempt_count != other.connection_attempt_count:
            return False
        if self.transport_error_count != other.transport_error_count:
            return False
        if self.tx_error_count != other.tx_error_count:
            return False
        if self.rx_error_count != other.rx_error_count:
            return False
        if any(self.chassis_uuid != other.chassis_uuid):
            return False
        if self.system_software_hardware_version != other.system_software_hardware_version:
            return False
        if self.chassis_type_version != other.chassis_type_version:
            return False
        if self.chassis_protocol_version != other.chassis_protocol_version:
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
    def comm_state(self):
        """Message field 'comm_state'."""
        return self._comm_state

    @comm_state.setter
    def comm_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'comm_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'comm_state' field must be an unsigned integer in [0, 255]"
        self._comm_state = value

    @builtins.property
    def fail_reason(self):
        """Message field 'fail_reason'."""
        return self._fail_reason

    @fail_reason.setter
    def fail_reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fail_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fail_reason' field must be an unsigned integer in [0, 255]"
        self._fail_reason = value

    @builtins.property
    def motion_command_timeout_active(self):
        """Message field 'motion_command_timeout_active'."""
        return self._motion_command_timeout_active

    @motion_command_timeout_active.setter
    def motion_command_timeout_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'motion_command_timeout_active' field must be of type 'bool'"
        self._motion_command_timeout_active = value

    @builtins.property
    def connection_attempt_count(self):
        """Message field 'connection_attempt_count'."""
        return self._connection_attempt_count

    @connection_attempt_count.setter
    def connection_attempt_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'connection_attempt_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'connection_attempt_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._connection_attempt_count = value

    @builtins.property
    def transport_error_count(self):
        """Message field 'transport_error_count'."""
        return self._transport_error_count

    @transport_error_count.setter
    def transport_error_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'transport_error_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'transport_error_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._transport_error_count = value

    @builtins.property
    def tx_error_count(self):
        """Message field 'tx_error_count'."""
        return self._tx_error_count

    @tx_error_count.setter
    def tx_error_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tx_error_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tx_error_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tx_error_count = value

    @builtins.property
    def rx_error_count(self):
        """Message field 'rx_error_count'."""
        return self._rx_error_count

    @rx_error_count.setter
    def rx_error_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rx_error_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rx_error_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rx_error_count = value

    @builtins.property
    def chassis_uuid(self):
        """Message field 'chassis_uuid'."""
        return self._chassis_uuid

    @chassis_uuid.setter
    def chassis_uuid(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'chassis_uuid' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 5, \
                    "The 'chassis_uuid' numpy.ndarray() must have a size of 5"
                self._chassis_uuid = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'chassis_uuid' field must be a set or sequence with length 5 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._chassis_uuid = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def system_software_hardware_version(self):
        """Message field 'system_software_hardware_version'."""
        return self._system_software_hardware_version

    @system_software_hardware_version.setter
    def system_software_hardware_version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'system_software_hardware_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'system_software_hardware_version' field must be an unsigned integer in [0, 255]"
        self._system_software_hardware_version = value

    @builtins.property
    def chassis_type_version(self):
        """Message field 'chassis_type_version'."""
        return self._chassis_type_version

    @chassis_type_version.setter
    def chassis_type_version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chassis_type_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chassis_type_version' field must be an unsigned integer in [0, 255]"
        self._chassis_type_version = value

    @builtins.property
    def chassis_protocol_version(self):
        """Message field 'chassis_protocol_version'."""
        return self._chassis_protocol_version

    @chassis_protocol_version.setter
    def chassis_protocol_version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chassis_protocol_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chassis_protocol_version' field must be an unsigned integer in [0, 255]"
        self._chassis_protocol_version = value
