# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_intermediate_interfaces:srv/ComputedPlans.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputedPlans_Request(type):
    """Metaclass of message 'ComputedPlans_Request'."""

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
                'my_intermediate_interfaces.srv.ComputedPlans_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__computed_plans__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__computed_plans__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__computed_plans__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__computed_plans__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__computed_plans__request

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputedPlans_Request(metaclass=Metaclass_ComputedPlans_Request):
    """Message class 'ComputedPlans_Request'."""

    __slots__ = [
        '_plans',
    ]

    _fields_and_field_types = {
        'plans': 'sequence<nav_msgs/Path>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path')),  # noqa: E501
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
            from nav_msgs.msg import Path
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
                 all(isinstance(v, Path) for v in value) and
                 True), \
                "The 'plans' field must be a set or sequence and each value of type 'Path'"
        self._plans = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputedPlans_Response(type):
    """Metaclass of message 'ComputedPlans_Response'."""

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
                'my_intermediate_interfaces.srv.ComputedPlans_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__computed_plans__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__computed_plans__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__computed_plans__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__computed_plans__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__computed_plans__response

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputedPlans_Response(metaclass=Metaclass_ComputedPlans_Response):
    """Message class 'ComputedPlans_Response'."""

    __slots__ = [
        '_collision_free_plans',
    ]

    _fields_and_field_types = {
        'collision_free_plans': 'sequence<nav_msgs/Path>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.collision_free_plans = kwargs.get('collision_free_plans', [])

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
        if self.collision_free_plans != other.collision_free_plans:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def collision_free_plans(self):
        """Message field 'collision_free_plans'."""
        return self._collision_free_plans

    @collision_free_plans.setter
    def collision_free_plans(self, value):
        if __debug__:
            from nav_msgs.msg import Path
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
                 all(isinstance(v, Path) for v in value) and
                 True), \
                "The 'collision_free_plans' field must be a set or sequence and each value of type 'Path'"
        self._collision_free_plans = value


class Metaclass_ComputedPlans(type):
    """Metaclass of service 'ComputedPlans'."""

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
                'my_intermediate_interfaces.srv.ComputedPlans')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__computed_plans

            from my_intermediate_interfaces.srv import _computed_plans
            if _computed_plans.Metaclass_ComputedPlans_Request._TYPE_SUPPORT is None:
                _computed_plans.Metaclass_ComputedPlans_Request.__import_type_support__()
            if _computed_plans.Metaclass_ComputedPlans_Response._TYPE_SUPPORT is None:
                _computed_plans.Metaclass_ComputedPlans_Response.__import_type_support__()


class ComputedPlans(metaclass=Metaclass_ComputedPlans):
    from my_intermediate_interfaces.srv._computed_plans import ComputedPlans_Request as Request
    from my_intermediate_interfaces.srv._computed_plans import ComputedPlans_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
