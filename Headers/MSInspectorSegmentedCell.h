//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedCell.h>

@class NSImage, NSMutableDictionary;

@interface MSInspectorSegmentedCell : NSSegmentedCell
{
    BOOL _drawHighlighted;
    NSMutableDictionary *_images;
    NSMutableDictionary *_alternateImages;
    NSImage *_alternateImage0;
    NSImage *_alternateImage1;
    NSImage *_alternateImage2;
    NSImage *_alternateImage3;
    struct CGPoint _highlightLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *alternateImage3; // @synthesize alternateImage3=_alternateImage3;
@property(retain, nonatomic) NSImage *alternateImage2; // @synthesize alternateImage2=_alternateImage2;
@property(retain, nonatomic) NSImage *alternateImage1; // @synthesize alternateImage1=_alternateImage1;
@property(retain, nonatomic) NSImage *alternateImage0; // @synthesize alternateImage0=_alternateImage0;
@property(nonatomic) BOOL drawHighlighted; // @synthesize drawHighlighted=_drawHighlighted;
@property(retain, nonatomic) NSMutableDictionary *alternateImages; // @synthesize alternateImages=_alternateImages;
@property(retain, nonatomic) NSMutableDictionary *images; // @synthesize images=_images;
@property(nonatomic) struct CGPoint highlightLocation; // @synthesize highlightLocation=_highlightLocation;
- (void)setAlternateImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)segmentForX:(double)arg1 frame:(struct CGRect)arg2;
- (id)segmentWidthsForFrame:(struct CGRect)arg1 total:(double *)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;

@end

