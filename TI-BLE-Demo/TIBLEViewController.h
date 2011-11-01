//
//  TIBLEViewController.h
//  TI-BLE-Demo
//
//  Created by Ole Andreas Torvmark on 10/29/11.
//  Copyright (c) 2011 ST alliance AS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TIBLECBKeyfob.h"

@interface TIBLEViewController : UIViewController <TIBLECBKeyfobDelegate> { 
    TIBLECBKeyfob *t;
}
- (IBAction)TIBLEUIScanForPeripheralsButton:(id)sender;
@property (weak, nonatomic) IBOutlet UIProgressView *TIBLEUIBatteryBar;
@property (weak, nonatomic) IBOutlet UILabel *TIBLEUIBatteryBarLabel;

- (IBAction)TIBLEUISoundBuzzerButton:(id)sender;

@property (weak, nonatomic) IBOutlet UIProgressView *TIBLEUIAccelXBar;
@property (weak, nonatomic) IBOutlet UIProgressView *TIBLEUIAccelYBar;
@property (weak, nonatomic) IBOutlet UIProgressView *TIBLEUIAccelZBar;

@property (weak, nonatomic) IBOutlet UISwitch *TIBLEUILeftButton;
@property (weak, nonatomic) IBOutlet UISwitch *TIBLEUIRightButton;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *TIBLEUISpinner;

- (void) batteryIndicatorTimer:(NSTimer *)timer;
- (void) connectionTimer:(NSTimer *)timer;

@end
