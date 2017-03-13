//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOutputStream;

@interface SimVideoFile : NSObject
{
    NSOutputStream *_stream;
    double _timeScale;
}

+ (id)videoFileForOutputStream:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
@property(nonatomic) double timeScale; // @synthesize timeScale=_timeScale;
@property(retain, nonatomic) NSOutputStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)closeFile;
- (void)dealloc;
- (id)initVideoFileForOutputStream:(id)arg1 error:(id *)arg2;

@end

