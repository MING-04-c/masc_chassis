#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to masc_chassis_msgs__srv__ClearFault_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_id: u16,

}



impl Default for ClearFault_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearFault_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ClearFault_Request {
  type RmwMsg = super::srv::rmw::ClearFault_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fault_id: msg.fault_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      fault_id: msg.fault_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fault_id: msg.fault_id,
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__ClearFault_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ClearFault_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearFault_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ClearFault_Response {
  type RmwMsg = super::srv::rmw::ClearFault_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__CalibrateServo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateServo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servo_id: u16,

}



impl Default for CalibrateServo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrateServo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateServo_Request {
  type RmwMsg = super::srv::rmw::CalibrateServo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servo_id: msg.servo_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      servo_id: msg.servo_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servo_id: msg.servo_id,
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__CalibrateServo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateServo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for CalibrateServo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrateServo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateServo_Response {
  type RmwMsg = super::srv::rmw::CalibrateServo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__SetMotionMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMotionMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_mode: u8,

}

impl SetMotionMode_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_MODE_DEFAULT_CHASSIS: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_MODE_PARK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_MODE_ACKERMANN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_MODE_SPIN: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_MODE_LATERAL: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_MODE_DIAGONAL: u8 = 5;

}


impl Default for SetMotionMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMotionMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMotionMode_Request {
  type RmwMsg = super::srv::rmw::SetMotionMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion_mode: msg.motion_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motion_mode: msg.motion_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion_mode: msg.motion_mode,
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__SetMotionMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMotionMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetMotionMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMotionMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMotionMode_Response {
  type RmwMsg = super::srv::rmw::SetMotionMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__SetTowMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTowMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

}



impl Default for SetTowMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTowMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetTowMode_Request {
  type RmwMsg = super::srv::rmw::SetTowMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
    }
  }
}


// Corresponds to masc_chassis_msgs__srv__SetTowMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTowMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetTowMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTowMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetTowMode_Response {
  type RmwMsg = super::srv::rmw::SetTowMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__ClearFault() -> *const std::ffi::c_void;
}

// Corresponds to masc_chassis_msgs__srv__ClearFault
#[allow(missing_docs, non_camel_case_types)]
pub struct ClearFault;

impl rosidl_runtime_rs::Service for ClearFault {
    type Request = ClearFault_Request;
    type Response = ClearFault_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__ClearFault() }
    }
}




#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__CalibrateServo() -> *const std::ffi::c_void;
}

// Corresponds to masc_chassis_msgs__srv__CalibrateServo
#[allow(missing_docs, non_camel_case_types)]
pub struct CalibrateServo;

impl rosidl_runtime_rs::Service for CalibrateServo {
    type Request = CalibrateServo_Request;
    type Response = CalibrateServo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__CalibrateServo() }
    }
}




#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__SetMotionMode() -> *const std::ffi::c_void;
}

// Corresponds to masc_chassis_msgs__srv__SetMotionMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMotionMode;

impl rosidl_runtime_rs::Service for SetMotionMode {
    type Request = SetMotionMode_Request;
    type Response = SetMotionMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__SetMotionMode() }
    }
}




#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__SetTowMode() -> *const std::ffi::c_void;
}

// Corresponds to masc_chassis_msgs__srv__SetTowMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetTowMode;

impl rosidl_runtime_rs::Service for SetTowMode {
    type Request = SetTowMode_Request;
    type Response = SetTowMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__masc_chassis_msgs__srv__SetTowMode() }
    }
}


