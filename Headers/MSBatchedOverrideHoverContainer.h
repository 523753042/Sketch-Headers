//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSHoverableItem-Protocol.h>

@class MSLayer, MSPath, NSArray;

@interface MSBatchedOverrideHoverContainer : NSObject <MSHoverableItem>
{
    // Error parsing type: , name: hoverContainers
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) MSLayer *hoveredLayer;
- (BOOL)matchesLayerListNode:(id)arg1;
- (BOOL)canBeHoveredOnPage:(id)arg1;
@property(nonatomic, readonly) MSPath *hoverPath;
- (id)initWithBatchedOverrides:(id)arg1;
@property(nonatomic, readonly) NSArray *hoverContainers;

@end

