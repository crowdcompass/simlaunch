//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/SimPasteboard-Protocol.h>

@class NSArray, NSPasteboard, SimDeviceNotificationManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SimNSPasteboard : NSObject <SimPasteboard>
{
    unsigned long long _refreshResolveCount;
    NSObject<OS_dispatch_queue> *_nsPasteboardQueue;
    NSObject<OS_dispatch_source> *_pollPastboardChangeTimer;
    NSObject<OS_dispatch_queue> *_pollPastboardChangeTimerQueue;
    NSArray *_items;
    unsigned long long _changeCount;
    NSPasteboard *_nsPasteboard;
    SimDeviceNotificationManager *_notificationManager;
}

+ (id)pasteboardForNSPasteboard:(id)arg1 refreshResolveCount:(unsigned long long)arg2;
@property(retain, nonatomic) SimDeviceNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) NSPasteboard *nsPasteboard; // @synthesize nsPasteboard=_nsPasteboard;
@property unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pollPastboardChangeTimerQueue; // @synthesize pollPastboardChangeTimerQueue=_pollPastboardChangeTimerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollPastboardChangeTimer; // @synthesize pollPastboardChangeTimer=_pollPastboardChangeTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nsPasteboardQueue; // @synthesize nsPasteboardQueue=_nsPasteboardQueue;
@property unsigned long long refreshResolveCount; // @synthesize refreshResolveCount=_refreshResolveCount;
- (void).cxx_destruct;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)setPasteboardWithItems:(id)arg1 error:(id *)arg2;
- (void)setPasteboardAsyncWithItems:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)syncBarrier;
- (void)sendPasteboardChangedNotification;
- (void)refreshItemsFromNSPasteboard;
- (id)description;
- (void)dealloc;
- (id)initWithNSPasteboard:(id)arg1 refreshResolveCount:(unsigned long long)arg2;
- (id)init;

@end

