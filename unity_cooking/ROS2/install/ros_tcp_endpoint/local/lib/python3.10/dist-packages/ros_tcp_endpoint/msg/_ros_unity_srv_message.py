# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'payload'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosUnitySrvMessage(type):
    """Metaclass of message 'RosUnitySrvMessage'."""

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
            module = import_type_support('ros_tcp_endpoint')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_tcp_endpoint.msg.RosUnitySrvMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ros_unity_srv_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ros_unity_srv_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ros_unity_srv_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ros_unity_srv_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ros_unity_srv_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosUnitySrvMessage(metaclass=Metaclass_RosUnitySrvMessage):
    """Message class 'RosUnitySrvMessage'."""

    __slots__ = [
        '_srv_id',
        '_is_request',
        '_topic',
        '_payload',
    ]

    _fields_and_field_types = {
        'srv_id': 'int32',
        'is_request': 'boolean',
        'topic': 'string',
        'payload': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.srv_id = kwargs.get('srv_id', int())
        self.is_request = kwargs.get('is_request', bool())
        self.topic = kwargs.get('topic', str())
        self.payload = array.array('B', kwargs.get('payload', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.srv_id != other.srv_id:
            return False
        if self.is_request != other.is_request:
            return False
        if self.topic != other.topic:
            return False
        if self.payload != other.payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def srv_id(self):
        """Message field 'srv_id'."""
        return self._srv_id

    @srv_id.setter
    def srv_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'srv_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'srv_id' field must be an integer in [-2147483648, 2147483647]"
        self._srv_id = value

    @builtins.property
    def is_request(self):
        """Message field 'is_request'."""
        return self._is_request

    @is_request.setter
    def is_request(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_request' field must be of type 'bool'"
        self._is_request = value

    @builtins.property
    def topic(self):
        """Message field 'topic'."""
        return self._topic

    @topic.setter
    def topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic' field must be of type 'str'"
        self._topic = value

    @builtins.property
    def payload(self):
        """Message field 'payload'."""
        return self._payload

    @payload.setter
    def payload(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'payload' array.array() must have the type code of 'B'"
            self._payload = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'payload' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._payload = array.array('B', value)
