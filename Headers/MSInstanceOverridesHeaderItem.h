//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class NSButton;

@interface MSInstanceOverridesHeaderItem : MSInspectorItem
{
    NSButton *_sizeToFitButton;
    NSButton *_refreshDataButton;
    NSButton *_trash;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *trash; // @synthesize trash=_trash;
@property(retain, nonatomic) NSButton *refreshDataButton; // @synthesize refreshDataButton=_refreshDataButton;
@property(retain, nonatomic) NSButton *sizeToFitButton; // @synthesize sizeToFitButton=_sizeToFitButton;
- (void)refreshIfNecessary:(id)arg1;
- (void)refreshDataButton:(id)arg1;
- (void)sizeToFitAction:(id)arg1;
- (void)updateRefreshDataButton;
- (void)updateSizeToFitIcon;
- (void)updateTrashIcon;
- (void)viewWillAppear;

@end

