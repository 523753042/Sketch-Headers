//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSCoding-Protocol.h>
#import <SketchModel/MSJSONArchiverAlternativeFileReference-Protocol.h>
#import <SketchModel/NSCopying-Protocol.h>

@class BCReadWriteLock, NSData, NSImage, NSString;
@protocol OS_dispatch_group;

@interface MSImageData : NSObject <NSCopying, MSCoding, MSJSONArchiverAlternativeFileReference>
{
    NSData *_sha1;
    NSData *_data;
    NSObject<OS_dispatch_group> *_archivingGroup;
    NSImage *_image;
    BCReadWriteLock *_imageLock;
}

+ (id)mipampCacheBaseURL;
+ (void)purgeMipampCache;
+ (id)decodeReferenceFromJSONZipArchive:(id)arg1 withReference:(id)arg2;
+ (id)errorImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) BCReadWriteLock *imageLock; // @synthesize imageLock=_imageLock;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (id)debugQuickLookObject;
- (struct CGImage *)CGImageAtLevelOfDetail:(unsigned long long)arg1 colorSpace:(struct CGColorSpace *)arg2 cache:(id)arg3 options:(unsigned long long)arg4;
- (struct CGImage *)CGImageForColorSpace:(struct CGColorSpace *)arg1 cache:(id)arg2;
- (struct CGImage *)CGImageSuitableForDrawingWithSize:(struct CGSize)arg1 colorSpace:(struct CGColorSpace *)arg2 cache:(id)arg3 options:(unsigned long long)arg4;
- (id)mipmapCacheURL;
- (void)correctInvalidGamma;
- (id)imageDataByCorrectingInvalidGamma;
- (void)encodeReferenceInJSONZipArchive:(id)arg1;
- (id)replacementObjectForJSONEncoder:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (BOOL)isAssetEqual:(id)arg1;
- (unsigned long long)assetType;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
- (id)initWithUnarchiver:(id)arg1;
- (id)initWithUnarchiver:(id)arg1 migratingFrom:(long long)arg2 toVersion:(long long)arg3;
- (void)decodeWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)NSImage;
- (BOOL)isLegacy;
- (void)setSha1:(id)arg1;
- (void)setData:(id)arg1;
@property(readonly, nonatomic) NSData *sha1;
@property(readonly, nonatomic) NSData *data;
- (void)waitUntilArchivingCompletes;
- (id)initWithLegacyHash:(id)arg1;
- (id)initWithData:(id)arg1 sha:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initDefault;
- (id)treeAsDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

