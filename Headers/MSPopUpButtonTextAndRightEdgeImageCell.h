//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSImage;

@interface MSPopUpButtonTextAndRightEdgeImageCell : NSPopUpButtonCell
{
    NSImage *_rightEdgeImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *rightEdgeImage; // @synthesize rightEdgeImage=_rightEdgeImage;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)attributedTitle;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;

@end

