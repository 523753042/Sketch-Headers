//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BCSidebarTabButton, NSButton, NSSearchField;

@interface _TtC6Sketch25ComponentFilterController : NSViewController
{
    // Error parsing type: , name: filterButton
    // Error parsing type: , name: searchField
    // Error parsing type: , name: clearButton
    // Error parsing type: , name: componentsPaneController
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clearFilterString:(id)arg1;
- (void)applyAppearance;
- (void)viewDidLoad;
@property(nonatomic) __weak NSButton *clearButton; // @synthesize clearButton;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField;
@property(nonatomic) __weak BCSidebarTabButton *filterButton; // @synthesize filterButton;

@end

