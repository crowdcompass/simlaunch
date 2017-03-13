//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SimulatorKit/SimVideoMP4File.h>

@interface SimVideoFragmentedMP4File : SimVideoMP4File
{
    BOOL _firstFrame;
    unsigned long long _sequenceNumber;
}

@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL firstFrame; // @synthesize firstFrame=_firstFrame;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeMovieWithMedia:(BOOL)arg1;
- (id)initVideoFileForOutputStream:(id)arg1 error:(id *)arg2;

@end

