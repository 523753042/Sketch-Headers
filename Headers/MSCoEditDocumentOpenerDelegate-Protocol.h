//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentOpenerDelegate-Protocol.h"

@class MSCoEditDocumentOpener, NSError;

@protocol MSCoEditDocumentOpenerDelegate <MSDocumentOpenerDelegate>
@property(readonly, nonatomic) NSError *betaDisabledError;
- (NSError *)makeErrorPresentable:(MSCoEditDocumentOpener *)arg1 error:(NSError *)arg2;
- (void)didProcessCloudDocument:(MSCoEditDocumentOpener *)arg1;
- (void)willProcessCloudDocument:(MSCoEditDocumentOpener *)arg1;
- (BOOL)shouldOpenExistingDocument:(MSCoEditDocumentOpener *)arg1;
- (BOOL)shouldMigrateDocumentInCoedit:(MSCoEditDocumentOpener *)arg1;
- (BOOL)shouldDiscardLocalCoeditChanges:(MSCoEditDocumentOpener *)arg1;
@end

