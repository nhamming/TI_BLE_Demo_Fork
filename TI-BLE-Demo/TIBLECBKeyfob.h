//
//  TIBLECBKeyfob.h
//  TI-BLE-Demo
//
//  Created by Ole Andreas Torvmark on 10/31/11.
//  Copyright (c) 2011 ST alliance AS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreBluetooth/CBService.h>
#import "TIBLECBKeyfobDefines.h"


@protocol TIBLECBKeyfobDelegate 
@optional
-(void) keyfobReady;
@required
-(void) accelerometerValuesUpdated:(char)x y:(char)y z:(char)z;
-(void) keyValuesUpdated:(char)sw;
-(void) TXPwrLevelUpdated:(char)TXPwr;
@end

@interface TIBLECBKeyfob : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
}


@property (nonatomic)   float batteryLevel;
@property (nonatomic)   BOOL key1;
@property (nonatomic)   BOOL key2;
@property (nonatomic)   char x;
@property (nonatomic)   char y;
@property (nonatomic)   char z;
@property (nonatomic)   char TXPwrLevel;


@property (nonatomic,assign) id <TIBLECBKeyfobDelegate> delegate;
@property (strong, nonatomic)  NSMutableArray *peripherals;
@property (strong, nonatomic) CBCentralManager *CM; 
@property (strong, nonatomic) CBPeripheral *activePeripheral;

-(void) soundBuzzer:(Byte)buzVal p:(CBPeripheral *)p;
-(void) readBattery:(CBPeripheral *)p;
-(void) enableAccelerometer:(CBPeripheral *)p;
-(void) disableAccelerometer:(CBPeripheral *)p;
-(void) enableButtons:(CBPeripheral *)p;
-(void) disableButtons:(CBPeripheral *)p;
-(void) enableTXPower:(CBPeripheral *)p;
-(void) disableTXPower:(CBPeripheral *)p;


-(void) writeValue:(int)serviceUUID characteristicUUID:(int)characteristicUUID  p:(CBPeripheral *)p data:(NSData *)data;
-(void) readValue: (int)serviceUUID characteristicUUID:(int)characteristicUUID  p:(CBPeripheral *)p;
-(void) notification:(int)serviceUUID characteristicUUID:(int)characteristicUUID  p:(CBPeripheral *)p on:(BOOL)on;


-(UInt16) swap:(UInt16) s;
-(int) controlSetup:(int) s;
-(int) findBLEPeripherals:(int) timeout;
-(const char *) centralManagerStateToString:(int)state;
-(void) scanTimer:(NSTimer *)timer;
-(void) printKnownPeripherals;
-(void) printPeripheralInfo:(CBPeripheral*)peripheral;
-(void) connectPeripheral:(CBPeripheral *)peripheral;

-(void) getAllServicesFromKeyfob:(CBPeripheral *)p;
-(void) getAllCharacteristicsFromKeyfob:(CBPeripheral *)p;
-(CBService *) findServiceFromUUID:(CBUUID *)UUID p:(CBPeripheral *)p;
-(CBCharacteristic *) findCharacteristicFromUUID:(CBUUID *)UUID service:(CBService*)service;
-(const char *) UUIDToString:(CFUUIDRef) UUID;
-(const char *) CBUUIDToString:(CBUUID *) UUID;
-(int) compareCBUUID:(CBUUID *) UUID1 UUID2:(CBUUID *)UUID2;
-(int) compareCBUUIDToInt:(CBUUID *) UUID1 UUID2:(UInt16)UUID2;
-(UInt16) CBUUIDToInt:(CBUUID *) UUID;
-(int) UUIDSAreEqual:(CFUUIDRef)u1 u2:(CFUUIDRef)u2;



@end
