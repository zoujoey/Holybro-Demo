# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mavros_msgs:msg/ActuatorControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'controls'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorControl(type):
    """Metaclass of message 'ActuatorControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PX4_MIX_FLIGHT_CONTROL': 0,
        'PX4_MIX_FLIGHT_CONTROL_VTOL_ALT': 1,
        'PX4_MIX_PAYLOAD': 2,
        'PX4_MIX_MANUAL_PASSTHROUGH': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.msg.ActuatorControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_control

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PX4_MIX_FLIGHT_CONTROL': cls.__constants['PX4_MIX_FLIGHT_CONTROL'],
            'PX4_MIX_FLIGHT_CONTROL_VTOL_ALT': cls.__constants['PX4_MIX_FLIGHT_CONTROL_VTOL_ALT'],
            'PX4_MIX_PAYLOAD': cls.__constants['PX4_MIX_PAYLOAD'],
            'PX4_MIX_MANUAL_PASSTHROUGH': cls.__constants['PX4_MIX_MANUAL_PASSTHROUGH'],
        }

    @property
    def PX4_MIX_FLIGHT_CONTROL(self):
        """Message constant 'PX4_MIX_FLIGHT_CONTROL'."""
        return Metaclass_ActuatorControl.__constants['PX4_MIX_FLIGHT_CONTROL']

    @property
    def PX4_MIX_FLIGHT_CONTROL_VTOL_ALT(self):
        """Message constant 'PX4_MIX_FLIGHT_CONTROL_VTOL_ALT'."""
        return Metaclass_ActuatorControl.__constants['PX4_MIX_FLIGHT_CONTROL_VTOL_ALT']

    @property
    def PX4_MIX_PAYLOAD(self):
        """Message constant 'PX4_MIX_PAYLOAD'."""
        return Metaclass_ActuatorControl.__constants['PX4_MIX_PAYLOAD']

    @property
    def PX4_MIX_MANUAL_PASSTHROUGH(self):
        """Message constant 'PX4_MIX_MANUAL_PASSTHROUGH'."""
        return Metaclass_ActuatorControl.__constants['PX4_MIX_MANUAL_PASSTHROUGH']


class ActuatorControl(metaclass=Metaclass_ActuatorControl):
    """
    Message class 'ActuatorControl'.

    Constants:
      PX4_MIX_FLIGHT_CONTROL
      PX4_MIX_FLIGHT_CONTROL_VTOL_ALT
      PX4_MIX_PAYLOAD
      PX4_MIX_MANUAL_PASSTHROUGH
    """

    __slots__ = [
        '_header',
        '_group_mix',
        '_controls',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'group_mix': 'uint8',
        'controls': 'float[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.group_mix = kwargs.get('group_mix', int())
        if 'controls' not in kwargs:
            self.controls = numpy.zeros(8, dtype=numpy.float32)
        else:
            self.controls = numpy.array(kwargs.get('controls'), dtype=numpy.float32)
            assert self.controls.shape == (8, )

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
        if self.header != other.header:
            return False
        if self.group_mix != other.group_mix:
            return False
        if all(self.controls != other.controls):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def group_mix(self):
        """Message field 'group_mix'."""
        return self._group_mix

    @group_mix.setter
    def group_mix(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_mix' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'group_mix' field must be an unsigned integer in [0, 255]"
        self._group_mix = value

    @property
    def controls(self):
        """Message field 'controls'."""
        return self._controls

    @controls.setter
    def controls(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'controls' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 8, \
                "The 'controls' numpy.ndarray() must have a size of 8"
            self._controls = value
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
                 len(value) == 8 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'controls' field must be a set or sequence with length 8 and each value of type 'float'"
        self._controls = numpy.array(value, dtype=numpy.float32)
