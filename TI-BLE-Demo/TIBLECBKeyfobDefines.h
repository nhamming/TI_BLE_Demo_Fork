//
//  TIBLECBKeyfobDefines.h
//  TI-BLE-Demo
//
//  Created by Ole Andreas Torvmark on 10/31/11.
//  Copyright (c) 2011 ST alliance AS. All rights reserved.
//

#ifndef TI_BLE_Demo_TIBLECBKeyfobDefines_h
#define TI_BLE_Demo_TIBLECBKeyfobDefines_h

// Defines for the TI CC2540 keyfob peripheral

#define TI_KEYFOB_PROXIMITY_ALERT_UUID                      0x1802
#define TI_KEYFOB_PROXIMITY_ALERT_PROPERTY_UUID             0x2a06
#define TI_KEYFOB_PROXIMITY_ALERT_ON_VAL                    0x01
#define TI_KEYFOB_PROXIMITY_ALERT_OFF_VAL                   0x00
#define TI_KEYFOB_PROXIMITY_ALERT_WRITE_LEN                 1
#define TI_KEYFOB_PROXIMITY_TX_PWR_SERVICE_UUID             0x1804
#define TI_KEYFOB_PROXIMITY_TX_PWR_NOTIFICATION_UUID        0x2A07
#define TI_KEYFOB_PROXIMITY_TX_PWR_NOTIFICATION_READ_LEN    1

#define TI_KEYFOB_BATT_SERVICE_UUID                         0xFFB0
#define TI_KEYFOB_LEVEL_SERVICE_UUID                        0xFFB1
#define TI_KEYFOB_POWER_STATE_UUID                          0xFFB2
#define TI_KEYFOB_LEVEL_SERVICE_READ_LEN                    1

#define TI_KEYFOB_ACCEL_SERVICE_UUID                        0xFFA0
#define TI_KEYFOB_ACCEL_ENABLER_UUID                        0xFFA1
#define TI_KEYFOB_ACCEL_RANGE_UUID                          0xFFA2
#define TI_KEYFOB_ACCEL_READ_LEN                            1
#define TI_KEYFOB_ACCEL_X_UUID                              0xFFA3
#define TI_KEYFOB_ACCEL_Y_UUID                              0xFFA4
#define TI_KEYFOB_ACCEL_Z_UUID                              0xFFA5

#define TI_KEYFOB_KEYS_SERVICE_UUID                         0xFFE0
#define TI_KEYFOB_KEYS_NOTIFICATION_UUID                    0xFFE1
#define TI_KEYFOB_KEYS_NOTIFICATION_READ_LEN                1   

#endif
