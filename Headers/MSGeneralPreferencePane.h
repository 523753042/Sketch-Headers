//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPreferencePane.h"

@class NSImageView, NSLayoutConstraint, NSPopUpButton, NSTextField, NSView;

@interface MSGeneralPreferencePane : MSPreferencePane
{
    NSTextField *_defaultColorSpaceDescriptionLabel;
    NSPopUpButton *_defaultColorSpacePopUpButton;
    NSImageView *_appearancePreview;
    NSPopUpButton *_appAppearanceButton;
    NSPopUpButton *_canvasAppearanceButton;
    NSTextField *_appAppearanceLabel;
    NSTextField *_canvasAppearanceLabel;
    NSView *_mainContainerView;
    NSLayoutConstraint *_cloudDocumentSectionCollapseConstraint;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *cloudDocumentSectionCollapseConstraint; // @synthesize cloudDocumentSectionCollapseConstraint=_cloudDocumentSectionCollapseConstraint;
@property(nonatomic) __weak NSView *mainContainerView; // @synthesize mainContainerView=_mainContainerView;
@property(nonatomic) __weak NSTextField *canvasAppearanceLabel; // @synthesize canvasAppearanceLabel=_canvasAppearanceLabel;
@property(nonatomic) __weak NSTextField *appAppearanceLabel; // @synthesize appAppearanceLabel=_appAppearanceLabel;
@property(nonatomic) __weak NSPopUpButton *canvasAppearanceButton; // @synthesize canvasAppearanceButton=_canvasAppearanceButton;
@property(nonatomic) __weak NSPopUpButton *appAppearanceButton; // @synthesize appAppearanceButton=_appAppearanceButton;
@property(nonatomic) __weak NSImageView *appearancePreview; // @synthesize appearancePreview=_appearancePreview;
@property(nonatomic) __weak NSPopUpButton *defaultColorSpacePopUpButton; // @synthesize defaultColorSpacePopUpButton=_defaultColorSpacePopUpButton;
@property(nonatomic) __weak NSTextField *defaultColorSpaceDescriptionLabel; // @synthesize defaultColorSpaceDescriptionLabel=_defaultColorSpaceDescriptionLabel;
- (void)canvasColorAction:(id)arg1;
- (void)appearanceColorAction:(id)arg1;
- (void)refreshPreviewImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)watchAppearanceChanges;
- (void)analyticsAction:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;

@end

