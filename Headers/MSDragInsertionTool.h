//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MSLayerCoordinateSpace;

@interface MSDragInsertionTool : NSObject
{
    // Error parsing type: , name: destinationGroup
    // Error parsing type: , name: zoomScale
    // Error parsing type: , name: alignmentSettings
    // Error parsing type: , name: state
    // Error parsing type: , name: position
    // Error parsing type: , name: vector
    // Error parsing type: , name: isAboutCenter
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL insertAboutCenter; // @synthesize insertAboutCenter=isAboutCenter;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic, readonly) id <MSLayerCoordinateSpace> parentCoordinateSpace;
- (void)updateWithLocation:(struct CGPoint)arg1 lockSize:(BOOL)arg2 alignedAxes:(unsigned long long)arg3;
- (struct CGPoint)locationIn:(id)arg1;
- (void)beginDragging;
- (void)beginDraggingWithLocation:(struct CGPoint)arg1;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
- (id)initWithDestination:(id)arg1;

@end

