//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SimulatorKit/FoundationXPCProtocolProxyable-Protocol.h>
#import <SimulatorKit/NSObject-Protocol.h>

@class NSUUID;
@protocol SimDeviceIOPortDescriptorInterface;

@protocol SimDeviceIOPortInterface <FoundationXPCProtocolProxyable, NSObject>
@property(nonatomic, readonly) id <SimDeviceIOPortDescriptorInterface> descriptor;
@property(nonatomic, readonly) NSUUID *uuid;
@property(nonatomic, readonly) unsigned short ioPortClass;
@end
