# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ros_remote_pkg/ImuData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ImuData(genpy.Message):
  _md5sum = "5c4a64b3cdb846258738687d6bfcd651"
  _type = "ros_remote_pkg/ImuData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 rate_roll
float32 rate_pitch
float32 rate_yaw
float32 acc_x
float32 acc_y
float32 acc_z"""
  __slots__ = ['rate_roll','rate_pitch','rate_yaw','acc_x','acc_y','acc_z']
  _slot_types = ['float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       rate_roll,rate_pitch,rate_yaw,acc_x,acc_y,acc_z

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ImuData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.rate_roll is None:
        self.rate_roll = 0.
      if self.rate_pitch is None:
        self.rate_pitch = 0.
      if self.rate_yaw is None:
        self.rate_yaw = 0.
      if self.acc_x is None:
        self.acc_x = 0.
      if self.acc_y is None:
        self.acc_y = 0.
      if self.acc_z is None:
        self.acc_z = 0.
    else:
      self.rate_roll = 0.
      self.rate_pitch = 0.
      self.rate_yaw = 0.
      self.acc_x = 0.
      self.acc_y = 0.
      self.acc_z = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_6f().pack(_x.rate_roll, _x.rate_pitch, _x.rate_yaw, _x.acc_x, _x.acc_y, _x.acc_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.rate_roll, _x.rate_pitch, _x.rate_yaw, _x.acc_x, _x.acc_y, _x.acc_z,) = _get_struct_6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6f().pack(_x.rate_roll, _x.rate_pitch, _x.rate_yaw, _x.acc_x, _x.acc_y, _x.acc_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.rate_roll, _x.rate_pitch, _x.rate_yaw, _x.acc_x, _x.acc_y, _x.acc_z,) = _get_struct_6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6f = None
def _get_struct_6f():
    global _struct_6f
    if _struct_6f is None:
        _struct_6f = struct.Struct("<6f")
    return _struct_6f
