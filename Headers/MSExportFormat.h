//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSExportFormat.h>

@class NSString;

@interface MSExportFormat : _MSExportFormat
{
}

+ (id)localizedInvalidLayerName;
+ (id)exportableFilenameForLayerName:(id)arg1 exportFormat:(id)arg2;
+ (id)cleanLayerNameForUseInPath:(id)arg1 shouldRecurse:(BOOL)arg2;
+ (id)cleanLayerNamePrefix:(id)arg1 shouldRecurse:(BOOL)arg2;
+ (id)sanitizeLayerName:(id)arg1;
+ (id)exportableFilenameBodyForLayerName:(id)arg1 exportFormat:(id)arg2;
+ (id)validFormats;
+ (id)formatWithScale:(double)arg1 name:(id)arg2 fileFormat:(id)arg3 absoluteSize:(double)arg4 namingScheme:(long long)arg5;
+ (id)formatWithScale:(double)arg1 name:(id)arg2 fileFormat:(id)arg3;
- (double)exportScaleInRect:(struct CGRect)arg1;
- (id)description;
@property(readonly) NSString *baseFileName;
- (id)defaultName;
- (void)remove;
- (id)container;
- (id)parentLayer;
- (id)initWithScale:(double)arg1 name:(id)arg2 fileFormat:(id)arg3 absoluteSize:(double)arg4 namingScheme:(long long)arg5;
- (id)initWithScale:(double)arg1 name:(id)arg2 fileFormat:(id)arg3;
- (BOOL)isScalableExport;

@end

