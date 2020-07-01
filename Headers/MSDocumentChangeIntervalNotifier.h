//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, NSMapTable;

@interface MSDocumentChangeIntervalNotifier : NSObject
{
    NSMapTable *_observerToBlock;
    MSImmutableDocumentData *_mostRecentDocument;
    MSImmutableDocumentData *_previousDocument;
    unsigned long long _frequency;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
@property(retain, nonatomic) MSImmutableDocumentData *previousDocument; // @synthesize previousDocument=_previousDocument;
@property(retain, nonatomic) MSImmutableDocumentData *mostRecentDocument; // @synthesize mostRecentDocument=_mostRecentDocument;
@property(retain, nonatomic) NSMapTable *observerToBlock; // @synthesize observerToBlock=_observerToBlock;
- (void)sendUpdateToObservers;
- (void)coalesceDocumentUpdate;
- (void)processDocumentUpdate:(id)arg1;
- (void)unregisterAllObservers;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithUpdateFrequency:(unsigned long long)arg1;

@end

