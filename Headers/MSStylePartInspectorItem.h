//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSArrayController;

@interface MSStylePartInspectorItem : NSViewController
{
    NSArray *_styleParts;
    NSArrayController *_stylesController;
}

@property(retain, nonatomic) NSArrayController *stylesController; // @synthesize stylesController=_stylesController;
@property(retain, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *layers;
- (void)sectionWithIdentifierWillCollapse:(id)arg1;
- (void)updateDisplayedValues;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

