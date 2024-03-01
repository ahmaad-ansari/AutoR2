# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:srv/SetWaypointRoute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetWaypointRoute_Request(type):
    """Metaclass of message 'SetWaypointRoute_Request'."""

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
            module = import_type_support('tier4_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_planning_msgs.srv.SetWaypointRoute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_waypoint_route__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_waypoint_route__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_waypoint_route__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_waypoint_route__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_waypoint_route__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

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


class SetWaypointRoute_Request(metaclass=Metaclass_SetWaypointRoute_Request):
    """Message class 'SetWaypointRoute_Request'."""

    __slots__ = [
        '_header',
        '_goal_pose',
        '_waypoints',
        '_uuid',
        '_allow_modification',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'goal_pose': 'geometry_msgs/Pose',
        'waypoints': 'sequence<geometry_msgs/Pose>',
        'uuid': 'unique_identifier_msgs/UUID',
        'allow_modification': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.goal_pose = kwargs.get('goal_pose', Pose())
        self.waypoints = kwargs.get('waypoints', [])
        from unique_identifier_msgs.msg import UUID
        self.uuid = kwargs.get('uuid', UUID())
        self.allow_modification = kwargs.get('allow_modification', bool())

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
        if self.goal_pose != other.goal_pose:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.uuid != other.uuid:
            return False
        if self.allow_modification != other.allow_modification:
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
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'goal_pose' field must be a sub message of type 'Pose'"
        self._goal_pose = value

    @property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Pose'"
        self._waypoints = value

    @property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'uuid' field must be a sub message of type 'UUID'"
        self._uuid = value

    @property
    def allow_modification(self):
        """Message field 'allow_modification'."""
        return self._allow_modification

    @allow_modification.setter
    def allow_modification(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_modification' field must be of type 'bool'"
        self._allow_modification = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetWaypointRoute_Response(type):
    """Metaclass of message 'SetWaypointRoute_Response'."""

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
            module = import_type_support('tier4_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_planning_msgs.srv.SetWaypointRoute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_waypoint_route__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_waypoint_route__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_waypoint_route__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_waypoint_route__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_waypoint_route__response

            from autoware_common_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetWaypointRoute_Response(metaclass=Metaclass_SetWaypointRoute_Response):
    """Message class 'SetWaypointRoute_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'autoware_common_msgs/ResponseStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_common_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_common_msgs.msg import ResponseStatus
        self.status = kwargs.get('status', ResponseStatus())

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from autoware_common_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value


class Metaclass_SetWaypointRoute(type):
    """Metaclass of service 'SetWaypointRoute'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_planning_msgs.srv.SetWaypointRoute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_waypoint_route

            from tier4_planning_msgs.srv import _set_waypoint_route
            if _set_waypoint_route.Metaclass_SetWaypointRoute_Request._TYPE_SUPPORT is None:
                _set_waypoint_route.Metaclass_SetWaypointRoute_Request.__import_type_support__()
            if _set_waypoint_route.Metaclass_SetWaypointRoute_Response._TYPE_SUPPORT is None:
                _set_waypoint_route.Metaclass_SetWaypointRoute_Response.__import_type_support__()


class SetWaypointRoute(metaclass=Metaclass_SetWaypointRoute):
    from tier4_planning_msgs.srv._set_waypoint_route import SetWaypointRoute_Request as Request
    from tier4_planning_msgs.srv._set_waypoint_route import SetWaypointRoute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
