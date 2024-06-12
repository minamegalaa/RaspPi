// Auto-generated. Do not edit!

// (in-package ros_remote_pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ImuData {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.rate_roll = null;
      this.rate_pitch = null;
      this.rate_yaw = null;
      this.acc_x = null;
      this.acc_y = null;
      this.acc_z = null;
    }
    else {
      if (initObj.hasOwnProperty('rate_roll')) {
        this.rate_roll = initObj.rate_roll
      }
      else {
        this.rate_roll = 0.0;
      }
      if (initObj.hasOwnProperty('rate_pitch')) {
        this.rate_pitch = initObj.rate_pitch
      }
      else {
        this.rate_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('rate_yaw')) {
        this.rate_yaw = initObj.rate_yaw
      }
      else {
        this.rate_yaw = 0.0;
      }
      if (initObj.hasOwnProperty('acc_x')) {
        this.acc_x = initObj.acc_x
      }
      else {
        this.acc_x = 0.0;
      }
      if (initObj.hasOwnProperty('acc_y')) {
        this.acc_y = initObj.acc_y
      }
      else {
        this.acc_y = 0.0;
      }
      if (initObj.hasOwnProperty('acc_z')) {
        this.acc_z = initObj.acc_z
      }
      else {
        this.acc_z = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ImuData
    // Serialize message field [rate_roll]
    bufferOffset = _serializer.float32(obj.rate_roll, buffer, bufferOffset);
    // Serialize message field [rate_pitch]
    bufferOffset = _serializer.float32(obj.rate_pitch, buffer, bufferOffset);
    // Serialize message field [rate_yaw]
    bufferOffset = _serializer.float32(obj.rate_yaw, buffer, bufferOffset);
    // Serialize message field [acc_x]
    bufferOffset = _serializer.float32(obj.acc_x, buffer, bufferOffset);
    // Serialize message field [acc_y]
    bufferOffset = _serializer.float32(obj.acc_y, buffer, bufferOffset);
    // Serialize message field [acc_z]
    bufferOffset = _serializer.float32(obj.acc_z, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ImuData
    let len;
    let data = new ImuData(null);
    // Deserialize message field [rate_roll]
    data.rate_roll = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rate_pitch]
    data.rate_pitch = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rate_yaw]
    data.rate_yaw = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [acc_x]
    data.acc_x = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [acc_y]
    data.acc_y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [acc_z]
    data.acc_z = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_remote_pkg/ImuData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5c4a64b3cdb846258738687d6bfcd651';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 rate_roll
    float32 rate_pitch
    float32 rate_yaw
    float32 acc_x
    float32 acc_y
    float32 acc_z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ImuData(null);
    if (msg.rate_roll !== undefined) {
      resolved.rate_roll = msg.rate_roll;
    }
    else {
      resolved.rate_roll = 0.0
    }

    if (msg.rate_pitch !== undefined) {
      resolved.rate_pitch = msg.rate_pitch;
    }
    else {
      resolved.rate_pitch = 0.0
    }

    if (msg.rate_yaw !== undefined) {
      resolved.rate_yaw = msg.rate_yaw;
    }
    else {
      resolved.rate_yaw = 0.0
    }

    if (msg.acc_x !== undefined) {
      resolved.acc_x = msg.acc_x;
    }
    else {
      resolved.acc_x = 0.0
    }

    if (msg.acc_y !== undefined) {
      resolved.acc_y = msg.acc_y;
    }
    else {
      resolved.acc_y = 0.0
    }

    if (msg.acc_z !== undefined) {
      resolved.acc_z = msg.acc_z;
    }
    else {
      resolved.acc_z = 0.0
    }

    return resolved;
    }
};

module.exports = ImuData;
