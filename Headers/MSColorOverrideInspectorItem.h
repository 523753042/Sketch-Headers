//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideInspectorItem.h"

#import "MSColorInspectorDelegate-Protocol.h"
#import "MSFieldRestoration-Protocol.h"
#import "MSStylePartPreviewButtonDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class BCPopover, MSColor, MSColorInspector, MSInlineUpDownTextField, MSMathInspectorValueAdaptor, MSOverrideTextField, MSStylePartPreviewButton, NSArrayController, NSDictionary, NSString;

@interface MSColorOverrideInspectorItem : MSOverrideInspectorItem <MSStylePartPreviewButtonDelegate, MSColorInspectorDelegate, NSTextFieldDelegate, MSFieldRestoration>
{
    BOOL _hasPendingChanges;
    BCPopover *_popover;
    MSColorInspector *_colorInspector;
    MSMathInspectorValueAdaptor *_opacityAdaptor;
    NSArrayController *_colors;
    MSOverrideTextField *_hexField;
    MSStylePartPreviewButton *_colorView;
    MSInlineUpDownTextField *_opacityField;
}

+ (double)heightForOverride:(id)arg1 layers:(id)arg2 shouldShowLabel:(BOOL)arg3 indentationLevel:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MSInlineUpDownTextField *opacityField; // @synthesize opacityField=_opacityField;
@property(retain, nonatomic) MSStylePartPreviewButton *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) MSOverrideTextField *hexField; // @synthesize hexField=_hexField;
@property(retain, nonatomic) NSArrayController *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *opacityAdaptor; // @synthesize opacityAdaptor=_opacityAdaptor;
@property(nonatomic) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) __weak MSColorInspector *colorInspector; // @synthesize colorInspector=_colorInspector;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(readonly, copy, nonatomic) NSDictionary *restorableFields;
- (void)refreshIfNecessary:(id)arg1;
- (void)applyUserSelectedColor:(id)arg1;
- (id)currentSwatchReference;
- (id)currentSwatch;
- (void)showColorVariablesPopoverMenu:(id)arg1;
- (BOOL)previewButtonShouldShowColorVariablesButton;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)updatePopoverColor;
- (void)closePopover;
- (void)togglePopover:(id)arg1;
- (void)colorChanged:(id)arg1;
- (void)opacityFieldAction:(id)arg1;
- (void)hexFieldAction:(id)arg1;
- (void)updateDisplayedValues;
@property(readonly, nonatomic) MSColor *color;
- (void)refreshAction:(id)arg1;
- (id)labelWithString:(id)arg1 ofClass:(Class)arg2;
- (id)labelWithString:(id)arg1;
- (id)createHexField;
- (id)createOpacityField;
- (id)createColorWellButton;
- (id)controlViewForEditingOverride;
- (void)dismissViewController:(id)arg1;
- (void)viewWillDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

