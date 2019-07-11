//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSImmutableSymbolInstance.h>

#import <SketchModel/MSFlowContainmentCheck-Protocol.h>

@class MSImmutableSymbolMaster, NSArray, NSDictionary;

@interface MSImmutableSymbolInstance : _MSImmutableSymbolInstance <MSFlowContainmentCheck>
{
    NSArray *_calculatedAvailableOverrides;
    // Error parsing type: A^^v, name: _availableOverridesInDocumentAtomicPointer
    NSArray *_calculatedAvailableOverrideValues;
    // Error parsing type: A^^v, name: _availableOverrideValuesInDocumentAtomicPointer
    MSImmutableSymbolMaster *_cachedModifiedSymbolMaster;
}

+ (id)defaultName;
+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
@property __weak MSImmutableSymbolMaster *cachedModifiedSymbolMaster; // @synthesize cachedModifiedSymbolMaster=_cachedModifiedSymbolMaster;
- (void).cxx_destruct;
- (BOOL)shouldWrapDetachedSymbolMasterInGroup:(id)arg1;
- (id)detachedLayerGroupRecursively:(BOOL)arg1 withDocument:(id)arg2 resizeToNaturalSizeOnAxes:(unsigned long long)arg3 desiredWidth:(double)arg4 visitedSymbols:(id)arg5 skipCache:(BOOL)arg6;
- (id)createDetachedLayerGroupRecursively:(BOOL)arg1 withDocument:(id)arg2 resizeToNaturalSizeOnAxes:(unsigned long long)arg3 desiredWidth:(double)arg4 visitedSymbols:(id)arg5 symbol:(id)arg6;
- (id)detachedGroupCacheKeyInDocument:(id)arg1 detachRecursively:(BOOL)arg2;
- (id)modifiedMasterInDocument:(id)arg1;
- (id)prepareModifiedMasterInDocument:(id)arg1;
- (id)modifiedMasterCacheKeyInDocument:(id)arg1;
- (id)calculatePathInBoundsInDocument:(id)arg1 asSubpath:(BOOL)arg2 visitedSymbols:(id)arg3;
- (BOOL)shouldCreateModifiedMasterForMaster:(id)arg1 inDocument:(id)arg2;
- (id)availableOverrideValuesWithDocument:(id)arg1;
- (id)availableOverridesWithDocument:(id)arg1;
- (double)scale;
- (BOOL)isScaled;
- (struct CGRect)paddedInfluenceRect:(struct CGRect)arg1 withPaddingsFromMasterInDocument:(id)arg2 visitedSymbols:(id)arg3;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (struct CGRect)influenceRectForBoundsOrCalculateInBlock:(CDUnknownBlockType)arg1;
- (id)overridesFromGroupForMigration:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (id)initWithMinimalSetup;
- (id)keysDifferingFromObject:(id)arg1;
- (id)initWithGroupForMigration:(id)arg1;
- (id)firstFlowWithSymbolsFromDocument:(id)arg1 visited:(id)arg2;
@property(readonly, nonatomic) NSDictionary *overrides;
- (id)overridePointAttributeNamesForOverridePropertyMigration;
- (BOOL)differsFromLayer:(id)arg1;
- (BOOL)shadowsFollowRotation;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)ensureOverrideValuesAreValidAndUnique;
- (id)updateOverridesDictionary:(id)arg1 withObjectIDMapping:(id)arg2 afterChangingSymbolMasterWithID:(id)arg3 currentID:(id)arg4;
- (void)updateOverridesWithObjectIDMapping:(id)arg1 afterChangingSymbolMasterWithID:(id)arg2;
- (id)overridesWithGridIndexRemoved:(id)arg1;
- (void)migratePropertiesFromV96OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV89OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV84OrEarlierWithUnarchiver:(id)arg1;
- (id)detachedMasterInDocument:(id)arg1 withCache:(id)arg2;
- (id)overrideMatchingPoint:(id)arg1 inDocument:(id)arg2;
- (id)calculateAvailableOverridesWithDocument:(id)arg1;
- (id)overridePointsInDocument:(id)arg1;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;

@end

