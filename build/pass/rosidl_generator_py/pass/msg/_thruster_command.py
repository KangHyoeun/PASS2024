# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pass:msg/ThrusterCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThrusterCommand(type):
    """Metaclass of message 'ThrusterCommand'."""

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
            module = import_type_support('pass')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pass.msg.ThrusterCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thruster_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thruster_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thruster_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thruster_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thruster_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThrusterCommand(metaclass=Metaclass_ThrusterCommand):
    """Message class 'ThrusterCommand'."""

    __slots__ = [
        '_delta_p',
        '_delta_s',
        '_rps_p',
        '_rps_s',
    ]

    _fields_and_field_types = {
        'delta_p': 'double',
        'delta_s': 'double',
        'rps_p': 'double',
        'rps_s': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.delta_p = kwargs.get('delta_p', float())
        self.delta_s = kwargs.get('delta_s', float())
        self.rps_p = kwargs.get('rps_p', float())
        self.rps_s = kwargs.get('rps_s', float())

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
        if self.delta_p != other.delta_p:
            return False
        if self.delta_s != other.delta_s:
            return False
        if self.rps_p != other.rps_p:
            return False
        if self.rps_s != other.rps_s:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def delta_p(self):
        """Message field 'delta_p'."""
        return self._delta_p

    @delta_p.setter
    def delta_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_p' field must be of type 'float'"
        self._delta_p = value

    @property
    def delta_s(self):
        """Message field 'delta_s'."""
        return self._delta_s

    @delta_s.setter
    def delta_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_s' field must be of type 'float'"
        self._delta_s = value

    @property
    def rps_p(self):
        """Message field 'rps_p'."""
        return self._rps_p

    @rps_p.setter
    def rps_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rps_p' field must be of type 'float'"
        self._rps_p = value

    @property
    def rps_s(self):
        """Message field 'rps_s'."""
        return self._rps_s

    @rps_s.setter
    def rps_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rps_s' field must be of type 'float'"
        self._rps_s = value
