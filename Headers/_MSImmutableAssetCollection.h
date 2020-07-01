//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class MSImmutableImageCollection, NSArray;

@interface _MSImmutableAssetCollection : MSImmutableModelObject
{
    NSArray *_images;
    NSArray *_colorAssets;
    NSArray *_exportPresets;
    NSArray *_gradientAssets;
    MSImmutableImageCollection *_imageCollection;
}

+ (Class)mutableClass;
- (void).cxx_destruct;
@property(retain, nonatomic) MSImmutableImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) NSArray *gradientAssets; // @synthesize gradientAssets=_gradientAssets;
@property(retain, nonatomic) NSArray *exportPresets; // @synthesize exportPresets=_exportPresets;
@property(retain, nonatomic) NSArray *colorAssets; // @synthesize colorAssets=_colorAssets;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (void)copyPropertiesFromObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

