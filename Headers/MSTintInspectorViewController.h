//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

@class MSTintInspectorItem;

@interface MSTintInspectorViewController : MSMultipleColorStylePartInspectorViewController
{
    MSTintInspectorItem *_inspectorItem;
}

@property(retain, nonatomic) MSTintInspectorItem *inspectorItem; // @synthesize inspectorItem=_inspectorItem;
- (void).cxx_destruct;
- (void)setLayers:(id)arg1;
- (id)contentViews;
- (id)styleParts;
- (long long)advancedOptionsButtonState;
- (void)disabledStylePartsButtonAction:(id)arg1;
- (long long)disabledStylePartsButtonState;
- (void)addStylePartButtonAction:(id)arg1;
- (long long)addStylePartButtonState;
- (unsigned long long)stylePartType;
- (id)title;
- (id)init;

@end

