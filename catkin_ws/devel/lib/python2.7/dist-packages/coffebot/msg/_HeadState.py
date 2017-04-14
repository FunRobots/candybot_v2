# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from coffebot/HeadState.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import coffebot.msg

class HeadState(genpy.Message):
  _md5sum = "c6d209a024aaa61ffa06c3cc12da026d"
  _type = "coffebot/HeadState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """HeadMotion state

================================================================================
MSG: coffebot/HeadMotion
float32 h_angle # 0.0 <= h_angle <= 360.0
float32 v_angle # 0.0 <= v_angle <= 360.0
string emotion
"""
  __slots__ = ['state']
  _slot_types = ['coffebot/HeadMotion']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       state

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HeadState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.state is None:
        self.state = coffebot.msg.HeadMotion()
    else:
      self.state = coffebot.msg.HeadMotion()

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
      buff.write(_get_struct_2f().pack(_x.state.h_angle, _x.state.v_angle))
      _x = self.state.emotion
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.state is None:
        self.state = coffebot.msg.HeadMotion()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.state.h_angle, _x.state.v_angle,) = _get_struct_2f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state.emotion = str[start:end].decode('utf-8')
      else:
        self.state.emotion = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2f().pack(_x.state.h_angle, _x.state.v_angle))
      _x = self.state.emotion
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.state is None:
        self.state = coffebot.msg.HeadMotion()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.state.h_angle, _x.state.v_angle,) = _get_struct_2f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state.emotion = str[start:end].decode('utf-8')
      else:
        self.state.emotion = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
