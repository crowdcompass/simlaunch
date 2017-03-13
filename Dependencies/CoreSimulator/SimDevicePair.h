//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/SimDeviceNotifier-Protocol.h>

@class NSMutableArray, NSUUID, SimDevice, SimDeviceNotificationManager, SimDeviceSet;
@protocol OS_dispatch_queue;

@interface SimDevicePair : NSObject <SimDeviceNotifier>
{
    BOOL _active;
    BOOL _connected;
    NSUUID *_UUID;
    SimDevice *_gizmo;
    SimDevice *_companion;
    SimDeviceSet *_deviceSet;
    NSObject<OS_dispatch_queue> *_pairingStateQueue;
    NSMutableArray *_disconnectSources;
    unsigned long long _gizmoNotificationRegID;
    unsigned long long _companionNotificationRegID;
    NSObject<OS_dispatch_queue> *_stateVariableQueue;
    SimDeviceNotificationManager *_notificationManager;
}

+ (BOOL)testPossiblePairingWithDeviceTypeA:(id)arg1 RuntimeA:(id)arg2 DeviceTypeB:(id)arg3 RuntimeB:(id)arg4 error:(id *)arg5;
+ (id)SimDevicePairWithUUID:(id)arg1 gizmo:(id)arg2 companion:(id)arg3 active:(BOOL)arg4 connected:(BOOL)arg5 deviceSet:(id)arg6;
@property(retain, nonatomic) SimDeviceNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateVariableQueue; // @synthesize stateVariableQueue=_stateVariableQueue;
@property(nonatomic) unsigned long long companionNotificationRegID; // @synthesize companionNotificationRegID=_companionNotificationRegID;
@property(nonatomic) unsigned long long gizmoNotificationRegID; // @synthesize gizmoNotificationRegID=_gizmoNotificationRegID;
@property(retain, nonatomic) NSMutableArray *disconnectSources; // @synthesize disconnectSources=_disconnectSources;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingStateQueue; // @synthesize pairingStateQueue=_pairingStateQueue;
@property(nonatomic) __weak SimDeviceSet *deviceSet; // @synthesize deviceSet=_deviceSet;
@property(retain, nonatomic) SimDevice *companion; // @synthesize companion=_companion;
@property(retain, nonatomic) SimDevice *gizmo; // @synthesize gizmo=_gizmo;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)endPairedDeviceMonitoring;
- (void)ONPSQ_endPairedDeviceMonitoring;
- (void)beginPairedDeviceMonitoring;
- (void)ONPSQ_setActiveOnPairedDevices;
- (void)ONPSQ_disconnectIPCRelayOnDevices;
- (void)ONPSQ_connectIPCRelayOnDevices;
- (void)addDisconnectMonitorPort:(unsigned int)arg1;
- (void)setConnected:(BOOL)arg1;
@property(readonly, nonatomic) BOOL connected;
@property(nonatomic) BOOL active;
- (void)setActiveAsyncWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setActiveWithError:(id *)arg1;
- (void)handleXPCNotificationPairConnectionStateChanged:(struct NSDictionary *)arg1;
- (void)handleXPCNotificationPairSetActive:(struct NSDictionary *)arg1;
- (void)handleXPCNotification:(struct NSDictionary *)arg1;
- (void)handleXPCRequestPairSetActive:(struct NSDictionary *)arg1;
- (void)handleXPCRequest:(struct NSDictionary *)arg1;
- (struct NSMutableDictionary *)newDevicePairNotification;
- (struct NSMutableDictionary *)createXPCNotification:(id)arg1;
- (struct NSMutableDictionary *)createXPCRequest:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithUUID:(id)arg1 gizmo:(id)arg2 companion:(id)arg3 active:(BOOL)arg4 connected:(BOOL)arg5 deviceSet:(id)arg6;

@end

