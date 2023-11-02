# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StartGoalPositions_Request(type):
    """Metaclass of message 'StartGoalPositions_Request'."""

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
                'my_intermediate_interfaces.srv.StartGoalPositions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_goal_positions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_goal_positions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_goal_positions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_goal_positions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_goal_positions__request

            from my_intermediate_interfaces.msg import StartGoal
            if StartGoal.__class__._TYPE_SUPPORT is None:
                StartGoal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartGoalPositions_Request(metaclass=Metaclass_StartGoalPositions_Request):
    """Message class 'StartGoalPositions_Request'."""

    __slots__ = [
        '_requests',
    ]

    _fields_and_field_types = {
        'requests': 'sequence<my_intermediate_interfaces/StartGoal>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'msg'], 'StartGoal')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.requests = kwargs.get('requests', [])

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
        if self.requests != other.requests:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def requests(self):
        """Message field 'requests'."""
        return self._requests

    @requests.setter
    def requests(self, value):
        if __debug__:
            from my_intermediate_interfaces.msg import StartGoal
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
                 all(isinstance(v, StartGoal) for v in value) and
                 True), \
                "The 'requests' field must be a set or sequence and each value of type 'StartGoal'"
        self._requests = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StartGoalPositions_Response(type):
    """Metaclass of message 'StartGoalPositions_Response'."""

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
                'my_intermediate_interfaces.srv.StartGoalPositions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_goal_positions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_goal_positions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_goal_positions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_goal_positions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_goal_positions__response

            from my_intermediate_interfaces.msg import AgentPath
            if AgentPath.__class__._TYPE_SUPPORT is None:
                AgentPath.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartGoalPositions_Response(metaclass=Metaclass_StartGoalPositions_Response):
    """Message class 'StartGoalPositions_Response'."""

    __slots__ = [
        '_plans',
    ]

    _fields_and_field_types = {
        'plans': 'sequence<my_intermediate_interfaces/AgentPath>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'msg'], 'AgentPath')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plans = kwargs.get('plans', [])

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
        if self.plans != other.plans:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def plans(self):
        """Message field 'plans'."""
        return self._plans

    @plans.setter
    def plans(self, value):
        if __debug__:
            from my_intermediate_interfaces.msg import AgentPath
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
                 all(isinstance(v, AgentPath) for v in value) and
                 True), \
                "The 'plans' field must be a set or sequence and each value of type 'AgentPath'"
        self._plans = value


class Metaclass_StartGoalPositions(type):
    """Metaclass of service 'StartGoalPositions'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_intermediate_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_intermediate_interfaces.srv.StartGoalPositions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__start_goal_positions

            from my_intermediate_interfaces.srv import _start_goal_positions
            if _start_goal_positions.Metaclass_StartGoalPositions_Request._TYPE_SUPPORT is None:
                _start_goal_positions.Metaclass_StartGoalPositions_Request.__import_type_support__()
            if _start_goal_positions.Metaclass_StartGoalPositions_Response._TYPE_SUPPORT is None:
                _start_goal_positions.Metaclass_StartGoalPositions_Response.__import_type_support__()


class StartGoalPositions(metaclass=Metaclass_StartGoalPositions):
    from my_intermediate_interfaces.srv._start_goal_positions import StartGoalPositions_Request as Request
    from my_intermediate_interfaces.srv._start_goal_positions import StartGoalPositions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
