//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (Sketch)
@property(nonatomic, readonly) double preferredImageScale;
- (void)animateToFrameOriginX:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateToFrameOrigin:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateToFrameOriginX:(long long)arg1;
@property(readonly, nonatomic) BOOL canBeKeyView;
- (id)preferredNextKeyView;
- (id)enclosingStackView;
- (BOOL)clickShouldDismissPopover:(id)arg1;
- (struct NSEdgeInsets)separatorInsetBetweenSelfAndView:(id)arg1;
@property(readonly, nonatomic) BOOL wantsSeparator;
- (BOOL)wantsSeparatorBetweenSelfAndView:(id)arg1;
- (id)viewHistoryMaker;
@end

