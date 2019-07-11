//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSAssetLibraryDelegate-Protocol.h>

@class MSAssetLibraryUpdater, NSArray, NSHashTable, NSMutableArray, NSString;

@interface MSAssetLibraryController : NSObject <MSAssetLibraryDelegate>
{
    NSMutableArray *_userLibraries;
    NSArray *_remoteLibraries;
    NSHashTable *_delegates;
    MSAssetLibraryUpdater *_assetLibraryUpdater;
}

@property(readonly, nonatomic) MSAssetLibraryUpdater *assetLibraryUpdater; // @synthesize assetLibraryUpdater=_assetLibraryUpdater;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSArray *remoteLibraries; // @synthesize remoteLibraries=_remoteLibraries;
@property(readonly, nonatomic) NSMutableArray *userLibraries; // @synthesize userLibraries=_userLibraries;
- (void).cxx_destruct;
- (void)loadVersionZeroLibrariesWithDispatchGroup:(id)arg1;
- (id)loadVersionZeroLibrariesFromUnarchiver:(id)arg1 forKey:(id)arg2 dispatchGroup:(id)arg3;
- (BOOL)shouldAttemptToLoadVersionZeroLibraries;
- (void)createAssetLibraryFolder;
- (id)librariesWithUpdates;
- (void)addRemoteLibraryFromAppcastURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)makeDuplicateRemoteLibraryError;
- (id)remoteLibraryWithAppcast:(id)arg1;
- (void)updateAndLoadAssetLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDownloadingAssetLibrary:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 downloadCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)downloadAssetLibraryAppcastsWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)previewFromDocumentReader:(id)arg1;
- (void)generatePreviewImageForLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)libraryForShareableObject:(id)arg1;
- (void)enumerateForeignObjects:(id)arg1 inDocument:(id)arg2 includeDisabled:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (void)syncForeignObject:(id)arg1 withMaster:(id)arg2 fromLibrary:(id)arg3;
- (void)internalSyncForeignObject:(id)arg1 withMaster:(id)arg2 fromLibrary:(id)arg3;
- (id)importShareableObjectReference:(id)arg1 intoDocument:(id)arg2;
- (void)syncNestedSymbolsOf:(id)arg1 withMaster:(id)arg2 fromLibrary:(id)arg3;
- (id)symbolIDsMappingFrom:(id)arg1 toLibrary:(id)arg2;
- (BOOL)shouldLoadPreviouslySavedLibraries;
- (void)loadRemoteLibraryRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadLibrariesWithDispatchGroup:(id)arg1;
- (void)setupInitialRemoteLibrariesWithDispatchGroup:(id)arg1;
- (void)copyInternalLibraryToApplicationSupport;
- (id)initialRemoteLibraryDefinitions;
- (id)loadLibrariesForKey:(id)arg1 dispatchGroup:(id)arg2;
- (void)assetLibraryEnableStateChanged:(id)arg1;
- (void)assetLibraryChangedOnDisk:(id)arg1;
- (void)reloadLibrary:(id)arg1;
- (void)notifyLibraryChange:(id)arg1;
- (void)removeRemoteAssetLibrary:(id)arg1;
- (void)removeUserAssetLibrary:(id)arg1;
- (void)saveLibraries;
- (void)saveLibraries:(id)arg1 withLibrariesKey:(id)arg2;
- (void)removeAssetLibrary:(id)arg1;
- (long long)addAssetLibraryAtURL:(id)arg1;
- (id)existingLibraryForDocumentAtURL:(id)arg1;
@property(readonly, nonatomic) NSArray *libraries; // @dynamic libraries;
@property(readonly, nonatomic) NSArray *availableLibraries;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

