//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSPage.h>

#import <SketchModel/MSRootLayer-Protocol.h>

@class MSArtboardGroup, MSLayerArray, MSLayerGroup, MSLayoutGrid, MSRulerData, MSSimpleGrid, NSArray, NSMutableSet, NSString;
@protocol MSLayerCoordinateSpace, MSRootLayer;

@interface MSPage : _MSPage <MSRootLayer>
{
    NSMutableSet *_selectedLayerIDs;
    MSArtboardGroup *_currentArtboard;
    id <MSLayerCoordinateSpace> _rulerCoordinateSpace;
    NSArray *_cachedExportableLayers;
    NSArray *_cachedArtboards;
    NSArray *_cachedSymbolMasters;
    MSLayerArray *_cachedSelectedLayers;
}

+ (id)defaultSymbolsPageName;
+ (id)page;
- (void).cxx_destruct;
@property(retain, nonatomic) MSLayerArray *cachedSelectedLayers; // @synthesize cachedSelectedLayers=_cachedSelectedLayers;
@property(retain, nonatomic) NSArray *cachedSymbolMasters; // @synthesize cachedSymbolMasters=_cachedSymbolMasters;
@property(retain, nonatomic) NSArray *cachedArtboards; // @synthesize cachedArtboards=_cachedArtboards;
@property(retain, nonatomic) NSArray *cachedExportableLayers; // @synthesize cachedExportableLayers=_cachedExportableLayers;
- (void)refaultChildrenAgainst:(id)arg1;
- (BOOL)ancestorsOrSelfHaveInferredLayout;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)isVisible;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (id)parentGroupForInserting;
- (struct CGPoint)originForNewArtboardWithSize:(struct CGSize)arg1;
- (id)artboardsMatchingWidth:(double)arg1;
- (BOOL)contentIntersectsWithRect:(struct CGRect)arg1;
- (BOOL)hasClickThrough;
- (BOOL)limitsSelectionToBounds;
@property(readonly, nonatomic) MSRulerData *currentVerticalRulerData;
@property(readonly, nonatomic) MSRulerData *currentHorizontalRulerData;
- (void)moveLayersToArtboards;
- (void)rectSizeDidChange:(id)arg1;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
- (id)artboardWithID:(id)arg1;
@property(readonly, nonatomic) NSArray *symbols;
@property(readonly, nonatomic) NSArray *artboards;
- (id)topLevelLayersMatchingTrait:(unsigned long long)arg1;
- (id)parentRoot;
@property(readonly, nonatomic) MSLayerGroup<MSRootLayer> *currentRoot;
- (id)ancestorsAndSelfTransforms;
- (id)parentPage;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (BOOL)fixGeometryWithOptions:(long long)arg1;
- (BOOL)layers:(id)arg1 fitOnArtboard:(id)arg2;
- (id)destinationArtboardForLayers:(id)arg1 artboards:(id)arg2;
- (BOOL)addOrRemoveLayerFromArtboardIfNecessary:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)tryToMoveLayer:(id)arg1 toArtboards:(id)arg2;
@property(readonly, nonatomic) NSArray *exportableLayers;
- (id)symbolLayersInGroup:(id)arg1;
- (id)artboardForSlice:(id)arg1 inArtboards:(id)arg2;
- (id)rulerCoordinateSpace;
@property(nonatomic) struct CGPoint rulerBase;
- (struct CGPoint)origin;
@property(readonly, nonatomic) struct CGRect rect;
- (id)transform;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
@property(nonatomic) __weak MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
- (BOOL)canContainLayer:(id)arg1;
- (void)changeSelectionByDeselectingLayers:(id)arg1;
- (void)changeSelectionBySelectingLayersInSet:(id)arg1;
- (void)changeSelectionBySelectingLayers:(id)arg1;
- (void)changeSelectionUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isLayerSelected:(id)arg1;
- (id)layersWithIDs:(id)arg1;
- (id)layersByObjectID;
- (id)selectedLayers;
@property(retain, nonatomic) NSMutableSet *selectedLayerIDs; // @synthesize selectedLayerIDs=_selectedLayerIDs;
- (void)ensureSelectedLayersAreStillValid;
- (id)parentGroup;
- (void)objectDidInit;
- (void)resetSelectedLayerIDs:(id)arg1;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (BOOL)isTooSmallForPreciseHitTestingAtZoomValue:(double)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 zoomValue:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

