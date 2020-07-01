//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSStreamDelegate-Protocol.h>
#import <SketchCloudKit/PSWebSocketDriverDelegate-Protocol.h>

@class NSData, NSInputStream, NSMutableArray, NSMutableURLRequest, NSOutputStream, NSString, NSURLRequest, PSWebSocketBuffer, PSWebSocketDriver;
@protocol OS_dispatch_queue, PSWebSocketDelegate;

@interface PSWebSocket : NSObject <NSStreamDelegate, PSWebSocketDriverDelegate>
{
    long long _mode;
    NSMutableURLRequest *_request;
    NSObject<OS_dispatch_queue> *_workQueue;
    PSWebSocketDriver *_driver;
    PSWebSocketBuffer *_inputBuffer;
    PSWebSocketBuffer *_outputBuffer;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    long long _readyState;
    BOOL _secure;
    BOOL _negotiatedSSL;
    BOOL _opened;
    BOOL _closeWhenFinishedOutput;
    BOOL _sentClose;
    BOOL _failed;
    BOOL _inputPaused;
    BOOL _outputPaused;
    long long _closeCode;
    NSString *_closeReason;
    NSMutableArray *_pingHandlers;
    BOOL _pumpingInput;
    BOOL _pumpingOutput;
    id <PSWebSocketDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)serverSocketWithRequest:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
+ (id)clientSocketWithRequest:(id)arg1;
+ (BOOL)isWebSocketRequest:(id)arg1;
- (void).cxx_destruct;
@property BOOL pumpingOutput; // @synthesize pumpingOutput=_pumpingOutput;
@property BOOL pumpingInput; // @synthesize pumpingInput=_pumpingInput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <PSWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)dealloc;
- (void)executeDelegateAndWait:(CDUnknownBlockType)arg1;
- (void)executeDelegate:(CDUnknownBlockType)arg1;
- (void)executeWorkAndWait:(CDUnknownBlockType)arg1;
- (void)executeWork:(CDUnknownBlockType)arg1;
- (BOOL)askDelegateToEvaluateServerTrust:(struct __SecTrust *)arg1;
- (void)notifyDelegateDidFlushOutput;
- (void)notifyDelegateDidFlushInput;
- (void)notifyDelegateDidCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(BOOL)arg3;
- (void)notifyDelegateDidFailWithError:(id)arg1;
- (void)notifyDelegateDidReceiveMessage:(id)arg1;
- (void)notifyDelegateDidOpen;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)driver:(id)arg1 write:(id)arg2;
- (void)driver:(id)arg1 didReceivePong:(id)arg2;
- (void)driver:(id)arg1 didReceivePing:(id)arg2;
- (void)driver:(id)arg1 didReceiveMessage:(id)arg2;
- (void)driver:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3;
- (void)driver:(id)arg1 didFailWithError:(id)arg2;
- (void)driverDidOpen:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)failWithCode:(long long)arg1 reason:(id)arg2;
- (void)pumpOutput;
- (void)pumpInput;
- (void)negotiateSSL:(id)arg1;
- (void)disconnect;
- (void)disconnectGracefully;
- (void)connect;
- (void)setStreamProperty:(void *)arg1 forKey:(id)arg2;
- (void *)copyStreamPropertyForKey:(id)arg1;
- (void)_closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)closeAndWaitWithCode:(long long)arg1 reason:(id)arg2;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)close;
- (void)ping:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)open;
- (id)initServerWithRequest:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)initClientSocketWithRequest:(id)arg1;
- (id)initWithMode:(long long)arg1 request:(id)arg2;
@property(getter=isOutputPaused) BOOL outputPaused; // @synthesize outputPaused=_outputPaused;
@property(getter=isInputPaused) BOOL inputPaused; // @synthesize inputPaused=_inputPaused;
- (id)remoteHost;
@property(readonly, nonatomic) NSData *remoteAddress;
@property(readonly) long long readyState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

