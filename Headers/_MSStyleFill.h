//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSStyleBasicFill.h>

@class MSImageData;

@interface _MSStyleFill : MSStyleBasicFill
{
    MSImageData *_image;
    long long _noiseIndex;
    double _noiseIntensity;
    long long _patternFillType;
    double _patternTileScale;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
+ (id)defaultFillColor;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_patternTileScale:(double)arg1;
- (void)setRaw_patternFillType:(long long)arg1;
- (void)setRaw_noiseIntensity:(double)arg1;
- (void)setRaw_noiseIndex:(long long)arg1;
- (void)setRaw_image:(id)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) double patternTileScale; // @synthesize patternTileScale=_patternTileScale;
@property(nonatomic) long long patternFillType; // @synthesize patternFillType=_patternFillType;
@property(nonatomic) double noiseIntensity; // @synthesize noiseIntensity=_noiseIntensity;
@property(nonatomic) long long noiseIndex; // @synthesize noiseIndex=_noiseIndex;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

