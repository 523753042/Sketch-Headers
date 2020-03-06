//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

#import "NSMenuDelegate-Protocol.h"

@class MSBackgroundBlurInspectorItem, MSMotionBlurInspectorItem, MSPaddingInspectorItem, MSSeparatorlessView, MSSimpleBlurInspectorItem, MSZoomBlurInspectorItem, NSMenuItem, NSString;

@interface MSBlurInspectorViewController : MSMultipleColorStylePartInspectorViewController <NSMenuDelegate>
{
    NSMenuItem *_backgroundBlurMenuItem;
    NSMenuItem *_multipleBlursMenuItem;
    MSSeparatorlessView *_paddingView;
    MSSimpleBlurInspectorItem *_simpleBlurItem;
    MSMotionBlurInspectorItem *_motionBlurItem;
    MSZoomBlurInspectorItem *_zoomBlurItem;
    MSBackgroundBlurInspectorItem *_backgroundBlurItem;
    MSPaddingInspectorItem *_paddingItem;
}

@property(retain, nonatomic) MSPaddingInspectorItem *paddingItem; // @synthesize paddingItem=_paddingItem;
@property(retain, nonatomic) MSBackgroundBlurInspectorItem *backgroundBlurItem; // @synthesize backgroundBlurItem=_backgroundBlurItem;
@property(retain, nonatomic) MSZoomBlurInspectorItem *zoomBlurItem; // @synthesize zoomBlurItem=_zoomBlurItem;
@property(retain, nonatomic) MSMotionBlurInspectorItem *motionBlurItem; // @synthesize motionBlurItem=_motionBlurItem;
@property(retain, nonatomic) MSSimpleBlurInspectorItem *simpleBlurItem; // @synthesize simpleBlurItem=_simpleBlurItem;
@property(retain, nonatomic) MSSeparatorlessView *paddingView; // @synthesize paddingView=_paddingView;
@property(retain, nonatomic) NSMenuItem *multipleBlursMenuItem; // @synthesize multipleBlursMenuItem=_multipleBlursMenuItem;
@property(retain, nonatomic) NSMenuItem *backgroundBlurMenuItem; // @synthesize backgroundBlurMenuItem=_backgroundBlurMenuItem;
- (void).cxx_destruct;
- (id)disabledStylePartsButtonTooltip;
- (id)addStylePartButonTooltip;
- (id)styleParts;
- (void)setLayers:(id)arg1;
- (id)blurKinds;
- (id)contentViews;
- (void)reloadInspectorStack:(id)arg1;
- (void)viewDidLoad;
- (void)disabledStylePartsButtonAction:(id)arg1;
- (void)addStylePartButtonAction:(id)arg1;
- (long long)disabledStylePartsButtonState;
- (void)addStylePartHeaderWideAction:(id)arg1;
- (long long)addStylePartHeaderWideButtonState;
- (long long)addStylePartButtonState;
- (long long)advancedOptionsButtonState;
- (unsigned long long)stylePartType;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

