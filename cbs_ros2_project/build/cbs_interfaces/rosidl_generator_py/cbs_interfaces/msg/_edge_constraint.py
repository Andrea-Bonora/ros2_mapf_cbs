# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cbs_interfaces:msg/EdgeConstraint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EdgeConstraint(type):
    """Metaclass of message 'EdgeConstraint'."""

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
            module = import_type_support('cbs_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cbs_interfaces.msg.EdgeConstraint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__edge_constraint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__edge_constraint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__edge_constraint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__edge_constraint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__edge_constraint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EdgeConstraint(metaclass=Metaclass_EdgeConstraint):
    """Message class 'EdgeConstraint'."""

    __slots__ = [
        '_cell_from_index',
        '_cell_to_index',
        '_time_step',
    ]

    _fields_and_field_types = {
        'cell_from_index': 'int64',
        'cell_to_index': 'int64',
        'time_step': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cell_from_index = kwargs.get('cell_from_index', int())
        self.cell_to_index = kwargs.get('cell_to_index', int())
        self.time_step = kwargs.get('time_step', int())

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
        if self.cell_from_index != other.cell_from_index:
            return False
        if self.cell_to_index != other.cell_to_index:
            return False
        if self.time_step != other.time_step:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cell_from_index(self):
        """Message field 'cell_from_index'."""
        return self._cell_from_index

    @cell_from_index.setter
    def cell_from_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_from_index' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'cell_from_index' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._cell_from_index = value

    @builtins.property
    def cell_to_index(self):
        """Message field 'cell_to_index'."""
        return self._cell_to_index

    @cell_to_index.setter
    def cell_to_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_to_index' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'cell_to_index' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._cell_to_index = value

    @builtins.property
    def time_step(self):
        """Message field 'time_step'."""
        return self._time_step

    @time_step.setter
    def time_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_step' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_step' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_step = value
