# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mavros_msgs:srv/ParamSetV2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParamSetV2_Request(type):
    """Metaclass of message 'ParamSetV2_Request'."""

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
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.srv.ParamSetV2_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__param_set_v2__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__param_set_v2__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__param_set_v2__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__param_set_v2__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__param_set_v2__request

            from rcl_interfaces.msg import ParameterValue
            if ParameterValue.__class__._TYPE_SUPPORT is None:
                ParameterValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParamSetV2_Request(metaclass=Metaclass_ParamSetV2_Request):
    """Message class 'ParamSetV2_Request'."""

    __slots__ = [
        '_force_set',
        '_param_id',
        '_value',
    ]

    _fields_and_field_types = {
        'force_set': 'boolean',
        'param_id': 'string',
        'value': 'rcl_interfaces/ParameterValue',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'ParameterValue'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.force_set = kwargs.get('force_set', bool())
        self.param_id = kwargs.get('param_id', str())
        from rcl_interfaces.msg import ParameterValue
        self.value = kwargs.get('value', ParameterValue())

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
        if self.force_set != other.force_set:
            return False
        if self.param_id != other.param_id:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def force_set(self):
        """Message field 'force_set'."""
        return self._force_set

    @force_set.setter
    def force_set(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_set' field must be of type 'bool'"
        self._force_set = value

    @property
    def param_id(self):
        """Message field 'param_id'."""
        return self._param_id

    @param_id.setter
    def param_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'param_id' field must be of type 'str'"
        self._param_id = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            from rcl_interfaces.msg import ParameterValue
            assert \
                isinstance(value, ParameterValue), \
                "The 'value' field must be a sub message of type 'ParameterValue'"
        self._value = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ParamSetV2_Response(type):
    """Metaclass of message 'ParamSetV2_Response'."""

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
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.srv.ParamSetV2_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__param_set_v2__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__param_set_v2__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__param_set_v2__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__param_set_v2__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__param_set_v2__response

            from rcl_interfaces.msg import ParameterValue
            if ParameterValue.__class__._TYPE_SUPPORT is None:
                ParameterValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParamSetV2_Response(metaclass=Metaclass_ParamSetV2_Response):
    """Message class 'ParamSetV2_Response'."""

    __slots__ = [
        '_success',
        '_value',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'value': 'rcl_interfaces/ParameterValue',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'ParameterValue'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from rcl_interfaces.msg import ParameterValue
        self.value = kwargs.get('value', ParameterValue())

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
        if self.success != other.success:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            from rcl_interfaces.msg import ParameterValue
            assert \
                isinstance(value, ParameterValue), \
                "The 'value' field must be a sub message of type 'ParameterValue'"
        self._value = value


class Metaclass_ParamSetV2(type):
    """Metaclass of service 'ParamSetV2'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.srv.ParamSetV2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__param_set_v2

            from mavros_msgs.srv import _param_set_v2
            if _param_set_v2.Metaclass_ParamSetV2_Request._TYPE_SUPPORT is None:
                _param_set_v2.Metaclass_ParamSetV2_Request.__import_type_support__()
            if _param_set_v2.Metaclass_ParamSetV2_Response._TYPE_SUPPORT is None:
                _param_set_v2.Metaclass_ParamSetV2_Response.__import_type_support__()


class ParamSetV2(metaclass=Metaclass_ParamSetV2):
    from mavros_msgs.srv._param_set_v2 import ParamSetV2_Request as Request
    from mavros_msgs.srv._param_set_v2 import ParamSetV2_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
