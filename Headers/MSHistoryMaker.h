//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSHistoryDelegate-Protocol.h>

@class MSHistory, NSString, NSTimer;
@protocol MSHistoryMakerDelegate;

@interface MSHistoryMaker : NSObject <MSHistoryDelegate>
{
    BOOL _fontsDidChange;
    BOOL _isMakingHistory;
    MSHistory *_history;
    id <MSHistoryMakerDelegate> _delegate;
    unsigned long long _state;
    NSTimer *_commitTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *commitTimer; // @synthesize commitTimer=_commitTimer;
@property(nonatomic) BOOL isMakingHistory; // @synthesize isMakingHistory=_isMakingHistory;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) BOOL fontsDidChange; // @synthesize fontsDidChange=_fontsDidChange;
@property(readonly, nonatomic) __weak id <MSHistoryMakerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MSHistory *history; // @synthesize history=_history;
- (void)history:(id)arg1 didCancelMoment:(id)arg2;
- (void)history:(id)arg1 didCommitMoment:(id)arg2 withPatch:(id)arg3;
- (void)history:(id)arg1 willCommitMoment:(id)arg2;
- (id)currentDocumentData:(id)arg1;
- (void)commitTimerFired:(id)arg1;
- (void)startCommitTimer;
- (void)flush;
- (void)installedFontsChanged;
- (void)ignoreRemotePatches:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)resetDocumentInBlock:(CDUnknownBlockType)arg1;
- (BOOL)ignoreDocumentChangesInBlock:(CDUnknownBlockType)arg1;
- (void)moveDocument:(id)arg1 throughHistoryBackInTime:(BOOL)arg2;
- (BOOL)canMoveThroughHistoryBackInTime:(BOOL)arg1;
- (id)momentThroughHistoryBackInTime:(BOOL)arg1;
- (void)makeHistoryIfNecessary;
@property(readonly, nonatomic) BOOL isRedoing;
@property(readonly, nonatomic) BOOL isUndoing;
@property(readonly, nonatomic) BOOL historyIsCoalescing;
- (void)finishCoalescingHistory;
- (void)startCoalescingHistory;
- (void)removeAllSupplementalActionsWithTarget:(id)arg1;
- (void)registerSupplementalActionWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *redoTitle;
@property(readonly, nonatomic) NSString *undoTitle;
- (void)registerHistoryMomentTitle:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 initialDocumentData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

