//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSToolbarDelegate-Protocol.h"

@class MSDocument, NSArray, NSString, NSToolbar;

@interface MSToolbarConstructor : NSObject <NSToolbarDelegate>
{
    MSDocument *_doc;
    NSArray *_toolbarSelectableIdentifiers;
    NSArray *_toolbarAllowedItemIdentifiers;
    NSArray *_toolbarDefaultItemIdentifiers;
}

+ (id)toolbarDefaultItemIdentifiers;
+ (id)toolbarAllowedSketchDocumentItemIdentifiers;
@property(copy, nonatomic) NSArray *toolbarDefaultItemIdentifiers; // @synthesize toolbarDefaultItemIdentifiers=_toolbarDefaultItemIdentifiers;
@property(copy, nonatomic) NSArray *toolbarAllowedItemIdentifiers; // @synthesize toolbarAllowedItemIdentifiers=_toolbarAllowedItemIdentifiers;
@property(copy, nonatomic) NSArray *toolbarSelectableIdentifiers; // @synthesize toolbarSelectableIdentifiers=_toolbarSelectableIdentifiers;
@property(nonatomic) __weak MSDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (void)documentTypeDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)validateToolbarItems;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSToolbar *toolbar;
- (void)constructToolbarForWindow:(id)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

