//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSLayerTraits-Protocol.h>

@class MSImmutableDocumentData, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid;

@protocol MSImmutableRootLayer <MSLayerTraits>
@property(readonly, nonatomic) struct CGPoint rulerBase;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;

@optional
- (struct CGRect)contentBoundsForDocument:(MSImmutableDocumentData *)arg1;
@end

