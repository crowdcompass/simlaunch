//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@class NSMutableDictionary, SimDeviceMenuItemPair, SimDeviceSet;
@protocol SimDeviceMenuDelegate;

@interface SimDeviceMenu : NSMenu
{
    id <SimDeviceMenuDelegate> _simDeviceMenuDelegate;
    SimDeviceSet *_deviceSet;
    unsigned long long _regID;
    NSMutableDictionary *_menuItemPairForDeviceUDID;
    SimDeviceMenuItemPair *_selectedMenuItemPair;
}

@property(retain, nonatomic) SimDeviceMenuItemPair *selectedMenuItemPair; // @synthesize selectedMenuItemPair=_selectedMenuItemPair;
@property(retain, nonatomic) NSMutableDictionary *menuItemPairForDeviceUDID; // @synthesize menuItemPairForDeviceUDID=_menuItemPairForDeviceUDID;
@property(nonatomic) unsigned long long regID; // @synthesize regID=_regID;
@property(retain, nonatomic) SimDeviceSet *deviceSet; // @synthesize deviceSet=_deviceSet;
@property(nonatomic) id <SimDeviceMenuDelegate> simDeviceMenuDelegate; // @synthesize simDeviceMenuDelegate=_simDeviceMenuDelegate;
- (void).cxx_destruct;
- (BOOL)selectDevice:(id)arg1;
- (void)clearSelectedDevice;
- (void)openDeviceManager:(id)arg1;
- (void)userSelected:(id)arg1;
- (void)refreshMenu;
- (id)initWithTitle:(id)arg1;

@end

