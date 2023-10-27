# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_intermediate_interfaces:msg/AgentPathRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgentPathRequest(type):
    """Metaclass of message 'AgentPathRequest'."""

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
            module = import_type_support('my_intermediate_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_intermediate_interfaces.msg.AgentPathRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent_path_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent_path_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent_path_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent_path_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent_path_request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from my_intermediate_interfaces.msg import EdgeConstraint
            if EdgeConstraint.__class__._TYPE_SUPPORT is None:
                EdgeConstraint.__class__.__import_type_support__()

            from my_intermediate_interfaces.msg import VertexConstraint
            if VertexConstraint.__class__._TYPE_SUPPORT is None:
                VertexConstraint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AgentPathRequest(metaclass=Metaclass_AgentPathRequest):
    """Message class 'AgentPathRequest'."""

    __slots__ = [
        '_name',
        '_start',
        '_goal',
        '_vertex_constraints',
        '_edge_constraints',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'start': 'geometry_msgs/PoseStamped',
        'goal': 'geometry_msgs/PoseStamped',
        'vertex_constraints': 'sequence<my_intermediate_interfaces/VertexConstraint>',
        'edge_constraints': 'sequence<my_intermediate_interfaces/EdgeConstraint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'msg'], 'VertexConstraint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'msg'], 'EdgeConstraint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from geometry_msgs.msg import PoseStamped
        self.start = kwargs.get('start', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.goal = kwargs.get('goal', PoseStamped())
        self.vertex_constraints = kwargs.get('vertex_constraints', [])
        self.edge_constraints = kwargs.get('edge_constraints', [])

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
        if self.name != other.name:
            return False
        if self.start != other.start:
            return False
        if self.goal != other.goal:
            return False
        if self.vertex_constraints != other.vertex_constraints:
            return False
        if self.edge_constraints != other.edge_constraints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'start' field must be a sub message of type 'PoseStamped'"
        self._start = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'goal' field must be a sub message of type 'PoseStamped'"
        self._goal = value

    @builtins.property
    def vertex_constraints(self):
        """Message field 'vertex_constraints'."""
        return self._vertex_constraints

    @vertex_constraints.setter
    def vertex_constraints(self, value):
        if __debug__:
            from my_intermediate_interfaces.msg import VertexConstraint
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
                 all(isinstance(v, VertexConstraint) for v in value) and
                 True), \
                "The 'vertex_constraints' field must be a set or sequence and each value of type 'VertexConstraint'"
        self._vertex_constraints = value

    @builtins.property
    def edge_constraints(self):
        """Message field 'edge_constraints'."""
        return self._edge_constraints

    @edge_constraints.setter
    def edge_constraints(self, value):
        if __debug__:
            from my_intermediate_interfaces.msg import EdgeConstraint
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
                 all(isinstance(v, EdgeConstraint) for v in value) and
                 True), \
                "The 'edge_constraints' field must be a set or sequence and each value of type 'EdgeConstraint'"
        self._edge_constraints = value
