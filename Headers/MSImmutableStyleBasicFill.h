//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableStyleBasicFill.h>

#import <SketchModel/MSColorReadable-Protocol.h>
#import <SketchModel/NSPasteboardReading-Protocol.h>
#import <SketchModel/NSPasteboardWriting-Protocol.h>

@class NSArray, NSString;

@interface MSImmutableStyleBasicFill : _MSImmutableStyleBasicFill <NSPasteboardWriting, NSPasteboardReading, MSColorReadable>
{
}

@property(readonly, nonatomic) NSArray *updateableColors;
@property(readonly, nonatomic) BOOL hasOpacity;
- (id)pasteboardReaderWriter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

