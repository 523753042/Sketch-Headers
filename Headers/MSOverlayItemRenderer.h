//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSOverlayItemRenderer : NSObject
{
}

+ (void)renderOverlayItemContainer:(id)arg1 images:(id)arg2 context:(struct CGContext *)arg3 zoomLevel:(double)arg4 backingScaleFactor:(double)arg5;
+ (void)renderLabelItems:(id)arg1 zoomLevel:(double)arg2 pointScale:(double)arg3 context:(struct CGContext *)arg4;
+ (void)renderBitmapItems:(id)arg1 images:(id)arg2 backingScaleFactor:(double)arg3 pointScale:(double)arg4 context:(struct CGContext *)arg5;
+ (void)renderPathItems:(id)arg1 pointScale:(double)arg2 context:(struct CGContext *)arg3;

@end

