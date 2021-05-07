//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSBox, NSButton, NSImageView, NSProgressIndicator, NSStackView, NSTableView, NSTextField, _TtC6Sketch12MSAvatarView;

@interface _TtC6Sketch23MSAccountViewController : NSViewController
{
    // Error parsing type: , name: accountStackView
    // Error parsing type: , name: cloudImageView
    // Error parsing type: , name: accountImageView
    // Error parsing type: , name: accountSettingsButton
    // Error parsing type: , name: signoutButton
    // Error parsing type: , name: signinButton
    // Error parsing type: , name: tableView
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: contextLabel
    // Error parsing type: , name: state
    // Error parsing type: , name: teamRowObjects
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showAccountSettings:(id)arg1;
- (void)signIn:(id)arg1;
- (void)signoutUser:(id)arg1;
- (void)userDidChange:(id)arg1;
- (void)authenticationDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear;
@property(nonatomic, retain) NSTextField *contextLabel; // @synthesize contextLabel;
@property(nonatomic, retain) NSTextField *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSBox *separatorView; // @synthesize separatorView;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) NSTableView *tableView; // @synthesize tableView;
@property(nonatomic, retain) NSButton *signinButton; // @synthesize signinButton;
@property(nonatomic, retain) NSButton *signoutButton; // @synthesize signoutButton;
@property(nonatomic, retain) NSButton *accountSettingsButton; // @synthesize accountSettingsButton;
@property(nonatomic, retain) _TtC6Sketch12MSAvatarView *accountImageView; // @synthesize accountImageView;
@property(nonatomic, retain) NSImageView *cloudImageView; // @synthesize cloudImageView;
@property(nonatomic, retain) NSStackView *accountStackView; // @synthesize accountStackView;

@end

