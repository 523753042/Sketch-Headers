//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP17SketchControllers27MSCollectionOverlayDelegate_-Protocol.h"

@class MSPath, MSPointSelectionOverlayLayout, NSIndexPath, _TtC17SketchControllers19MSCollectionOverlay;

@protocol MSPointSelectionOverlayLayoutDelegate <_TtP17SketchControllers27MSCollectionOverlayDelegate_>
- (struct CGPoint)pointSelectionOverlay:(_TtC17SketchControllers19MSCollectionOverlay *)arg1 layout:(MSPointSelectionOverlayLayout *)arg2 locationOfHandleAtIndexPath:(NSIndexPath *)arg3;

@optional
- (MSPath *)pointSelectionOverlay:(_TtC17SketchControllers19MSCollectionOverlay *)arg1 layout:(MSPointSelectionOverlayLayout *)arg2 pathForConnectingHandlesInSection:(long long)arg3;
@end

