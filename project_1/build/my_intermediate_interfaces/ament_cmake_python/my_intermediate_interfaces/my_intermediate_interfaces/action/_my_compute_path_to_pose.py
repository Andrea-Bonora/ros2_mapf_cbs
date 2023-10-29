# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_intermediate_interfaces:action/MyComputePathToPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MyComputePathToPose_Goal(type):
    """Metaclass of message 'MyComputePathToPose_Goal'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__goal

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


class MyComputePathToPose_Goal(metaclass=Metaclass_MyComputePathToPose_Goal):
    """Message class 'MyComputePathToPose_Goal'."""

    __slots__ = [
        '_goal',
        '_start',
        '_vertex_constraints',
        '_edge_constraints',
        '_planner_id',
        '_use_start',
    ]

    _fields_and_field_types = {
        'goal': 'geometry_msgs/PoseStamped',
        'start': 'geometry_msgs/PoseStamped',
        'vertex_constraints': 'sequence<my_intermediate_interfaces/VertexConstraint>',
        'edge_constraints': 'sequence<my_intermediate_interfaces/EdgeConstraint>',
        'planner_id': 'string',
        'use_start': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'msg'], 'VertexConstraint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'msg'], 'EdgeConstraint')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.goal = kwargs.get('goal', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.start = kwargs.get('start', PoseStamped())
        self.vertex_constraints = kwargs.get('vertex_constraints', [])
        self.edge_constraints = kwargs.get('edge_constraints', [])
        self.planner_id = kwargs.get('planner_id', str())
        self.use_start = kwargs.get('use_start', bool())

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
        if self.goal != other.goal:
            return False
        if self.start != other.start:
            return False
        if self.vertex_constraints != other.vertex_constraints:
            return False
        if self.edge_constraints != other.edge_constraints:
            return False
        if self.planner_id != other.planner_id:
            return False
        if self.use_start != other.use_start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def planner_id(self):
        """Message field 'planner_id'."""
        return self._planner_id

    @planner_id.setter
    def planner_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner_id' field must be of type 'str'"
        self._planner_id = value

    @builtins.property
    def use_start(self):
        """Message field 'use_start'."""
        return self._use_start

    @use_start.setter
    def use_start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_start' field must be of type 'bool'"
        self._use_start = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_Result(type):
    """Metaclass of message 'MyComputePathToPose_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'UNKNOWN': 200,
        'INVALID_PLANNER': 201,
        'TF_ERROR': 202,
        'START_OUTSIDE_MAP': 203,
        'GOAL_OUTSIDE_MAP': 204,
        'START_OCCUPIED': 205,
        'GOAL_OCCUPIED': 206,
        'TIMEOUT': 207,
        'NO_VALID_PATH': 208,
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
                'my_intermediate_interfaces.action.MyComputePathToPose_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__result

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'INVALID_PLANNER': cls.__constants['INVALID_PLANNER'],
            'TF_ERROR': cls.__constants['TF_ERROR'],
            'START_OUTSIDE_MAP': cls.__constants['START_OUTSIDE_MAP'],
            'GOAL_OUTSIDE_MAP': cls.__constants['GOAL_OUTSIDE_MAP'],
            'START_OCCUPIED': cls.__constants['START_OCCUPIED'],
            'GOAL_OCCUPIED': cls.__constants['GOAL_OCCUPIED'],
            'TIMEOUT': cls.__constants['TIMEOUT'],
            'NO_VALID_PATH': cls.__constants['NO_VALID_PATH'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_MyComputePathToPose_Result.__constants['NONE']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MyComputePathToPose_Result.__constants['UNKNOWN']

    @property
    def INVALID_PLANNER(self):
        """Message constant 'INVALID_PLANNER'."""
        return Metaclass_MyComputePathToPose_Result.__constants['INVALID_PLANNER']

    @property
    def TF_ERROR(self):
        """Message constant 'TF_ERROR'."""
        return Metaclass_MyComputePathToPose_Result.__constants['TF_ERROR']

    @property
    def START_OUTSIDE_MAP(self):
        """Message constant 'START_OUTSIDE_MAP'."""
        return Metaclass_MyComputePathToPose_Result.__constants['START_OUTSIDE_MAP']

    @property
    def GOAL_OUTSIDE_MAP(self):
        """Message constant 'GOAL_OUTSIDE_MAP'."""
        return Metaclass_MyComputePathToPose_Result.__constants['GOAL_OUTSIDE_MAP']

    @property
    def START_OCCUPIED(self):
        """Message constant 'START_OCCUPIED'."""
        return Metaclass_MyComputePathToPose_Result.__constants['START_OCCUPIED']

    @property
    def GOAL_OCCUPIED(self):
        """Message constant 'GOAL_OCCUPIED'."""
        return Metaclass_MyComputePathToPose_Result.__constants['GOAL_OCCUPIED']

    @property
    def TIMEOUT(self):
        """Message constant 'TIMEOUT'."""
        return Metaclass_MyComputePathToPose_Result.__constants['TIMEOUT']

    @property
    def NO_VALID_PATH(self):
        """Message constant 'NO_VALID_PATH'."""
        return Metaclass_MyComputePathToPose_Result.__constants['NO_VALID_PATH']


class MyComputePathToPose_Result(metaclass=Metaclass_MyComputePathToPose_Result):
    """
    Message class 'MyComputePathToPose_Result'.

    Constants:
      NONE
      UNKNOWN
      INVALID_PLANNER
      TF_ERROR
      START_OUTSIDE_MAP
      GOAL_OUTSIDE_MAP
      START_OCCUPIED
      GOAL_OCCUPIED
      TIMEOUT
      NO_VALID_PATH
    """

    __slots__ = [
        '_path',
        '_planning_time',
        '_error_code',
    ]

    _fields_and_field_types = {
        'path': 'nav_msgs/Path',
        'planning_time': 'builtin_interfaces/Duration',
        'error_code': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Path
        self.path = kwargs.get('path', Path())
        from builtin_interfaces.msg import Duration
        self.planning_time = kwargs.get('planning_time', Duration())
        self.error_code = kwargs.get('error_code', int())

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
        if self.path != other.path:
            return False
        if self.planning_time != other.planning_time:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'path' field must be a sub message of type 'Path'"
        self._path = value

    @builtins.property
    def planning_time(self):
        """Message field 'planning_time'."""
        return self._planning_time

    @planning_time.setter
    def planning_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'planning_time' field must be a sub message of type 'Duration'"
        self._planning_time = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_code' field must be an unsigned integer in [0, 65535]"
        self._error_code = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_Feedback(type):
    """Metaclass of message 'MyComputePathToPose_Feedback'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyComputePathToPose_Feedback(metaclass=Metaclass_MyComputePathToPose_Feedback):
    """Message class 'MyComputePathToPose_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_SendGoal_Request(type):
    """Metaclass of message 'MyComputePathToPose_SendGoal_Request'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__send_goal__request

            from my_intermediate_interfaces.action import MyComputePathToPose
            if MyComputePathToPose.Goal.__class__._TYPE_SUPPORT is None:
                MyComputePathToPose.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyComputePathToPose_SendGoal_Request(metaclass=Metaclass_MyComputePathToPose_SendGoal_Request):
    """Message class 'MyComputePathToPose_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'my_intermediate_interfaces/MyComputePathToPose_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'action'], 'MyComputePathToPose_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Goal
        self.goal = kwargs.get('goal', MyComputePathToPose_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Goal
            assert \
                isinstance(value, MyComputePathToPose_Goal), \
                "The 'goal' field must be a sub message of type 'MyComputePathToPose_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_SendGoal_Response(type):
    """Metaclass of message 'MyComputePathToPose_SendGoal_Response'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyComputePathToPose_SendGoal_Response(metaclass=Metaclass_MyComputePathToPose_SendGoal_Response):
    """Message class 'MyComputePathToPose_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_MyComputePathToPose_SendGoal(type):
    """Metaclass of service 'MyComputePathToPose_SendGoal'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__my_compute_path_to_pose__send_goal

            from my_intermediate_interfaces.action import _my_compute_path_to_pose
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_SendGoal_Request._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_SendGoal_Request.__import_type_support__()
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_SendGoal_Response._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_SendGoal_Response.__import_type_support__()


class MyComputePathToPose_SendGoal(metaclass=Metaclass_MyComputePathToPose_SendGoal):
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_SendGoal_Request as Request
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_GetResult_Request(type):
    """Metaclass of message 'MyComputePathToPose_GetResult_Request'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyComputePathToPose_GetResult_Request(metaclass=Metaclass_MyComputePathToPose_GetResult_Request):
    """Message class 'MyComputePathToPose_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_GetResult_Response(type):
    """Metaclass of message 'MyComputePathToPose_GetResult_Response'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__get_result__response

            from my_intermediate_interfaces.action import MyComputePathToPose
            if MyComputePathToPose.Result.__class__._TYPE_SUPPORT is None:
                MyComputePathToPose.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyComputePathToPose_GetResult_Response(metaclass=Metaclass_MyComputePathToPose_GetResult_Response):
    """Message class 'MyComputePathToPose_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'my_intermediate_interfaces/MyComputePathToPose_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'action'], 'MyComputePathToPose_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Result
        self.result = kwargs.get('result', MyComputePathToPose_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Result
            assert \
                isinstance(value, MyComputePathToPose_Result), \
                "The 'result' field must be a sub message of type 'MyComputePathToPose_Result'"
        self._result = value


class Metaclass_MyComputePathToPose_GetResult(type):
    """Metaclass of service 'MyComputePathToPose_GetResult'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__my_compute_path_to_pose__get_result

            from my_intermediate_interfaces.action import _my_compute_path_to_pose
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_GetResult_Request._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_GetResult_Request.__import_type_support__()
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_GetResult_Response._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_GetResult_Response.__import_type_support__()


class MyComputePathToPose_GetResult(metaclass=Metaclass_MyComputePathToPose_GetResult):
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_GetResult_Request as Request
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MyComputePathToPose_FeedbackMessage(type):
    """Metaclass of message 'MyComputePathToPose_FeedbackMessage'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__my_compute_path_to_pose__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__my_compute_path_to_pose__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__my_compute_path_to_pose__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__my_compute_path_to_pose__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__my_compute_path_to_pose__feedback_message

            from my_intermediate_interfaces.action import MyComputePathToPose
            if MyComputePathToPose.Feedback.__class__._TYPE_SUPPORT is None:
                MyComputePathToPose.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyComputePathToPose_FeedbackMessage(metaclass=Metaclass_MyComputePathToPose_FeedbackMessage):
    """Message class 'MyComputePathToPose_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'my_intermediate_interfaces/MyComputePathToPose_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_intermediate_interfaces', 'action'], 'MyComputePathToPose_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Feedback
        self.feedback = kwargs.get('feedback', MyComputePathToPose_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Feedback
            assert \
                isinstance(value, MyComputePathToPose_Feedback), \
                "The 'feedback' field must be a sub message of type 'MyComputePathToPose_Feedback'"
        self._feedback = value


class Metaclass_MyComputePathToPose(type):
    """Metaclass of action 'MyComputePathToPose'."""

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
                'my_intermediate_interfaces.action.MyComputePathToPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__my_compute_path_to_pose

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from my_intermediate_interfaces.action import _my_compute_path_to_pose
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_SendGoal._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_SendGoal.__import_type_support__()
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_GetResult._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_GetResult.__import_type_support__()
            if _my_compute_path_to_pose.Metaclass_MyComputePathToPose_FeedbackMessage._TYPE_SUPPORT is None:
                _my_compute_path_to_pose.Metaclass_MyComputePathToPose_FeedbackMessage.__import_type_support__()


class MyComputePathToPose(metaclass=Metaclass_MyComputePathToPose):

    # The goal message defined in the action definition.
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Goal as Goal
    # The result message defined in the action definition.
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Result as Result
    # The feedback message defined in the action definition.
    from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from my_intermediate_interfaces.action._my_compute_path_to_pose import MyComputePathToPose_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
