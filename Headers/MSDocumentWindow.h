//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class BCWindowBadge, NSEvent;

@interface MSDocumentWindow : NSWindow
{
    BCWindowBadge *_titleBarBadge;
    NSEvent *_lastForwardedKeyEvent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSEvent *lastForwardedKeyEvent; // @synthesize lastForwardedKeyEvent=_lastForwardedKeyEvent;
@property(retain, nonatomic) BCWindowBadge *titleBarBadge; // @synthesize titleBarBadge=_titleBarBadge;
- (void)setAppearance:(id)arg1;
- (void)refreshAfterAppearanceChange;
- (id)touchBar;
- (BOOL)shouldDismissPopover:(id)arg1 event:(id)arg2;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

