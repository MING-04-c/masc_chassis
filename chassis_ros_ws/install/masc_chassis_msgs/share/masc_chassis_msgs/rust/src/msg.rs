#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to masc_chassis_msgs__msg__BmsStatus
/// Function: Unified BMS / power-system status.
/// Msg Name: BmsStatus

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BmsStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BmsStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BmsStatus {
  type RmwMsg = super::msg::rmw::BmsStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bat_soc: msg.bat_soc,
        bat_soh: msg.bat_soh,
        bat_voltage: msg.bat_voltage,
        bat_current: msg.bat_current,
        bat_max_voltage: msg.bat_max_voltage,
        bat_max_current: msg.bat_max_current,
        bat_temp_max: msg.bat_temp_max,
        bat_temp_min: msg.bat_temp_min,
        bms_health: msg.bms_health,
        bms_cycle_count: msg.bms_cycle_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bat_soc: msg.bat_soc,
      bat_soh: msg.bat_soh,
      bat_voltage: msg.bat_voltage,
      bat_current: msg.bat_current,
      bat_max_voltage: msg.bat_max_voltage,
      bat_max_current: msg.bat_max_current,
      bat_temp_max: msg.bat_temp_max,
      bat_temp_min: msg.bat_temp_min,
      bms_health: msg.bms_health,
      bms_cycle_count: msg.bms_cycle_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bat_soc: msg.bat_soc,
      bat_soh: msg.bat_soh,
      bat_voltage: msg.bat_voltage,
      bat_current: msg.bat_current,
      bat_max_voltage: msg.bat_max_voltage,
      bat_max_current: msg.bat_max_current,
      bat_temp_max: msg.bat_temp_max,
      bat_temp_min: msg.bat_temp_min,
      bms_health: msg.bms_health,
      bms_cycle_count: msg.bms_cycle_count,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__CanFrameStats
/// Function: Receive and parse statistics for one CAN ID.
/// Msg Name: CanFrameStats

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrameStats {
    /// 单位：无，CAN ID，格式示例：0x200
    pub can_id: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CanFrameStats::default())
  }
}

impl rosidl_runtime_rs::Message for CanFrameStats {
  type RmwMsg = super::msg::rmw::CanFrameStats;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        can_id: msg.can_id.as_str().into(),
        rx_count: msg.rx_count,
        parse_error_count: msg.parse_error_count,
        drop_count: msg.drop_count,
        frequency: msg.frequency,
        last_rx_age_ms: msg.last_rx_age_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        can_id: msg.can_id.as_str().into(),
      rx_count: msg.rx_count,
      parse_error_count: msg.parse_error_count,
      drop_count: msg.drop_count,
      frequency: msg.frequency,
      last_rx_age_ms: msg.last_rx_age_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      can_id: msg.can_id.to_string(),
      rx_count: msg.rx_count,
      parse_error_count: msg.parse_error_count,
      drop_count: msg.drop_count,
      frequency: msg.frequency,
      last_rx_age_ms: msg.last_rx_age_ms,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__CanFrameStatsArray
/// Function: Receive and parse statistics for all tracked CAN IDs.
/// Msg Name: CanFrameStatsArray

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrameStatsArray {
    /// 单位：无，本组 CAN 统计信息的发布时间
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stats: Vec<super::msg::CanFrameStats>,

}



impl Default for CanFrameStatsArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CanFrameStatsArray::default())
  }
}

impl rosidl_runtime_rs::Message for CanFrameStatsArray {
  type RmwMsg = super::msg::rmw::CanFrameStatsArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        stats: msg.stats
          .into_iter()
          .map(|elem| super::msg::CanFrameStats::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        stats: msg.stats
          .iter()
          .map(|elem| super::msg::CanFrameStats::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      stats: msg.stats
          .into_iter()
          .map(super::msg::CanFrameStats::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__ChassisStatus
/// Function: Chassis runtime status from motion mode and system info feedback.
/// Msg Name: ChassisStatus

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChassisStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ChassisStatus {
  type RmwMsg = super::msg::rmw::ChassisStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        chassis_state: msg.chassis_state,
        current_motion_mode: msg.current_motion_mode,
        motion_mode_switching: msg.motion_mode_switching,
        brake_active: msg.brake_active,
        low_battery: msg.low_battery,
        excessive_tilt: msg.excessive_tilt,
        manual_charging: msg.manual_charging,
        dock_charging: msg.dock_charging,
        main_power_active: msg.main_power_active,
        obstacle_status_flags: msg.obstacle_status_flags,
        system_status_flags: msg.system_status_flags,
        chassis_fault: msg.chassis_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      chassis_state: msg.chassis_state,
      current_motion_mode: msg.current_motion_mode,
      motion_mode_switching: msg.motion_mode_switching,
      brake_active: msg.brake_active,
      low_battery: msg.low_battery,
      excessive_tilt: msg.excessive_tilt,
      manual_charging: msg.manual_charging,
      dock_charging: msg.dock_charging,
      main_power_active: msg.main_power_active,
      obstacle_status_flags: msg.obstacle_status_flags,
      system_status_flags: msg.system_status_flags,
      chassis_fault: msg.chassis_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      chassis_state: msg.chassis_state,
      current_motion_mode: msg.current_motion_mode,
      motion_mode_switching: msg.motion_mode_switching,
      brake_active: msg.brake_active,
      low_battery: msg.low_battery,
      excessive_tilt: msg.excessive_tilt,
      manual_charging: msg.manual_charging,
      dock_charging: msg.dock_charging,
      main_power_active: msg.main_power_active,
      obstacle_status_flags: msg.obstacle_status_flags,
      system_status_flags: msg.system_status_flags,
      chassis_fault: msg.chassis_fault,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__CommStatus
/// Function: CAN SDK communication status and chassis identity/version data.
/// Msg Name: CommStatus

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommStatus::default())
  }
}

impl rosidl_runtime_rs::Message for CommStatus {
  type RmwMsg = super::msg::rmw::CommStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        comm_state: msg.comm_state,
        fail_reason: msg.fail_reason,
        motion_command_timeout_active: msg.motion_command_timeout_active,
        connection_attempt_count: msg.connection_attempt_count,
        transport_error_count: msg.transport_error_count,
        tx_error_count: msg.tx_error_count,
        rx_error_count: msg.rx_error_count,
        chassis_uuid: msg.chassis_uuid,
        system_software_hardware_version: msg.system_software_hardware_version,
        chassis_type_version: msg.chassis_type_version,
        chassis_protocol_version: msg.chassis_protocol_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      comm_state: msg.comm_state,
      fail_reason: msg.fail_reason,
      motion_command_timeout_active: msg.motion_command_timeout_active,
      connection_attempt_count: msg.connection_attempt_count,
      transport_error_count: msg.transport_error_count,
      tx_error_count: msg.tx_error_count,
      rx_error_count: msg.rx_error_count,
        chassis_uuid: msg.chassis_uuid,
      system_software_hardware_version: msg.system_software_hardware_version,
      chassis_type_version: msg.chassis_type_version,
      chassis_protocol_version: msg.chassis_protocol_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      comm_state: msg.comm_state,
      fail_reason: msg.fail_reason,
      motion_command_timeout_active: msg.motion_command_timeout_active,
      connection_attempt_count: msg.connection_attempt_count,
      transport_error_count: msg.transport_error_count,
      tx_error_count: msg.tx_error_count,
      rx_error_count: msg.rx_error_count,
      chassis_uuid: msg.chassis_uuid,
      system_software_hardware_version: msg.system_software_hardware_version,
      chassis_type_version: msg.chassis_type_version,
      chassis_protocol_version: msg.chassis_protocol_version,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__DriveMotor
/// Function: Drive motor feedback for one protocol index.
/// Msg Name: DriveMotor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DriveMotor::default())
  }
}

impl rosidl_runtime_rs::Message for DriveMotor {
  type RmwMsg = super::msg::rmw::DriveMotor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        index: msg.index,
        speed: msg.speed,
        current: msg.current,
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      index: msg.index,
      speed: msg.speed,
      current: msg.current,
      position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      index: msg.index,
      speed: msg.speed,
      current: msg.current,
      position: msg.position,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__DriveMotorArray
/// Function: Drive motor feedback array.
/// Msg Name: DriveMotorArray

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotorArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motors: Vec<super::msg::DriveMotor>,

}



impl Default for DriveMotorArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DriveMotorArray::default())
  }
}

impl rosidl_runtime_rs::Message for DriveMotorArray {
  type RmwMsg = super::msg::rmw::DriveMotorArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motors: msg.motors
          .into_iter()
          .map(|elem| super::msg::DriveMotor::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        motors: msg.motors
          .iter()
          .map(|elem| super::msg::DriveMotor::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      motors: msg.motors
          .into_iter()
          .map(super::msg::DriveMotor::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__DriveMotorStatus
/// Function: Drive motor runtime status for one protocol index.
/// Msg Name: DriveMotorStatus

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DriveMotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DriveMotorStatus {
  type RmwMsg = super::msg::rmw::DriveMotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        index: msg.index,
        motor_temperature: msg.motor_temperature,
        driver_temperature: msg.driver_temperature,
        driver_fault: msg.driver_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      index: msg.index,
      motor_temperature: msg.motor_temperature,
      driver_temperature: msg.driver_temperature,
      driver_fault: msg.driver_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      index: msg.index,
      motor_temperature: msg.motor_temperature,
      driver_temperature: msg.driver_temperature,
      driver_fault: msg.driver_fault,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__DriveMotorStatusArray
/// Function: Drive motor status array.
/// Msg Name: DriveMotorStatusArray

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMotorStatusArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: Vec<super::msg::DriveMotorStatus>,

}



impl Default for DriveMotorStatusArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DriveMotorStatusArray::default())
  }
}

impl rosidl_runtime_rs::Message for DriveMotorStatusArray {
  type RmwMsg = super::msg::rmw::DriveMotorStatusArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        status: msg.status
          .into_iter()
          .map(|elem| super::msg::DriveMotorStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        status: msg.status
          .iter()
          .map(|elem| super::msg::DriveMotorStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      status: msg.status
          .into_iter()
          .map(super::msg::DriveMotorStatus::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__RcStatus
/// Function: RC channel feedback.
/// Msg Name: RcStatus

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RcStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 单位：无，RC 遥控器是否在线
    pub online: bool,

    /// 单位：无，RC 通道 CH0-CH6 原始值，范围 -100~100
    pub channels: [i8; 7],

}



impl Default for RcStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RcStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RcStatus {
  type RmwMsg = super::msg::rmw::RcStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        online: msg.online,
        channels: msg.channels,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      online: msg.online,
        channels: msg.channels,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      online: msg.online,
      channels: msg.channels,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__ServoMotor
/// Function: Servo motor feedback for one protocol index.
/// Msg Name: ServoMotor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoMotor::default())
  }
}

impl rosidl_runtime_rs::Message for ServoMotor {
  type RmwMsg = super::msg::rmw::ServoMotor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        index: msg.index,
        calibration_state: msg.calibration_state,
        angle: msg.angle,
        current: msg.current,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      index: msg.index,
      calibration_state: msg.calibration_state,
      angle: msg.angle,
      current: msg.current,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      index: msg.index,
      calibration_state: msg.calibration_state,
      angle: msg.angle,
      current: msg.current,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__ServoMotorArray
/// Function: Servo motor feedback array.
/// Msg Name: ServoMotorArray

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotorArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motors: Vec<super::msg::ServoMotor>,

}



impl Default for ServoMotorArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoMotorArray::default())
  }
}

impl rosidl_runtime_rs::Message for ServoMotorArray {
  type RmwMsg = super::msg::rmw::ServoMotorArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motors: msg.motors
          .into_iter()
          .map(|elem| super::msg::ServoMotor::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        motors: msg.motors
          .iter()
          .map(|elem| super::msg::ServoMotor::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      motors: msg.motors
          .into_iter()
          .map(super::msg::ServoMotor::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__ServoMotorStatus
/// Function: Servo motor runtime status for one protocol index.
/// Msg Name: ServoMotorStatus

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoMotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ServoMotorStatus {
  type RmwMsg = super::msg::rmw::ServoMotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        index: msg.index,
        motor_temperature: msg.motor_temperature,
        driver_temperature: msg.driver_temperature,
        driver_fault: msg.driver_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      index: msg.index,
      motor_temperature: msg.motor_temperature,
      driver_temperature: msg.driver_temperature,
      driver_fault: msg.driver_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      index: msg.index,
      motor_temperature: msg.motor_temperature,
      driver_temperature: msg.driver_temperature,
      driver_fault: msg.driver_fault,
    }
  }
}


// Corresponds to masc_chassis_msgs__msg__ServoMotorStatusArray
/// Function: Servo motor status array.
/// Msg Name: ServoMotorStatusArray

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoMotorStatusArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: Vec<super::msg::ServoMotorStatus>,

}



impl Default for ServoMotorStatusArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoMotorStatusArray::default())
  }
}

impl rosidl_runtime_rs::Message for ServoMotorStatusArray {
  type RmwMsg = super::msg::rmw::ServoMotorStatusArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        status: msg.status
          .into_iter()
          .map(|elem| super::msg::ServoMotorStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        status: msg.status
          .iter()
          .map(|elem| super::msg::ServoMotorStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      status: msg.status
          .into_iter()
          .map(super::msg::ServoMotorStatus::from_rmw_message)
          .collect(),
    }
  }
}


