//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSStylePartInspectorViewController.h"

#import "MSFieldRestoration-Protocol.h"

@class MSAutoSelectingArrayController, MSInspectorSegmentedControl, NSArray, NSDictionary, NSPopUpButton, NSSet, NSTextField;

@interface MSBorderOptionsInspectorViewController : MSStylePartInspectorViewController <MSFieldRestoration>
{
    BOOL _hasOpenPathLayer;
    BOOL _hasPathWithAdjustableCaps;
    NSArray *_filteredLayers;
    NSSet *_startMarkerTypes;
    NSSet *_endMarkerTypes;
    MSAutoSelectingArrayController *_bordersController;
    MSInspectorSegmentedControl *_capSegmentedControl;
    MSInspectorSegmentedControl *_joinSegmentedControl;
    NSPopUpButton *_startDecorationButton;
    NSPopUpButton *_endDecorationButton;
    NSTextField *_dashField1;
    NSTextField *_dashField2;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasPathWithAdjustableCaps; // @synthesize hasPathWithAdjustableCaps=_hasPathWithAdjustableCaps;
@property(nonatomic) BOOL hasOpenPathLayer; // @synthesize hasOpenPathLayer=_hasOpenPathLayer;
@property(retain, nonatomic) NSTextField *dashField2; // @synthesize dashField2=_dashField2;
@property(retain, nonatomic) NSTextField *dashField1; // @synthesize dashField1=_dashField1;
@property(retain, nonatomic) NSPopUpButton *endDecorationButton; // @synthesize endDecorationButton=_endDecorationButton;
@property(retain, nonatomic) NSPopUpButton *startDecorationButton; // @synthesize startDecorationButton=_startDecorationButton;
@property(retain, nonatomic) MSInspectorSegmentedControl *joinSegmentedControl; // @synthesize joinSegmentedControl=_joinSegmentedControl;
@property(retain, nonatomic) MSInspectorSegmentedControl *capSegmentedControl; // @synthesize capSegmentedControl=_capSegmentedControl;
@property(retain, nonatomic) MSAutoSelectingArrayController *bordersController; // @synthesize bordersController=_bordersController;
@property(retain, nonatomic) NSSet *endMarkerTypes; // @synthesize endMarkerTypes=_endMarkerTypes;
@property(retain, nonatomic) NSSet *startMarkerTypes; // @synthesize startMarkerTypes=_startMarkerTypes;
@property(retain, nonatomic) NSArray *filteredLayers; // @synthesize filteredLayers=_filteredLayers;
@property(readonly, copy, nonatomic) NSDictionary *restorableFields;
- (id)impliedDashPatternFromDashPattern:(id)arg1 paddingToLength:(unsigned long long)arg2;
- (id)validDashPatternFromProposedDashPattern:(id)arg1 padIfNeeded:(BOOL)arg2;
- (id)dashFields;
- (void)fillDashPlaceholderFields;
- (void)fillDashFields;
- (void)dashPatternAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)prepareDecorationButtons;
- (void)updateArrowButtons;
- (void)setStyleParts:(id)arg1;
- (void)endDecorationAction:(id)arg1;
- (void)startDecorationAction:(id)arg1;
- (void)reloadData;
- (void)viewDidLoad;

@end

