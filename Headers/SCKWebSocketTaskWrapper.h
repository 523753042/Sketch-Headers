//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionWebSocketTask;

@interface SCKWebSocketTaskWrapper : NSObject
{
    NSURLSessionWebSocketTask *_task;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionWebSocketTask *task; // @synthesize task=_task;
@property(readonly) long long state;
- (void)receiveWrapperMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)cancel;
- (void)resume;
- (id)initWithTask:(id)arg1;

@end

