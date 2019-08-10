/*
  zh-TW.h - localization for Chinese (Traditional) - Taiwan for Sonoff-Tasmota

  Copyright (C) 2019  Theo Arends (translated by dannydu)

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_ZH_TW_H_
#define _LANGUAGE_ZH_TW_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v5.12.0d
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 1028
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "zh"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "SunMonTueWedThuFriSat"
#define D_MONTH3LIST "JanFebMarAprMayJunJulAugSepOctNovDec"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR "."

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "空氣品質"
#define D_AP "AP"                    // Access Point
#define D_AS "名稱:"
#define D_AUTO "自動"
#define D_BLINK "閃爍"
#define D_BLINKOFF "閃爍關"
#define D_BOOT_COUNT "啟動次數"
#define D_BRIGHTLIGHT "亮度"
#define D_BSSID "BSSId"
#define D_BUTTON "按鈕"
#define D_BY "by"                    // Written by me
#define D_BYTES "大小:"
#define D_CELSIUS "攝氏"
#define D_CHANNEL "Channel"
#define D_CO2 "二氧化碳"
#define D_CODE "代碼"                // Button code
#define D_COLDLIGHT "冷"
#define D_COMMAND "命令:"
#define D_CONNECTED "已連接"
#define D_COUNT "數量:"
#define D_COUNTER "Counter"
#define D_CURRENT "電流"          // As in Voltage and Current
#define D_DATA "數據:"
#define D_DARKLIGHT "Dark"
#define D_DEBUG "除錯"
#define D_DISABLED "停用"
#define D_DISTANCE "Distance"
#define D_DNS_SERVER "DNS伺服器"
#define D_DONE "完成"
#define D_DST_TIME "DST"
#define D_ECO2 "eCO2"
#define D_EMULATION "設備模擬"
#define D_ENABLED "啟用"
#define D_ERASE "刪除"
#define D_ERROR "錯誤"
#define D_FAHRENHEIT "華氏"
#define D_FAILED "失敗"
#define D_FALLBACK "Fallback"
#define D_FALLBACK_TOPIC "Fallback Topic"
#define D_FALSE "False"
#define D_FILE "文件:"
#define D_FLOW_RATE "Flow rate"
#define D_FREE_MEMORY "可用記憶體"
#define D_FREQUENCY "Frequency"
#define D_GAS "氣體"
#define D_GATEWAY "網關"
#define D_GROUP "組:"
#define D_HOST "主機"
#define D_HOSTNAME "主機名"
#define D_HUMIDITY "濕度"
#define D_ILLUMINANCE "照度"
#define D_IMMEDIATE "immediate"      // Button immediate
#define D_INDEX "索引:"
#define D_INFO "信息"
#define D_INFRARED "Infrared"
#define D_INITIALIZED "初始化完成"
#define D_IP_ADDRESS "IP地址"
#define D_LIGHT "燈"
#define D_LWT "LWT"
#define D_MODULE "模組"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "多次按鍵"
#define D_NOISE "雜訊"
#define D_NONE "無"
#define D_OFF "關"
#define D_OFFLINE "離線"
#define D_OK "好"
#define D_ON "開"
#define D_ONLINE "在線"
#define D_PASSWORD "密碼"
#define D_PORT "端口"
#define D_POWER_FACTOR "功率因數"
#define D_POWERUSAGE "功率"
#define D_POWERUSAGE_ACTIVE "Active Power"
#define D_POWERUSAGE_APPARENT "Apparent Power"
#define D_POWERUSAGE_REACTIVE "Reactive Power"
#define D_PRESSURE "氣壓"
#define D_PRESSUREATSEALEVEL "海平面氣壓"
#define D_PROGRAM_FLASH_SIZE "韌體 Flash 大小"
#define D_PROGRAM_SIZE "韌體大小"
#define D_PROJECT "項目:"
#define D_RAIN "Rain"
#define D_RECEIVED "已接收"
#define D_RESTART "重啟"
#define D_RESTARTING "正在重啟"
#define D_RESTART_REASON "重啟原因"
#define D_RESTORE "恢覆"
#define D_RETAINED "已保留"
#define D_RULE "Rule"
#define D_SAVE "存檔"
#define D_SENSOR "感測器"
#define D_SSID "名稱"
#define D_START "開始"
#define D_STD_TIME "STD"
#define D_STOP "停止"
#define D_SUBNET_MASK "子網遮罩"
#define D_SUBSCRIBE_TO "訂閱"
#define D_UNSUBSCRIBE_FROM "退訂"
#define D_SUCCESSFUL "成功"
#define D_SUNRISE "Sunrise"
#define D_SUNSET "Sunset"
#define D_TEMPERATURE "溫度"
#define D_TO "to"
#define D_TOGGLE "切換"
#define D_TOPIC "主題"
#define D_TOTAL_USAGE "Total Usage"
#define D_TRANSMIT "發送"
#define D_TRUE "True"
#define D_TVOC "TVOC"
#define D_UPGRADE "升級"
#define D_UPLOAD "上傳"
#define D_UPTIME "運行時間"
#define D_USER "用戶名"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "UV Index"
#define D_UV_INDEX_1 "Low"
#define D_UV_INDEX_2 "Mid"
#define D_UV_INDEX_3 "High"
#define D_UV_INDEX_4 "Danger"
#define D_UV_INDEX_5 "BurnL1/2"
#define D_UV_INDEX_6 "BurnL3"
#define D_UV_INDEX_7 "OoR"
#define D_UV_LEVEL "紫外線等級"
#define D_UV_POWER "UV Power"
#define D_VERSION "版本"
#define D_VOLTAGE "電壓"
#define D_WEIGHT "Weight"
#define D_WARMLIGHT "暖"
#define D_WEB_SERVER "Web Server"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "警告：精簡產品不支持配置寫入保存"
#define D_LEVEL_10 "level 1-0"
#define D_LEVEL_01 "level 0-1"
#define D_SERIAL_LOGGING_DISABLED "串口日誌已禁用"
#define D_SYSLOG_LOGGING_REENABLED "Syslog 日誌已開啟"

#define D_SET_BAUDRATE_TO "設置波特率為:"
#define D_RECEIVED_TOPIC "接收到的主題:"
#define D_DATA_SIZE "數據大小:"
#define D_ANALOG_INPUT "Analog"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Blocked Loop"
#define D_WPS_FAILED_WITH_STATUS "WPSconfig FAILED with status"
#define D_ACTIVE_FOR_3_MINUTES "active for 3 minutes"
#define D_FAILED_TO_START "未能啟動"
#define D_PATCH_ISSUE_2186 "Patch issue 2186"
#define D_CONNECTING_TO_AP "連接到 AP"
#define D_IN_MODE "模式:"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "連接失敗，因為沒有獲取到IP地址"
#define D_CONNECT_FAILED_AP_NOT_REACHED "連接失敗，無法連接AP"
#define D_CONNECT_FAILED_WRONG_PASSWORD "連接失敗，AP密碼不正確"
#define D_CONNECT_FAILED_AP_TIMEOUT "連接失敗，AP超時"
#define D_ATTEMPTING_CONNECTION "嘗試連接..."
#define D_CHECKING_CONNECTION "檢查連接..."
#define D_QUERY_DONE "查詢完成。 發現MQTT服務"
#define D_MQTT_SERVICE_FOUND "發現MQTT服務:"
#define D_FOUND_AT "found at"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog主機未找到"

// settings.ino
#define D_SAVED_TO_FLASH_AT "保存到 flash:"
#define D_LOADED_FROM_FLASH_AT "從 flash 載入"
#define D_USE_DEFAULTS "使用默認設置"
#define D_ERASED_SECTOR "擦除刪除"

// xdrv_02_webserver.ino
#define D_NOSCRIPT "To use Tasmota, please enable JavaScript"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "固件版本過低<br>請升級"
#define D_WEBSERVER_ACTIVE_ON "Web服務器:"
#define D_WITH_IP_ADDRESS "IP地址:"
#define D_WEBSERVER_STOPPED "Web 服務器已停止"
#define D_FILE_NOT_FOUND "文件未找到"
#define D_REDIRECTED "重定向到認證頁面"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifimanager set AccessPoint and keep Station"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifimanager 設置接入點"
#define D_TRYING_TO_CONNECT "嘗試將設備連接到網絡"

#define D_RESTART_IN "重啟需要"
#define D_SECONDS "秒"
#define D_DEVICE_WILL_RESTART "設備將在幾分鐘內重啟"
#define D_BUTTON_TOGGLE "狀態切換"
#define D_CONFIGURATION "設置"
#define D_INFORMATION "信息"
#define D_FIRMWARE_UPGRADE "固件升級"
#define D_CONSOLE "控制台"
#define D_CONFIRM_RESTART "確認重啟"

#define D_CONFIGURE_MODULE "模塊設置"
#define D_CONFIGURE_WIFI "WiFi設置"
#define D_CONFIGURE_MQTT "MQTT設置"
#define D_CONFIGURE_DOMOTICZ "Domoticz設置"
#define D_CONFIGURE_LOGGING "日志設置"
#define D_CONFIGURE_OTHER "其他設置"
#define D_CONFIRM_RESET_CONFIGURATION "確認重置配置"
#define D_RESET_CONFIGURATION "重置配置"
#define D_BACKUP_CONFIGURATION "備份配置"
#define D_RESTORE_CONFIGURATION "還原配置"
#define D_MAIN_MENU "主菜單"

#define D_MODULE_PARAMETERS "模塊設置"
#define D_MODULE_TYPE "模塊類型"
#define D_PULLUP_ENABLE "No Button/Switch pull-up"
#define D_ADC "ADC"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "串口輸入(RX)"
#define D_SERIAL_OUT "串口輸出(TX)"

#define D_WIFI_PARAMETERS "Wifi設置"
#define D_SCAN_FOR_WIFI_NETWORKS "掃描無線網絡"
#define D_SCAN_DONE "掃描完畢"
#define D_NO_NETWORKS_FOUND "未找到任何網絡"
#define D_REFRESH_TO_SCAN_AGAIN "刷新並重試"
#define D_DUPLICATE_ACCESSPOINT "重覆AP"
#define D_SKIPPING_LOW_QUALITY "忽略弱信號網絡"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 名稱"
#define D_AP1_PASSWORD "AP1 密碼"
#define D_AP2_SSID "AP2 名稱"
#define D_AP2_PASSWORD "AP2 密碼"

#define D_MQTT_PARAMETERS "MQTT設置"
#define D_CLIENT "客戶端"
#define D_FULL_TOPIC "完整主題"

#define D_LOGGING_PARAMETERS "日志設置"
#define D_SERIAL_LOG_LEVEL "串口日志級別"
#define D_WEB_LOG_LEVEL "Web 日志級別"
#define D_SYS_LOG_LEVEL "Syslog 日志級別"
#define D_MORE_DEBUG "全部調試"
#define D_SYSLOG_HOST "Syslog 主機地址"
#define D_SYSLOG_PORT "Syslog 端口"
#define D_TELEMETRY_PERIOD "上報周期"

#define D_OTHER_PARAMETERS "其他設置"
#define D_TEMPLATE "Template"
#define D_ACTIVATE "Activate"
#define D_WEB_ADMIN_PASSWORD "WEB管理密碼"
#define D_MQTT_ENABLE "啟用MQTT"
#define D_FRIENDLY_NAME "昵稱"
#define D_BELKIN_WEMO "貝爾金 WeMo"
#define D_HUE_BRIDGE "飛利浦 Hue 網橋"
#define D_SINGLE_DEVICE "單設備"
#define D_MULTI_DEVICE "多設備"

#define D_CONFIGURE_TEMPLATE "Configure Template"
#define D_TEMPLATE_PARAMETERS "Template parameters"
#define D_TEMPLATE_NAME "Name"
#define D_BASE_TYPE "Based on"
#define D_TEMPLATE_FLAGS "Options"

#define D_SAVE_CONFIGURATION "保存設置"
#define D_CONFIGURATION_SAVED "設置已保存"
#define D_CONFIGURATION_RESET "設置已重置"

#define D_PROGRAM_VERSION "固件版本"
#define D_BUILD_DATE_AND_TIME "編譯時間"
#define D_CORE_AND_SDK_VERSION "內核版本"
#define D_FLASH_WRITE_COUNT "刷機次數"
#define D_MAC_ADDRESS "MAC地址"
#define D_MQTT_HOST "MQTT主機"
#define D_MQTT_PORT "MQTT端口"
#define D_MQTT_CLIENT "MQTT客戶端"
#define D_MQTT_USER "MQTT用戶名"
#define D_MQTT_TOPIC "MQTT 主題(Topic)"
#define D_MQTT_GROUP_TOPIC "MQTT 主題組(Group Topic)"
#define D_MQTT_FULL_TOPIC "MQTT 完整主題(Full Topic)"
#define D_MDNS_DISCOVERY "mDNS 發現"
#define D_MDNS_ADVERTISE "mDNS 廣播"
#define D_ESP_CHIP_ID "ESP芯片ID"
#define D_FLASH_CHIP_ID "Flash芯片ID"
#define D_FLASH_CHIP_SIZE "Flash大小"
#define D_FREE_PROGRAM_SPACE "空閑程序空間"

#define D_UPGRADE_BY_WEBSERVER "通過Web升級"
#define D_OTA_URL "OTA地址"
#define D_START_UPGRADE "開始升級"
#define D_UPGRADE_BY_FILE_UPLOAD "通過文件升級"
#define D_UPLOAD_STARTED "開始上傳"
#define D_UPGRADE_STARTED "開始升級"
#define D_UPLOAD_DONE "上傳完成"
#define D_UPLOAD_ERR_1 "沒有選擇文件"
#define D_UPLOAD_ERR_2 "沒有足夠空間"
#define D_UPLOAD_ERR_3 "固件頭不是 0xE9"
#define D_UPLOAD_ERR_4 "固件太大"
#define D_UPLOAD_ERR_5 "上傳緩沖區不匹配"
#define D_UPLOAD_ERR_6 "上傳失敗。 啟用日志記錄 3"
#define D_UPLOAD_ERR_7 "上傳取消"
#define D_UPLOAD_ERR_8 "錯誤的固件"
#define D_UPLOAD_ERR_9 "固件太大"
#define D_UPLOAD_ERR_10 "Failed to init RF chip"
#define D_UPLOAD_ERR_11 "Failed to erase RF chip"
#define D_UPLOAD_ERR_12 "Failed to write to RF chip"
#define D_UPLOAD_ERR_13 "Failed to decode RF firmware"
#define D_UPLOAD_ERROR_CODE "上傳錯誤代碼"

#define D_ENTER_COMMAND "輸入命令"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "如果預期響應，則啟用Weblog 2"
#define D_NEED_USER_AND_PASSWORD "需要 user=<用戶名>&password=<密碼>"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "驗證 TLS 指紋..."
#define D_TLS_CONNECT_FAILED_TO "TLS 連接失敗"
#define D_RETRY_IN "重試倒計時:"
#define D_VERIFIED "驗證成功"
#define D_INSECURE "指紋無效導致連接不安全"
#define D_CONNECT_FAILED_TO "連接失敗:"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "組播已禁用"
#define D_MULTICAST_REJOINED "組播已(重新)加入"
#define D_MULTICAST_JOIN_FAILED "組播加入失敗"
#define D_FAILED_TO_SEND_RESPONSE "請求發送失敗"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo 基礎事件"
#define D_WEMO_EVENT_SERVICE "WeMo 事件服務"
#define D_WEMO_META_SERVICE "WeMo meta 服務"
#define D_WEMO_SETUP "WeMo 設置"
#define D_RESPONSE_SENT "發送請求"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue 設置"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API 未實現"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST 參數"
#define D_3_RESPONSE_PACKETS_SENT "3 請求包發送"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz 設置"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "開關 idx"
#define D_DOMOTICZ_SENSOR_IDX "傳感器 idx"
  #define D_DOMOTICZ_TEMP "溫度"
  #define D_DOMOTICZ_TEMP_HUM "溫度,濕度"
  #define D_DOMOTICZ_TEMP_HUM_BARO "溫度,濕度,氣壓"
  #define D_DOMOTICZ_POWER_ENERGY "功率,電量"
  #define D_DOMOTICZ_ILLUMINANCE "照度"
  #define D_DOMOTICZ_COUNT "數值/PM1"
  #define D_DOMOTICZ_VOLTAGE "電壓/PM2.5"
  #define D_DOMOTICZ_CURRENT "電流/PM10"
  #define D_DOMOTICZ_AIRQUALITY "空氣品質"
#define D_DOMOTICZ_UPDATE_TIMER "更新計時器"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Configure Timer"
#define D_TIMER_PARAMETERS "Timer parameters"
#define D_TIMER_ENABLE "Enable Timers"
#define D_TIMER_ARM "Arm"
#define D_TIMER_TIME "Time"
#define D_TIMER_DAYS "Days"
#define D_TIMER_REPEAT "Repeat"
#define D_TIMER_OUTPUT "Output"
#define D_TIMER_ACTION "Action"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Configure KNX"
#define D_KNX_PARAMETERS "KNX Parameters"
#define D_KNX_GENERAL_CONFIG "General"
#define D_KNX_PHYSICAL_ADDRESS "Physical Address"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "( Must be unique on the KNX network )"
#define D_KNX_ENABLE "Enable KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Data to Send to Group Addresses"
#define D_ADD "Add"
#define D_DELETE "Delete"
#define D_REPLY "Reply"
#define D_KNX_GROUP_ADDRESS_TO_READ "Group Addresses to Receive Data from"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "Received from"
#define D_KNX_COMMAND_WRITE "Write"
#define D_KNX_COMMAND_READ "Read"
#define D_KNX_COMMAND_OTHER "Other"
#define D_SENT_TO "sent to"
#define D_KNX_WARNING "The group address ( 0 / 0 / 0 ) is reserved and can not be used."
#define D_KNX_ENHANCEMENT "Communication Enhancement"
#define D_KNX_TX_SLOT "KNX TX"
#define D_KNX_RX_SLOT "KNX RX"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "今日用電量"
#define D_ENERGY_YESTERDAY "昨日用電量"
#define D_ENERGY_TOTAL "總用電量"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "傳感器正忙"
#define D_SENSOR_CRC_ERROR "傳感器 CRC 校驗錯誤"
#define D_SENSORS_FOUND "發現傳感器"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "等待超時"
#define D_START_SIGNAL_LOW "開始低電平"
#define D_START_SIGNAL_HIGH "開始高電平"
#define D_PULSE "pulse"
#define D_CHECKSUM_FAILURE "校驗失敗"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "傳感器沒有確認命令"
#define D_SHT1X_FOUND "發現 SHT1X 傳感器"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "顆粒物直徑大於"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "Accel. X-Axis"
#define D_AY_AXIS "Accel. Y-Axis"
#define D_AZ_AXIS "Accel. Z-Axis"
#define D_GX_AXIS "Gyro X-Axis"
#define D_GY_AXIS "Gyro Y-Axis"
#define D_GZ_AXIS "Gyro Z-Axis"

// xsns_34_hx711.ino
#define D_HX_CAL_REMOVE "Remove weigth"
#define D_HX_CAL_REFERENCE "Load reference weigth"
#define D_HX_CAL_DONE "Calibrated"
#define D_HX_CAL_FAIL "Calibration failed"
#define D_RESET_HX711 "Reset Scale"
#define D_CONFIGURE_HX711 "Configure Scale"
#define D_HX711_PARAMETERS "Scale parameters"
#define D_ITEM_WEIGHT "Item weight"
#define D_REFERENCE_WEIGHT "Reference weigth"
#define D_CALIBRATE "Calibrate"
#define D_CALIBRATION "Calibration"

//xsns_35_tx20.ino
#define D_TX20_WIND_DIRECTION "Wind Direction"
#define D_TX20_WIND_SPEED "Wind Speed"
#define D_TX20_WIND_SPEED_AVG "Wind Speed Avg"
#define D_TX20_WIND_SPEED_MAX "Wind Speed Max"
#define D_TX20_NORTH "N"
#define D_TX20_EAST "E"
#define D_TX20_SOUTH "S"
#define D_TX20_WEST "W"

//xsns_43_hre.ino
#define D_LOG_HRE "HRE: "

// sonoff_template.h - keep them as short as possible to be able to fit them in GUI drop down box
#define D_SENSOR_NONE          "None"
#define D_SENSOR_USER          "User"
#define D_SENSOR_DHT11         "DHT11"
#define D_SENSOR_AM2301        "AM2301"
#define D_SENSOR_SI7021        "SI7021"
#define D_SENSOR_DS18X20       "DS18x20"
#define D_SENSOR_I2C_SCL       "I2C SCL"
#define D_SENSOR_I2C_SDA       "I2C SDA"
#define D_SENSOR_WS2812        "WS2812"
#define D_SENSOR_DFR562        "MP3 Player"
#define D_SENSOR_IRSEND        "IRsend"
#define D_SENSOR_SWITCH        "Switch"     // Suffix "1"
#define D_SENSOR_BUTTON        "Button"     // Suffix "1"
#define D_SENSOR_RELAY         "Relay"      // Suffix "1i"
#define D_SENSOR_LED           "Led"        // Suffix "1i"
#define D_SENSOR_LED_LINK      "LedLink"    // Suffix "i"
#define D_SENSOR_PWM           "PWM"        // Suffix "1"
#define D_SENSOR_COUNTER       "Counter"    // Suffix "1"
#define D_SENSOR_IRRECV        "IRrecv"
#define D_SENSOR_MHZ_RX        "MHZ Rx"
#define D_SENSOR_MHZ_TX        "MHZ Tx"
#define D_SENSOR_PZEM004_RX    "PZEM004 Rx"
#define D_SENSOR_PZEM016_RX    "PZEM016 Rx"
#define D_SENSOR_PZEM017_RX    "PZEM017 Rx"
#define D_SENSOR_PZEM0XX_TX    "PZEM0XX Tx"
#define D_SENSOR_SAIR_RX       "SAir Rx"
#define D_SENSOR_SAIR_TX       "SAir Tx"
#define D_SENSOR_SPI_CS        "SPI CS"
#define D_SENSOR_SPI_DC        "SPI DC"
#define D_SENSOR_BACKLIGHT     "Backlight"
#define D_SENSOR_PMS5003       "PMS5003"
#define D_SENSOR_SDS0X1_RX     "SDS0X1 Rx"
#define D_SENSOR_SDS0X1_TX     "SDS0X1 Tx"
#define D_SENSOR_SBR_RX        "SerBr Rx"
#define D_SENSOR_SBR_TX        "SerBr Tx"
#define D_SENSOR_SR04_TRIG     "SR04 Tri"
#define D_SENSOR_SR04_ECHO     "SR04 Ech"
#define D_SENSOR_SDM120_TX     "SDMx20 Tx"
#define D_SENSOR_SDM120_RX     "SDMx20 Rx"
#define D_SENSOR_SDM630_TX     "SDM630 Tx"
#define D_SENSOR_SDM630_RX     "SDM630 Rx"
#define D_SENSOR_TM1638_CLK    "TM16 CLK"
#define D_SENSOR_TM1638_DIO    "TM16 DIO"
#define D_SENSOR_TM1638_STB    "TM16 STB"
#define D_SENSOR_HX711_SCK     "HX711 SCK"
#define D_SENSOR_HX711_DAT     "HX711 DAT"
#define D_SENSOR_TX20_TX       "TX20"
#define D_SENSOR_RFSEND        "RFSend"
#define D_SENSOR_RFRECV        "RFrecv"
#define D_SENSOR_TUYA_TX       "Tuya Tx"
#define D_SENSOR_TUYA_RX       "Tuya Rx"
#define D_SENSOR_MGC3130_XFER  "MGC3130 Xfr"
#define D_SENSOR_MGC3130_RESET "MGC3130 Rst"
#define D_SENSOR_SSPI_MISO     "SSPI MISO"
#define D_SENSOR_SSPI_MOSI     "SSPI MOSI"
#define D_SENSOR_SSPI_SCLK     "SSPI SCLK"
#define D_SENSOR_SSPI_CS       "SSPI CS"
#define D_SENSOR_SSPI_DC       "SSPI DC"
#define D_SENSOR_RF_SENSOR     "RF Sensor"
#define D_SENSOR_AZ_RX         "AZ Rx"
#define D_SENSOR_AZ_TX         "AZ Tx"
#define D_SENSOR_MAX31855_CS   "MX31855 CS"
#define D_SENSOR_MAX31855_CLK  "MX31855 CLK"
#define D_SENSOR_MAX31855_DO   "MX31855 DO"
#define D_SENSOR_NRG_SEL       "HLWBL SEL"  // Suffix "i"
#define D_SENSOR_NRG_CF1       "HLWBL CF1"
#define D_SENSOR_HLW_CF        "HLW8012 CF"
#define D_SENSOR_HJL_CF        "BL0937 CF"
#define D_SENSOR_MCP39F5_TX    "MCP39F5 Tx"
#define D_SENSOR_MCP39F5_RX    "MCP39F5 Rx"
#define D_SENSOR_MCP39F5_RST   "MCP39F5 Rst"
#define D_SENSOR_CSE7766_TX    "CSE7766 Tx"
#define D_SENSOR_CSE7766_RX    "CSE7766 Rx"
#define D_SENSOR_PN532_TX      "PN532 Tx"
#define D_SENSOR_PN532_RX      "PN532 Rx"
#define D_SENSOR_SM16716_CLK   "SM16716 CLK"
#define D_SENSOR_SM16716_DAT   "SM16716 DAT"
#define D_SENSOR_SM16716_POWER "SM16716 PWR"
#define D_SENSOR_MY92X1_DI     "MY92x1 DI"
#define D_SENSOR_MY92X1_DCKI   "MY92x1 DCKI"
#define D_SENSOR_ARIRFRCV      "ALux IrRcv"
#define D_SENSOR_ARIRFSEL      "ALux IrSel"
#define D_SENSOR_TXD           "Serial Tx"
#define D_SENSOR_RXD           "Serial Rx"
#define D_SENSOR_ROTARY        "Rotary"     // Suffix "1A"
#define D_SENSOR_HRE_CLOCK     "HRE Clock"
#define D_SENSOR_HRE_DATA      "HRE Data"
#define D_SENSOR_ADE7953_IRQ   "ADE7953 IRQ"
#define D_SENSOR_BUZZER        "Buzzer"
#define D_SENSOR_OLED_RESET    "OLED Reset"
#define D_SENSOR_IBEACON_TX    "iBeacon TX"
#define D_SENSOR_IBEACON_RX    "iBeacon RX"
#define D_SENSOR_RDM6300_RX    "RDM6300 RX"
#define D_SENSOR_CC1101_CS     "CC1101 CS"

// Units
#define D_UNIT_AMPERE "安"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_HERTZ "Hz"
#define D_UNIT_HOUR "時"
#define D_UNIT_GALLONS "gal"
#define D_UNIT_GALLONS_PER_MIN "g/m"
#define D_UNIT_INCREMENTS "inc"
#define D_UNIT_KILOGRAM "kg"
#define D_UNIT_KILOMETER_PER_HOUR "km/h"  // or "km/h"
#define D_UNIT_KILOOHM "千歐"
#define D_UNIT_KILOWATTHOUR "千瓦時"
#define D_UNIT_LUX "勒克斯"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "微克/立方米"
#define D_UNIT_MICROMETER "微米"
#define D_UNIT_MICROSECOND "微秒"
#define D_UNIT_MILLIAMPERE "毫安"
#define D_UNIT_MILLIMETER "mm"
#define D_UNIT_MILLIMETER_MERCURY "mmHg"
#define D_UNIT_MILLISECOND "毫秒"
#define D_UNIT_MINUTE "分"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "每分升"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "百帕"
#define D_UNIT_SECOND "秒"
#define D_UNIT_SECTORS "扇區"
#define D_UNIT_VA "VA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "伏"
#define D_UNIT_WATT "瓦"
#define D_UNIT_WATTHOUR "瓦時"
#define D_UNIT_WATT_METER_QUADRAT "W/m²"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

//SDM220
#define D_PHASE_ANGLE     "Phase Angle"
#define D_IMPORT_ACTIVE   "Import Active"
#define D_EXPORT_ACTIVE   "Export Active"
#define D_IMPORT_REACTIVE "Import Reactive"
#define D_EXPORT_REACTIVE "Export Reactive"
#define D_TOTAL_REACTIVE  "Total Reactive"
#define D_UNIT_KWARH      "kVArh"
#define D_UNIT_ANGLE      "Deg"

#endif  // _LANGUAGE_ZH_TW_H_
