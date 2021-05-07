//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPreferencePane.h"

#import "MSAssetPreferenceItemDelegate-Protocol.h"
#import "MSDropableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"

@class MSAssetLibraryController, MSAssetLibraryTableView, NSArray, NSArrayController, NSButton, NSMenu, NSPredicate, NSSearchField, NSString, NSWindow;

@interface MSAssetLibrariesPreferencePane : MSPreferencePane <MSAssetPreferenceItemDelegate, MSDropableViewDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate>
{
    BOOL _hasAssets;
    BOOL _shouldEnableCogMenu;
    MSAssetLibraryTableView *_tableView;
    NSArrayController *_librariesArrayController;
    NSArray *_items;
    NSMenu *_contextMenu;
    NSButton *_spyglassFilterButton;
    NSSearchField *_filterTextField;
    NSWindow *_libraryInstallerAlertWindow;
    NSWindow *_duplicateLibraryAlertWindow;
    NSWindow *_chooseLibraryPanelWindow;
    NSWindow *_genericAlertWindow;
    NSPredicate *_librariesFilterPredicate;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSPredicate *librariesFilterPredicate; // @synthesize librariesFilterPredicate=_librariesFilterPredicate;
@property(nonatomic) __weak NSWindow *genericAlertWindow; // @synthesize genericAlertWindow=_genericAlertWindow;
@property(nonatomic) __weak NSWindow *chooseLibraryPanelWindow; // @synthesize chooseLibraryPanelWindow=_chooseLibraryPanelWindow;
@property(nonatomic) __weak NSWindow *duplicateLibraryAlertWindow; // @synthesize duplicateLibraryAlertWindow=_duplicateLibraryAlertWindow;
@property(nonatomic) __weak NSWindow *libraryInstallerAlertWindow; // @synthesize libraryInstallerAlertWindow=_libraryInstallerAlertWindow;
@property(nonatomic) BOOL shouldEnableCogMenu; // @synthesize shouldEnableCogMenu=_shouldEnableCogMenu;
@property(nonatomic) BOOL hasAssets; // @synthesize hasAssets=_hasAssets;
@property(retain, nonatomic) NSSearchField *filterTextField; // @synthesize filterTextField=_filterTextField;
@property(retain, nonatomic) NSButton *spyglassFilterButton; // @synthesize spyglassFilterButton=_spyglassFilterButton;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArrayController *librariesArrayController; // @synthesize librariesArrayController=_librariesArrayController;
@property(nonatomic) __weak MSAssetLibraryTableView *tableView; // @synthesize tableView=_tableView;
- (void)duplicateLibraryDisabled:(id)arg1;
- (void)scrollToFirstLibraryWithUpdateAvailable;
- (void)libraryControllerDidChange:(id)arg1;
- (void)libraryNameDidChange:(id)arg1;
- (void)learnMoreAboutLibraries:(id)arg1;
- (void)updateQLPreview;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)toggleQLPreview:(id)arg1;
@property(readonly, nonatomic) NSArray *previewableItems;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateLocateLibraryMenuItem:(id)arg1;
- (void)locateLibraryAction:(id)arg1;
- (BOOL)canLocateLibrary:(id)arg1;
- (BOOL)validateOpenInSketchMenuItem:(id)arg1;
- (void)openInSketchAction:(id)arg1;
- (void)doubleClickOpenAction:(id)arg1;
- (BOOL)validateRemoveLibraryMenuItem:(id)arg1;
- (void)removeLibraryAction:(id)arg1;
- (BOOL)availableUserLibrariesFromLibraries:(id)arg1;
- (id)sketchShareURLsFromLibraries:(id)arg1;
- (BOOL)validateRevealInFinderMenuItem:(id)arg1;
- (void)revealInFinderAction:(id)arg1;
- (BOOL)validateToggleLibraryMenuItem:(id)arg1;
- (BOOL)multipleLibrariesSelected;
- (void)toggleLibraryEnabled:(id)arg1;
- (BOOL)hasDisabledLibrariesSelected;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)draggedURLsFromPasteboard:(id)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (id)draggedTypesForView:(id)arg1;
- (void)dismissAlertSheet;
- (void)displayCloudAlertSheetForError:(id)arg1;
- (void)displayDuplicateAlertSheetForRemoteAssetLibrary:(id)arg1;
- (void)displayInstallerAlertSheetForRemoteAssetLibrary;
- (void)displayGenericAlertSheetWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)displayAlertSheetWithMessageText:(id)arg1 informativeText:(id)arg2 buttonTitle:(id)arg3 cancelButton:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)tableCellForLibrary:(id)arg1;
- (void)startDownloadForRemoteLibrary:(id)arg1;
- (void)reloadSelectingLibrary:(id)arg1;
- (void)preferenceItemHasUpdated:(id)arg1;
- (void)showContextMenu:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedLibraries;
@property(readonly, nonatomic) NSArray *selection;
- (id)currentLibrary;
- (void)addLibrariesFromURLS:(id)arg1;
- (void)importLibraryAction:(id)arg1;
- (void)addNextLibraryFromURLs:(id)arg1;
- (id)searchString;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)doesNewPredicateGiveDifferentResult:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)activateSearchField:(id)arg1;
- (void)syncLibraryItems;
- (id)workspaceNameForLibrary:(id)arg1;
@property(readonly, nonatomic) MSAssetLibraryController *assetLibraryController;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

