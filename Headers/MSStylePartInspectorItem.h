//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSArrayController, _TtC17SketchControllers26MSModelObjectChangeTracker;

@interface MSStylePartInspectorItem : NSViewController
{
    _TtC17SketchControllers26MSModelObjectChangeTracker *_changeTracker;
    NSArrayController *_arrayController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
- (void)refreshIfNecessary:(id)arg1;
- (BOOL)matchesStyleParts:(id)arg1;
@property(readonly, nonatomic) NSArray *layers;
- (void)updateDisplayedValues;
@property(retain, nonatomic) NSArray *styleParts;
- (void)viewDidLoad;
@property(readonly, nonatomic) _TtC17SketchControllers26MSModelObjectChangeTracker *changeTracker; // @synthesize changeTracker=_changeTracker;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

