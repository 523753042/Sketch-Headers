//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayerArray, MSPage;

@interface MSLayerSelector : NSObject
{
    BOOL _contextualSelectAll;
    BOOL _selectAllCanEscalate;
    MSPage *_page;
    MSLayerArray *_initialSelection;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL selectAllCanEscalate; // @synthesize selectAllCanEscalate=_selectAllCanEscalate;
@property(nonatomic) BOOL contextualSelectAll; // @synthesize contextualSelectAll=_contextualSelectAll;
@property(copy, nonatomic) MSLayerArray *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (BOOL)shouldUseArtboardSelectionModeForRect:(struct CGRect)arg1 extendSelection:(BOOL)arg2 options:(unsigned long long)arg3;
- (void)updateSelectionWithRect:(struct CGRect)arg1 extendSelection:(BOOL)arg2 options:(unsigned long long)arg3;
- (id)init;
- (id)selectAll;

@end

