//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSimulator/NSObject-Protocol.h>

@class NSObject, NSString, SimPasteboardItem;
@protocol NSSecureCoding;

@protocol SimPasteboardItemDataProvider <NSObject>
- (NSObject<NSSecureCoding> *)retrieveValueForSimPasteboardItem:(SimPasteboardItem *)arg1 type:(NSString *)arg2;
@end
