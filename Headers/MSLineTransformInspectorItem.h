//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSInspectorMathValueAdaptorDelegate-Protocol.h"

@class MSInlineUpDownTextField, MSMathInspectorValueAdaptor, NSButton, NSString;

@interface MSLineTransformInspectorItem : MSInspectorItem <MSInspectorMathValueAdaptorDelegate>
{
    MSInlineUpDownTextField *_lengthField;
    MSInlineUpDownTextField *_rotationField;
    NSButton *_flipHorizontalButton;
    NSButton *_flipVerticalButton;
    MSMathInspectorValueAdaptor *_lengthAdapter;
    MSMathInspectorValueAdaptor *_rotationAdaptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *rotationAdaptor; // @synthesize rotationAdaptor=_rotationAdaptor;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *lengthAdapter; // @synthesize lengthAdapter=_lengthAdapter;
@property(retain, nonatomic) NSButton *flipVerticalButton; // @synthesize flipVerticalButton=_flipVerticalButton;
@property(retain, nonatomic) NSButton *flipHorizontalButton; // @synthesize flipHorizontalButton=_flipHorizontalButton;
@property(retain, nonatomic) MSInlineUpDownTextField *rotationField; // @synthesize rotationField=_rotationField;
@property(retain, nonatomic) MSInlineUpDownTextField *lengthField; // @synthesize lengthField=_lengthField;
- (void)updateButtonState:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateDisplayedValues;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

