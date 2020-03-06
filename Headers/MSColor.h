//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSColor.h>

#import <SketchModel/MSAsset-Protocol.h>
#import <SketchModel/MSColor-Protocol.h>

@class NSString;

@interface MSColor : _MSColor <MSAsset, MSColor>
{
}

+ (id)rgbColorRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3;
+ (id)colorWithHex:(id)arg1 alpha:(double)arg2;
+ (id)colorWithNSColor:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRGBADictionary:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (BOOL)hexIsEqual:(id)arg1;
- (BOOL)fuzzyIsEqualExcludingAlpha:(id)arg1 precision:(double)arg2;
- (BOOL)fuzzyIsEqualExcludingAlpha:(id)arg1;
- (BOOL)fuzzyIsEqual:(id)arg1 precision:(double)arg2;
- (BOOL)fuzzyIsEqual:(id)arg1;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3;
@property(readonly, copy) NSString *description;
- (id)NSColorWithColorSpace:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithImmutableObject:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (BOOL)isAssetEqual:(id)arg1;
- (unsigned long long)assetType;
- (id)treeAsDictionary;
- (id)RGBADictionary;
- (id)scaledColor:(double)arg1;

// Remaining properties
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) double green;
@property(readonly, nonatomic) double red;
@property(readonly) Class superclass;

@end

