//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSString;

@interface _TtC6Sketch20ComponentListRowView : NSTableRowView
{
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: renderer
    // Error parsing type: , name: borderRenderingScheme
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) NSString *description;
- (void)updateLayer;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
@property(nonatomic) BOOL selected;
- (BOOL)isSelected;
@property(nonatomic) long long interiorBackgroundStyle;
@property(nonatomic) long long draggingDestinationFeedbackStyle;
@property(nonatomic) long long selectionHighlightStyle;
- (void)didAddSubview:(id)arg1;
@property(nonatomic) BOOL wantsLayer;

@end

