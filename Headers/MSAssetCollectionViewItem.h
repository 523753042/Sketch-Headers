//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMenuItem, NSString, NSTextField, NSView;
@protocol MSAsset, MSAssetCollectionViewItemDelegate;

@interface MSAssetCollectionViewItem : NSCollectionViewItem <NSMenuDelegate>
{
    BOOL _assetHighlighted;
    id <MSAssetCollectionViewItemDelegate> _delegate;
    NSArray *_alternativeCollections;
    id <MSAsset> _asset;
    NSString *_assetName;
    NSView *_previewView;
    NSTextField *_nameField;
    NSMenuItem *_menuItemCopy;
    NSLayoutConstraint *_leadingPreviewConstraint;
    unsigned long long _displayMode;
    unsigned long long _itemSizeMode;
}

+ (id)drawAssetViewBackgroundReturningContentPathInBounds:(struct CGRect)arg1 highlighted:(BOOL)arg2 scale:(double)arg3;
@property(nonatomic) unsigned long long itemSizeMode; // @synthesize itemSizeMode=_itemSizeMode;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) NSLayoutConstraint *leadingPreviewConstraint; // @synthesize leadingPreviewConstraint=_leadingPreviewConstraint;
@property(retain, nonatomic) NSMenuItem *menuItemCopy; // @synthesize menuItemCopy=_menuItemCopy;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) NSView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(retain, nonatomic) id <MSAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSArray *alternativeCollections; // @synthesize alternativeCollections=_alternativeCollections;
@property(nonatomic) BOOL assetHighlighted; // @synthesize assetHighlighted=_assetHighlighted;
@property(nonatomic) __weak id <MSAssetCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commitNameEditing:(id)arg1;
- (void)delete:(id)arg1;
- (void)rename:(id)arg1;
- (void)moveToAssetCollection:(id)arg1;
- (void)copyToAssetCollection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)endEditingMode;
- (void)beginNameEditingMode;
- (BOOL)shouldStartEditingNameWithEvent:(id)arg1;
- (void)dealloc;
- (void)updateUI;
- (id)effectiveAssetName;
- (id)defaultAssetName;
- (void)layoutBackgroundView:(id)arg1;
- (void)drawBackgroundView:(id)arg1 dirtyRect:(struct CGRect)arg2;
- (void)drawAssetView:(id)arg1 dirtyRect:(struct CGRect)arg2;
- (BOOL)shouldDrawHighlighted;
- (void)setSelected:(BOOL)arg1;
- (id)previewColorSpace;
- (id)createNameField;
- (void)setViewsNeedDisplay;
- (void)viewDidLoad;
- (void)setAsset:(id)arg1 name:(id)arg2;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

