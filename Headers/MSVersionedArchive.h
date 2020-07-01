//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MSVersionedArchive : NSObject
{
    NSURL *_url;
    NSURL *_baseURL;
    unsigned long long _version;
    NSString *_alternateFolder;
}

+ (id)versionedURLWithBase:(id)arg1 extension:(id)arg2 version:(unsigned long long)arg3;
+ (id)globalDirectory;
+ (id)URLForArchiveWithName:(id)arg1 extension:(id)arg2 version:(long long)arg3;
+ (id)globalArchiveWithName:(id)arg1 extension:(id)arg2 version:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alternateFolder; // @synthesize alternateFolder=_alternateFolder;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)cleanupAfterTesting;
- (BOOL)archiveRootObject:(id)arg1 error:(id *)arg2;
- (id)unarchiveRootObjectVersion:(long long *)arg1 error:(id *)arg2;
- (BOOL)exists;
- (id)URLNeedingMigration;
- (id)existingURLFoundAtBaseURL:(id *)arg1;
- (id)existingURL;
- (id)existingURLBasedOnFullURL:(id)arg1;
- (id)initWithURL:(id)arg1 version:(long long)arg2;

@end

