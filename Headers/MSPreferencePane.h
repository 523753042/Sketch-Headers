//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSPreferencesController;

@interface MSPreferencePane : NSViewController
{
    MSPreferencesController *_preferencesController;
}

+ (id)nibName;
+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MSPreferencesController *preferencesController; // @synthesize preferencesController=_preferencesController;
- (void)didSwitchToPane;
- (void)dismissAlertSheet;
- (void)dismissAlertWindow:(id)arg1;
- (id)initWithPreferencesController:(id)arg1;

@end

