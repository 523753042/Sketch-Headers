//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSOverrideInspectorItem.h"

@class MSForeignObjectProvider, MSInspectorPopoverButton, MSStyleOverridePopupButton, NSControl, NSLayoutConstraint;

@interface MSStyleOverrideInspectorItem : MSOverrideInspectorItem
{
    NSControl *_labelView;
    NSLayoutConstraint *_labelConstraint;
    MSStyleOverridePopupButton *_overrideControl;
    MSInspectorPopoverButton *_popoverButton;
    MSForeignObjectProvider *_menuObjectProvider;
}

@property(readonly, nonatomic) MSForeignObjectProvider *menuObjectProvider; // @synthesize menuObjectProvider=_menuObjectProvider;
@property(retain, nonatomic) MSInspectorPopoverButton *popoverButton; // @synthesize popoverButton=_popoverButton;
@property(retain, nonatomic) MSStyleOverridePopupButton *overrideControl; // @synthesize overrideControl=_overrideControl;
@property(retain, nonatomic) NSLayoutConstraint *labelConstraint; // @synthesize labelConstraint=_labelConstraint;
@property(retain, nonatomic) NSControl *labelView; // @synthesize labelView=_labelView;
- (void).cxx_destruct;
- (void)setDisplaysLabel:(BOOL)arg1;
- (BOOL)displaysLabel;
- (void)overrideValueAction:(id)arg1;
- (id)replaceStyleAction;
- (void)pickStyle:(id)arg1;
- (id)currentStyleReference;
- (id)currentStyle;
- (void)build;
- (void)viewWillAppear;
- (id)initWithPrimaryOverrideRepresentation:(id)arg1;

@end

