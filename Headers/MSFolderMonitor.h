//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MSFolderMonitor : NSObject
{
    struct __FSEventStream *_eventStream;
    NSURL *_folderURL;
    CDUnknownBlockType _contentsChangedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType contentsChangedBlock; // @synthesize contentsChangedBlock=_contentsChangedBlock;
@property(copy, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
- (void)restart;
- (void)stop;
- (void)dealloc;
- (void)flush;
- (unsigned int)flags;
- (id)initWithURL:(id)arg1 latency:(double)arg2 contentsChangedBlock:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1 contentsChangedBlock:(CDUnknownBlockType)arg2;

@end

