# generated from rosidl_generator_py/resource/_idl.py.em
# with input from masc_chassis_msgs:srv/SetMotionMode.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMotionMode_Request(type):
    """Metaclass of message 'SetMotionMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'masc_chassis_msgs.srv.SetMotionMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motion_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motion_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motion_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motion_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motion_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MOTION_MODE_DEFAULT_CHASSIS': cls.__constants['MOTION_MODE_DEFAULT_CHASSIS'],
            'MOTION_MODE_PARK': cls.__constants['MOTION_MODE_PARK'],
            'MOTION_MODE_ACKERMANN': cls.__constants['MOTION_MODE_ACKERMANN'],
            'MOTION_MODE_SPIN': cls.__constants['MOTION_MODE_SPIN'],
            'MOTION_MODE_LATERAL': cls.__constants['MOTION_MODE_LATERAL'],
            'MOTION_MODE_DIAGONAL': cls.__constants['MOTION_MODE_DIAGONAL'],
        }

    @property
    def MOTION_MODE_DEFAULT_CHASSIS(self):
        """Message constant 'MOTION_MODE_DEFAULT_CHASSIS'."""
        return Metaclass_SetMotionMode_Request.__constants['MOTION_MODE_DEFAULT_CHASSIS']

    @property
    def MOTION_MODE_PARK(self):
        """Message constant 'MOTION_MODE_PARK'."""
        return Metaclass_SetMotionMode_Request.__constants['MOTION_MODE_PARK']

    @property
    def MOTION_MODE_ACKERMANN(self):
        """Message constant 'MOTION_MODE_ACKERMANN'."""
        return Metaclass_SetMotionMode_Request.__constants['MOTION_MODE_ACKERMANN']

    @property
    def MOTION_MODE_SPIN(self):
        """Message constant 'MOTION_MODE_SPIN'."""
        return Metaclass_SetMotionMode_Request.__constants['MOTION_MODE_SPIN']

    @property
    def MOTION_MODE_LATERAL(self):
        """Message constant 'MOTION_MODE_LATERAL'."""
        return Metaclass_SetMotionMode_Request.__constants['MOTION_MODE_LATERAL']

    @property
    def MOTION_MODE_DIAGONAL(self):
        """Message constant 'MOTION_MODE_DIAGONAL'."""
        return Metaclass_SetMotionMode_Request.__constants['MOTION_MODE_DIAGONAL']


class SetMotionMode_Request(metaclass=Metaclass_SetMotionMode_Request):
    """
    Message class 'SetMotionMode_Request'.

    Constants:
      MOTION_MODE_DEFAULT_CHASSIS
      MOTION_MODE_PARK
      MOTION_MODE_ACKERMANN
      MOTION_MODE_SPIN
      MOTION_MODE_LATERAL
      MOTION_MODE_DIAGONAL
    """

    __slots__ = [
        '_motion_mode',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'motion_mode': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        self.motion_mode = kwargs.get('motion_mode', int())

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
        if self.motion_mode != other.motion_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion_mode(self):
        """Message field 'motion_mode'."""
        return self._motion_mode

    @motion_mode.setter
    def motion_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motion_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_mode' field must be an unsigned integer in [0, 255]"
        self._motion_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMotionMode_Response(type):
    """Metaclass of message 'SetMotionMode_Response'."""

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
                'masc_chassis_msgs.srv.SetMotionMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motion_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motion_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motion_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motion_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motion_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotionMode_Response(metaclass=Metaclass_SetMotionMode_Response):
    """Message class 'SetMotionMode_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMotionMode_Event(type):
    """Metaclass of message 'SetMotionMode_Event'."""

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
                'masc_chassis_msgs.srv.SetMotionMode_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motion_mode__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motion_mode__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motion_mode__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motion_mode__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motion_mode__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotionMode_Event(metaclass=Metaclass_SetMotionMode_Event):
    """Message class 'SetMotionMode_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<masc_chassis_msgs/SetMotionMode_Request, 1>',
        'response': 'sequence<masc_chassis_msgs/SetMotionMode_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['masc_chassis_msgs', 'srv'], 'SetMotionMode_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['masc_chassis_msgs', 'srv'], 'SetMotionMode_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from masc_chassis_msgs.srv import SetMotionMode_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SetMotionMode_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetMotionMode_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from masc_chassis_msgs.srv import SetMotionMode_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SetMotionMode_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetMotionMode_Response'"
        self._response = value


class Metaclass_SetMotionMode(type):
    """Metaclass of service 'SetMotionMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('masc_chassis_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'masc_chassis_msgs.srv.SetMotionMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_motion_mode

            from masc_chassis_msgs.srv import _set_motion_mode
            if _set_motion_mode.Metaclass_SetMotionMode_Request._TYPE_SUPPORT is None:
                _set_motion_mode.Metaclass_SetMotionMode_Request.__import_type_support__()
            if _set_motion_mode.Metaclass_SetMotionMode_Response._TYPE_SUPPORT is None:
                _set_motion_mode.Metaclass_SetMotionMode_Response.__import_type_support__()
            if _set_motion_mode.Metaclass_SetMotionMode_Event._TYPE_SUPPORT is None:
                _set_motion_mode.Metaclass_SetMotionMode_Event.__import_type_support__()


class SetMotionMode(metaclass=Metaclass_SetMotionMode):
    from masc_chassis_msgs.srv._set_motion_mode import SetMotionMode_Request as Request
    from masc_chassis_msgs.srv._set_motion_mode import SetMotionMode_Response as Response
    from masc_chassis_msgs.srv._set_motion_mode import SetMotionMode_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
