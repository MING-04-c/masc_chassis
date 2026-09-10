#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__ClearFault_Request() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__ClearFault_Request__init(msg: *mut ClearFault_Request) -> bool;
    fn masc_chassis_msgs__srv__ClearFault_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearFault_Request>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__ClearFault_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearFault_Request>);
    fn masc_chassis_msgs__srv__ClearFault_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearFault_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearFault_Request>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__ClearFault_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_id: u16,

}



impl Default for ClearFault_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__ClearFault_Request__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__ClearFault_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearFault_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__ClearFault_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__ClearFault_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__ClearFault_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearFault_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearFault_Request where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/ClearFault_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__ClearFault_Request() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__ClearFault_Response() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__ClearFault_Response__init(msg: *mut ClearFault_Response) -> bool;
    fn masc_chassis_msgs__srv__ClearFault_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearFault_Response>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__ClearFault_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearFault_Response>);
    fn masc_chassis_msgs__srv__ClearFault_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearFault_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearFault_Response>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__ClearFault_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ClearFault_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__ClearFault_Response__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__ClearFault_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearFault_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__ClearFault_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__ClearFault_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__ClearFault_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearFault_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearFault_Response where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/ClearFault_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__ClearFault_Response() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__CalibrateServo_Request() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__CalibrateServo_Request__init(msg: *mut CalibrateServo_Request) -> bool;
    fn masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateServo_Request>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateServo_Request>);
    fn masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateServo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateServo_Request>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__CalibrateServo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateServo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servo_id: u16,

}



impl Default for CalibrateServo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__CalibrateServo_Request__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__CalibrateServo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateServo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__CalibrateServo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateServo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateServo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/CalibrateServo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__CalibrateServo_Request() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__CalibrateServo_Response() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__CalibrateServo_Response__init(msg: *mut CalibrateServo_Response) -> bool;
    fn masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateServo_Response>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateServo_Response>);
    fn masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateServo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateServo_Response>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__CalibrateServo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateServo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for CalibrateServo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__CalibrateServo_Response__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__CalibrateServo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateServo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__CalibrateServo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateServo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateServo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/CalibrateServo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__CalibrateServo_Response() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetMotionMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__SetMotionMode_Request__init(msg: *mut SetMotionMode_Request) -> bool;
    fn masc_chassis_msgs__srv__SetMotionMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMotionMode_Request>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__SetMotionMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMotionMode_Request>);
    fn masc_chassis_msgs__srv__SetMotionMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMotionMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMotionMode_Request>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__SetMotionMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__SetMotionMode_Request__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__SetMotionMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMotionMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetMotionMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetMotionMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetMotionMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMotionMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMotionMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/SetMotionMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetMotionMode_Request() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetMotionMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__SetMotionMode_Response__init(msg: *mut SetMotionMode_Response) -> bool;
    fn masc_chassis_msgs__srv__SetMotionMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMotionMode_Response>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__SetMotionMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMotionMode_Response>);
    fn masc_chassis_msgs__srv__SetMotionMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMotionMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMotionMode_Response>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__SetMotionMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMotionMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetMotionMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__SetMotionMode_Response__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__SetMotionMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMotionMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetMotionMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetMotionMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetMotionMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMotionMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMotionMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/SetMotionMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetMotionMode_Response() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetTowMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__SetTowMode_Request__init(msg: *mut SetTowMode_Request) -> bool;
    fn masc_chassis_msgs__srv__SetTowMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTowMode_Request>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__SetTowMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTowMode_Request>);
    fn masc_chassis_msgs__srv__SetTowMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTowMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTowMode_Request>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__SetTowMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTowMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

}



impl Default for SetTowMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__SetTowMode_Request__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__SetTowMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTowMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetTowMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetTowMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetTowMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTowMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTowMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/SetTowMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetTowMode_Request() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetTowMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__srv__SetTowMode_Response__init(msg: *mut SetTowMode_Response) -> bool;
    fn masc_chassis_msgs__srv__SetTowMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTowMode_Response>, size: usize) -> bool;
    fn masc_chassis_msgs__srv__SetTowMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTowMode_Response>);
    fn masc_chassis_msgs__srv__SetTowMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTowMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTowMode_Response>) -> bool;
}

// Corresponds to masc_chassis_msgs__srv__SetTowMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTowMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetTowMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__srv__SetTowMode_Response__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__srv__SetTowMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTowMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetTowMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetTowMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__srv__SetTowMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTowMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTowMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/srv/SetTowMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__srv__SetTowMode_Response() }
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


