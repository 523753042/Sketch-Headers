//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSMoment, NSMutableArray, NSString;
@protocol MSHistoryDelegate;

@interface MSHistory : NSObject
{
    BOOL _isCoalescing;
    id <MSHistoryDelegate> _delegate;
    NSString *_nextMomentTitle;
    NSMutableArray *_moments;
    unsigned long long _indexOfNextMoment;
    NSMutableArray *_nextSupplementalActions;
    MSImmutableDocumentData *_currentDocument;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSImmutableDocumentData *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(readonly, nonatomic) NSMutableArray *nextSupplementalActions; // @synthesize nextSupplementalActions=_nextSupplementalActions;
@property(nonatomic) unsigned long long indexOfNextMoment; // @synthesize indexOfNextMoment=_indexOfNextMoment;
@property(retain, nonatomic) NSMutableArray *moments; // @synthesize moments=_moments;
@property(copy, nonatomic) NSString *nextMomentTitle; // @synthesize nextMomentTitle=_nextMomentTitle;
@property(nonatomic) BOOL isCoalescing; // @synthesize isCoalescing=_isCoalescing;
@property(nonatomic) __weak id <MSHistoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ignoreRemotePatches:(id)arg1 changingFrom:(id)arg2 toCurrentDocument:(id)arg3;
- (id)updateDocument:(id)arg1 against:(id)arg2 removingPatchContents:(id)arg3;
- (void)ignoreLocalChangeFrom:(id)arg1 toCurrentDocument:(id)arg2;
- (void)updateAfterHistoryChange:(id)arg1 backwards:(BOOL)arg2;
- (void)commitCurrentMomentIfCoalesePeriodHasExpired;
- (void)commitCurrentMoment;
- (BOOL)progressToNextMoment;
- (BOOL)revertToPreviousMoment;
- (void)removeAllSupplementalActionsWithTarget:(id)arg1;
- (void)addSupplementalActionWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MSMoment *redoMoment;
@property(readonly, nonatomic) MSMoment *undoMoment;
- (void)removeFutureMoments;
- (unsigned long long)updateWithLocalDocumentChanges:(id)arg1;
- (id)init;
- (id)initWithInitialDocument:(id)arg1;

@end

