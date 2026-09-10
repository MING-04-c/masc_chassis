#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__BmsStatus() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__BmsStatus__init(msg: *mut BmsStatus) -> bool;
    fn masc_chassis_msgs__msg__BmsStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BmsStatus>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__BmsStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BmsStatus>);
    fn masc_chassis_msgs__msg__BmsStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BmsStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<BmsStatus>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__BmsStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Unified BMS / power-system status.
/// Msg Name: BmsStatus

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BmsStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：%，电池剩余电量，范围 0-100
    pub bat_soc: u8,

    /// 单位：%，电池健康度，范围 0-100
    pub bat_soh: u8,

    /// 单位：V，电池电压
    pub bat_voltage: f64,

    /// 单位：A，电池电流，放电可为负值
    pub bat_current: f64,

    /// 单位：V，电池满电电压/电源系统允许最大电压
    pub bat_max_voltage: f64,

    /// 单位：A，电源系统允许最大电流
    pub bat_max_current: f64,

    /// 单位：degC，电池最高温度
    pub bat_temp_max: f64,

    /// 单位：degC，电池最低温度
    pub bat_temp_min: f64,

    /// 单位：无，BMS 健康状态，见 BMS_HEALTH_* 常量
    pub bms_health: u8,

    /// 单位：次，电池循环次数
    pub bms_cycle_count: u16,

}

impl BmsStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_TIMEOUT: u8 = 255;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_GOOD: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_OVERHEAT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_DEAD: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_OVERVOLTAGE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_UNSPEC_FAILURE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_COLD: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_WATCHDOG_TIMER_EXPIRE: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BMS_HEALTH_SAFETY_TIMER_EXPIRE: u8 = 8;

}


impl Default for BmsStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__BmsStatus__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__BmsStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BmsStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__BmsStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__BmsStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__BmsStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BmsStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BmsStatus where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/BmsStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__BmsStatus() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__CanFrameStats() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__CanFrameStats__init(msg: *mut CanFrameStats) -> bool;
    fn masc_chassis_msgs__msg__CanFrameStats__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CanFrameStats>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__CanFrameStats__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CanFrameStats>);
    fn masc_chassis_msgs__msg__CanFrameStats__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CanFrameStats>, out_seq: *mut rosidl_runtime_rs::Sequence<CanFrameStats>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__CanFrameStats
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Receive and parse statistics for one CAN ID.
/// Msg Name: CanFrameStats

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrameStats {
    /// 单位：无，CAN ID，格式示例：0x200
    pub can_id: rosidl_runtime_rs::String,

    /// 单位：帧，接收成功次数
    pub rx_count: u64,

    /// 单位：帧，解析失败次数
    pub parse_error_count: u64,

    /// 单位：帧，丢弃次数
    pub drop_count: u64,

    /// 单位：Hz，低通平滑后的接收频率
    pub frequency: f64,

    /// 单位：ms，距离最后一次收到该 CAN ID 的时间；rx_count 为 0 时填 0
    pub last_rx_age_ms: u64,

}



impl Default for CanFrameStats {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__CanFrameStats__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__CanFrameStats__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CanFrameStats {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CanFrameStats__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CanFrameStats__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CanFrameStats__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CanFrameStats {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CanFrameStats where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/CanFrameStats";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__CanFrameStats() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__CanFrameStatsArray() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__CanFrameStatsArray__init(msg: *mut CanFrameStatsArray) -> bool;
    fn masc_chassis_msgs__msg__CanFrameStatsArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CanFrameStatsArray>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__CanFrameStatsArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CanFrameStatsArray>);
    fn masc_chassis_msgs__msg__CanFrameStatsArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CanFrameStatsArray>, out_seq: *mut rosidl_runtime_rs::Sequence<CanFrameStatsArray>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__CanFrameStatsArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Receive and parse statistics for all tracked CAN IDs.
/// Msg Name: CanFrameStatsArray

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrameStatsArray {
    /// 单位：无，本组 CAN 统计信息的发布时间
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stats: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CanFrameStats>,

}



impl Default for CanFrameStatsArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__CanFrameStatsArray__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__CanFrameStatsArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CanFrameStatsArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CanFrameStatsArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CanFrameStatsArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CanFrameStatsArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CanFrameStatsArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CanFrameStatsArray where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/CanFrameStatsArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__CanFrameStatsArray() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ChassisStatus() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__ChassisStatus__init(msg: *mut ChassisStatus) -> bool;
    fn masc_chassis_msgs__msg__ChassisStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisStatus>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__ChassisStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisStatus>);
    fn masc_chassis_msgs__msg__ChassisStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisStatus>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__ChassisStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Chassis runtime status from motion mode and system info feedback.
/// Msg Name: ChassisStatus

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，底盘显示状态，见 CHASSIS_STATE_* 常量
    pub chassis_state: u8,

    /// 单位：无，当前底盘运动模式，见 MOTION_MODE_* 常量
    pub current_motion_mode: u8,

    /// 单位：无，是否处于运动模式切换中
    pub motion_mode_switching: bool,

    /// 单位：无，抱闸是否激活
    pub brake_active: bool,

    /// 单位：无，是否低电量
    pub low_battery: bool,

    /// 单位：无，是否倾角过大
    pub excessive_tilt: bool,

    /// 单位：无，是否手动充电
    pub manual_charging: bool,

    /// 单位：无，是否充电桩充电
    pub dock_charging: bool,

    /// 单位：无，动力电源是否接通，来自主接触器状态
    pub main_power_active: bool,

    /// 单位：无，障碍状态 flags，bit0 前，bit1 后，bit2 左前，bit3 左后，bit4 右前，bit5 右后
    pub obstacle_status_flags: u8,

    /// 单位：无，0x204 Byte0-Byte3 原始状态值，Byte0 主状态，Byte1 系统 flags，Byte2 障碍 flags，Byte3 预留
    pub system_status_flags: u32,

    /// 单位：无，底盘故障码 bitfield/raw code
    pub chassis_fault: u32,

}

impl ChassisStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_ESTOP: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_TOW: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_FAULT: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_SELF_CHECK: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_PARK: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_REMOTE_CONTROL: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS_STATE_COMM_CONTROL: u8 = 7;


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


impl Default for ChassisStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__ChassisStatus__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__ChassisStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ChassisStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ChassisStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ChassisStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisStatus where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/ChassisStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ChassisStatus() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__CommStatus() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__CommStatus__init(msg: *mut CommStatus) -> bool;
    fn masc_chassis_msgs__msg__CommStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommStatus>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__CommStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommStatus>);
    fn masc_chassis_msgs__msg__CommStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<CommStatus>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__CommStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: CAN SDK communication status and chassis identity/version data.
/// Msg Name: CommStatus

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，CAN 通讯状态，见 COMM_STATE_* 常量
    pub comm_state: u8,

    /// 单位：无，通讯失败原因，见 FAIL_REASON_* 常量
    pub fail_reason: u8,

    /// 单位：无，运动控制命令是否处于超时保护状态
    pub motion_command_timeout_active: bool,

    /// 单位：次，连接尝试次数
    pub connection_attempt_count: u64,

    /// 单位：次，CAN transport 错误次数
    pub transport_error_count: u64,

    /// 单位：次，发送错误次数
    pub tx_error_count: u64,

    /// 单位：次，接收错误次数
    pub rx_error_count: u64,

    /// 单位：无，底盘 UUID
    pub chassis_uuid: [u8; 5],

    /// 单位：无，系统软硬件版本原始字节，来自 0x205 Byte5
    pub system_software_hardware_version: u8,

    /// 单位：无，底盘类型版本，见 CHASSIS_TYPE_* 常量
    pub chassis_type_version: u8,

    /// 单位：无，通讯协议版本
    pub chassis_protocol_version: u8,

}

impl CommStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_DISCONNECTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_CONNECTING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_PROTOCOL_MISMATCH: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_CONNECTED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_PORT_OPEN_FAILED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_VERSION_TIMEOUT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_PROTOCOL_VERSION_MISMATCH: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_READ_ERROR: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_WRITE_ERROR: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_TRANSPORT_ERROR: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAIL_REASON_UNKNOWN: u8 = 255;

    /// Chassis type values from system_version_feedback (0x205) Byte6.
    /// Newer CAN V10 docs define currently supported values directly.
    /// 0x00
    pub const CHASSIS_TYPE_RESERVED: u8 = 0;

    /// 0x01
    pub const CHASSIS_TYPE_DIFF_2WD: u8 = 1;

    /// 0x02
    pub const CHASSIS_TYPE_DIFF_4WD: u8 = 2;

    /// 0x03
    pub const CHASSIS_TYPE_DIFF_6WD: u8 = 3;

    /// 0x04
    pub const CHASSIS_TYPE_DIFF_8WD: u8 = 4;

    /// 0x20
    pub const CHASSIS_TYPE_TRICYCLE_UNSPECIFIED: u8 = 32;

    /// 0x21
    pub const CHASSIS_TYPE_TRICYCLE_FRONT: u8 = 33;

    /// 0x22
    pub const CHASSIS_TYPE_TRICYCLE_REAR: u8 = 34;

    /// 0x40
    pub const CHASSIS_TYPE_ACKERMANN_UNSPECIFIED: u8 = 64;

    /// 0x41
    pub const CHASSIS_TYPE_ACKERMANN_FRONT: u8 = 65;

    /// 0x42
    pub const CHASSIS_TYPE_ACKERMANN_REAR: u8 = 66;

    /// 0x43
    pub const CHASSIS_TYPE_ACKERMANN_FRONT_REAR: u8 = 67;

    /// 0x61
    pub const CHASSIS_TYPE_AWS_4WS: u8 = 97;

    /// 0x62
    pub const CHASSIS_TYPE_AWS_6WS: u8 = 98;

    /// 0x63
    pub const CHASSIS_TYPE_AWS_8WS: u8 = 99;

}


impl Default for CommStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__CommStatus__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__CommStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CommStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CommStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__CommStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommStatus where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/CommStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__CommStatus() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotor() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__DriveMotor__init(msg: *mut DriveMotor) -> bool;
    fn masc_chassis_msgs__msg__DriveMotor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveMotor>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__DriveMotor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveMotor>);
    fn masc_chassis_msgs__msg__DriveMotor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveMotor>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveMotor>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__DriveMotor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Drive motor feedback for one protocol index.
/// Msg Name: DriveMotor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，协议索引，由 CAN ID 范围计算
    pub index: u8,

    /// 单位：m/s，驱动轮线速度
    pub speed: f64,

    /// 单位：A，驱动电机电流
    pub current: f64,

    /// 单位：m，驱动轮累计位置
    pub position: f64,

}



impl Default for DriveMotor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__DriveMotor__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__DriveMotor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveMotor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveMotor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveMotor where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/DriveMotor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotor() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotorArray() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__DriveMotorArray__init(msg: *mut DriveMotorArray) -> bool;
    fn masc_chassis_msgs__msg__DriveMotorArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveMotorArray>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__DriveMotorArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveMotorArray>);
    fn masc_chassis_msgs__msg__DriveMotorArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveMotorArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveMotorArray>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__DriveMotorArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Drive motor feedback array.
/// Msg Name: DriveMotorArray

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotorArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DriveMotor>,

}



impl Default for DriveMotorArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__DriveMotorArray__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__DriveMotorArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveMotorArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveMotorArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveMotorArray where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/DriveMotorArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotorArray() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__DriveMotorStatus__init(msg: *mut DriveMotorStatus) -> bool;
    fn masc_chassis_msgs__msg__DriveMotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveMotorStatus>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__DriveMotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveMotorStatus>);
    fn masc_chassis_msgs__msg__DriveMotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveMotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveMotorStatus>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__DriveMotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Drive motor runtime status for one protocol index.
/// Msg Name: DriveMotorStatus

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，协议索引，由 CAN ID 范围计算
    pub index: u8,

    /// 单位：degC，驱动轮电机温度
    pub motor_temperature: f64,

    /// 单位：degC，驱动器温度
    pub driver_temperature: f64,

    /// 单位：无，驱动器故障码 bitfield/raw code
    pub driver_fault: u32,

}



impl Default for DriveMotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__DriveMotorStatus__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__DriveMotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveMotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveMotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveMotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/DriveMotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotorStatus() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotorStatusArray() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__DriveMotorStatusArray__init(msg: *mut DriveMotorStatusArray) -> bool;
    fn masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveMotorStatusArray>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveMotorStatusArray>);
    fn masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveMotorStatusArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveMotorStatusArray>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__DriveMotorStatusArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Drive motor status array.
/// Msg Name: DriveMotorStatusArray

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotorStatusArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DriveMotorStatus>,

}



impl Default for DriveMotorStatusArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__DriveMotorStatusArray__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__DriveMotorStatusArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveMotorStatusArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__DriveMotorStatusArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveMotorStatusArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveMotorStatusArray where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/DriveMotorStatusArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__DriveMotorStatusArray() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__RcStatus() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__RcStatus__init(msg: *mut RcStatus) -> bool;
    fn masc_chassis_msgs__msg__RcStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RcStatus>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__RcStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RcStatus>);
    fn masc_chassis_msgs__msg__RcStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RcStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RcStatus>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__RcStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: RC channel feedback.
/// Msg Name: RcStatus

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RcStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，RC 遥控器是否在线
    pub online: bool,

    /// 单位：无，RC 通道 CH0-CH6 原始值，范围 -100~100
    pub channels: [i8; 7],

}



impl Default for RcStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__RcStatus__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__RcStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RcStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__RcStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__RcStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__RcStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RcStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RcStatus where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/RcStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__RcStatus() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotor() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__ServoMotor__init(msg: *mut ServoMotor) -> bool;
    fn masc_chassis_msgs__msg__ServoMotor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoMotor>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__ServoMotor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoMotor>);
    fn masc_chassis_msgs__msg__ServoMotor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoMotor>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoMotor>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__ServoMotor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Servo motor feedback for one protocol index.
/// Msg Name: ServoMotor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，协议索引，由 CAN ID 范围计算
    pub index: u8,

    /// 单位：无，舵机自动标定状态，见 SERVO_CALIBRATION_* 常量
    pub calibration_state: u8,

    /// 单位：rad，舵机角度
    pub angle: f64,

    /// 单位：A，舵机电流
    pub current: f64,

}

impl ServoMotor {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SERVO_CALIBRATION_NOT_CALIBRATED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SERVO_CALIBRATION_CALIBRATING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SERVO_CALIBRATION_CALIBRATED: u8 = 2;

}


impl Default for ServoMotor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__ServoMotor__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__ServoMotor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoMotor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoMotor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoMotor where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/ServoMotor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotor() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotorArray() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__ServoMotorArray__init(msg: *mut ServoMotorArray) -> bool;
    fn masc_chassis_msgs__msg__ServoMotorArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoMotorArray>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__ServoMotorArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoMotorArray>);
    fn masc_chassis_msgs__msg__ServoMotorArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoMotorArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoMotorArray>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__ServoMotorArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Servo motor feedback array.
/// Msg Name: ServoMotorArray

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotorArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ServoMotor>,

}



impl Default for ServoMotorArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__ServoMotorArray__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__ServoMotorArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoMotorArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoMotorArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoMotorArray where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/ServoMotorArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotorArray() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__ServoMotorStatus__init(msg: *mut ServoMotorStatus) -> bool;
    fn masc_chassis_msgs__msg__ServoMotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoMotorStatus>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__ServoMotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoMotorStatus>);
    fn masc_chassis_msgs__msg__ServoMotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoMotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoMotorStatus>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__ServoMotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Servo motor runtime status for one protocol index.
/// Msg Name: ServoMotorStatus

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 单位：无，协议索引，由 CAN ID 范围计算
    pub index: u8,

    /// 单位：degC，舵机电机温度
    pub motor_temperature: f64,

    /// 单位：degC，驱动器温度
    pub driver_temperature: f64,

    /// 单位：无，驱动器故障码 bitfield/raw code
    pub driver_fault: u32,

}



impl Default for ServoMotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__ServoMotorStatus__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__ServoMotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoMotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoMotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoMotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/ServoMotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotorStatus() }
  }
}


#[link(name = "masc_chassis_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotorStatusArray() -> *const std::ffi::c_void;
}

#[link(name = "masc_chassis_msgs__rosidl_generator_c")]
extern "C" {
    fn masc_chassis_msgs__msg__ServoMotorStatusArray__init(msg: *mut ServoMotorStatusArray) -> bool;
    fn masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoMotorStatusArray>, size: usize) -> bool;
    fn masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoMotorStatusArray>);
    fn masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoMotorStatusArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoMotorStatusArray>) -> bool;
}

// Corresponds to masc_chassis_msgs__msg__ServoMotorStatusArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Function: Servo motor status array.
/// Msg Name: ServoMotorStatusArray

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotorStatusArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ServoMotorStatus>,

}



impl Default for ServoMotorStatusArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !masc_chassis_msgs__msg__ServoMotorStatusArray__init(&mut msg as *mut _) {
        panic!("Call to masc_chassis_msgs__msg__ServoMotorStatusArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoMotorStatusArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { masc_chassis_msgs__msg__ServoMotorStatusArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoMotorStatusArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoMotorStatusArray where Self: Sized {
  const TYPE_NAME: &'static str = "masc_chassis_msgs/msg/ServoMotorStatusArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__masc_chassis_msgs__msg__ServoMotorStatusArray() }
  }
}


