//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

#import "MSAlignmentEngineDelegate-Protocol.h"

@class MSAlignmentEngine, MSAlignmentEngineResult, MSDragInsertionTool, MSDragRectGestureRecognizer, MSLayerGroup, NSCursor, NSString;

@interface MSDragRectEventHandler : MSEventHandler <MSAlignmentEngineDelegate>
{
    MSDragRectGestureRecognizer *_dragGestureRecognizer;
    MSAlignmentEngine *_snapper;
    MSAlignmentEngineResult *_snappingResult;
    NSCursor *_insertionCursor;
    MSDragInsertionTool *_tool;
    struct CGRect _insertionRect;
}

@property(retain, nonatomic) MSDragInsertionTool *tool; // @synthesize tool=_tool;
@property(retain, nonatomic) NSCursor *insertionCursor; // @synthesize insertionCursor=_insertionCursor;
@property(retain, nonatomic) MSAlignmentEngineResult *snappingResult; // @synthesize snappingResult=_snappingResult;
@property(readonly, nonatomic) MSAlignmentEngine *snapper; // @synthesize snapper=_snapper;
@property(readonly, nonatomic) MSDragRectGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(nonatomic) struct CGRect insertionRect; // @synthesize insertionRect=_insertionRect;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)addTargetsToEngine:(id)arg1 snappingDisabled:(BOOL)arg2;
- (struct CGPoint)alignmentEngine:(id)arg1 alignPoint:(struct CGPoint)arg2;
- (struct CGPoint)roundPoint:(struct CGPoint)arg1;
- (id)snapAndAlignPoint:(struct CGPoint)arg1 constraint:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (void)drawRectPreview;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
@property(readonly, nonatomic) MSLayerGroup *group;
- (BOOL)handlesHandToolItself;
- (void)keyDown:(id)arg1;
- (id)performActionWithRect:(struct CGRect)arg1 fromLayer:(id)arg2 constrainProportions:(BOOL)arg3;
@property(readonly) unsigned long long layerSelectionOptionsForInsertingFromExistingLayer;
- (id)itemAtPoint:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (BOOL)wantsLayerHighlight;
@property(readonly) BOOL allowsInsertLayerFromExistingLayer;
@property(readonly, nonatomic) NSCursor *cursorForInsertingFromExisting;
- (void)trackMouse:(id)arg1;
- (void)handleDrag:(id)arg1;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

