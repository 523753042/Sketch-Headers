//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@class NSSearchField;

@interface MSSearchAction : MSDocumentAction
{
    NSSearchField *_searchField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
- (void)focusOnSearchField;
- (void)performSearch:(id)arg1;
- (id)makeToolbarItemForToolbar:(BOOL)arg1;
- (id)label;

@end

