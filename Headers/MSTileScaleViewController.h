//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSInlineUpDownTextField, MSMathInspectorValueAdaptor, NSArrayController;

@interface MSTileScaleViewController : NSViewController
{
    NSArrayController *_stylesController;
    MSInlineUpDownTextField *_scaleField;
    MSMathInspectorValueAdaptor *_scaleAdaptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *scaleAdaptor; // @synthesize scaleAdaptor=_scaleAdaptor;
@property(retain, nonatomic) MSInlineUpDownTextField *scaleField; // @synthesize scaleField=_scaleField;
@property(retain, nonatomic) NSArrayController *stylesController; // @synthesize stylesController=_stylesController;
- (void)viewDidLoad;
- (id)initWithStylesController:(id)arg1;

@end

