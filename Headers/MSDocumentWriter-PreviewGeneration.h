//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSDocumentWriter.h>

#import <SketchRendering/MSDocumentPreviewGeneration-Protocol.h>

@class NSString;

@interface MSDocumentWriter (PreviewGeneration) <MSDocumentPreviewGeneration>
+ (id)findLibraryPreviewArtboardForDocument:(id)arg1 outPage:(id *)arg2;
+ (id)previewImageForDocument:(id)arg1 page:(id)arg2 rect:(struct CGRect)arg3;
+ (id)generatePreviewsForDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

