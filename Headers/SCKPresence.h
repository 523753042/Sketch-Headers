//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSString, SCKPresenceUser;

@interface SCKPresence : SCKObject
{
    // Error parsing type: , name: id
    // Error parsing type: , name: user
    // Error parsing type: , name: idleAt
    // Error parsing type: , name: currentPage
    // Error parsing type: , name: followingId
    // Error parsing type: , name: isFollowable
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithObjectID:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithDictionary:(id)arg1 parentObject:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 user:(id)arg2 idleAt:(id)arg3 currentPage:(id)arg4 followingId:(id)arg5 isFollowable:(BOOL)arg6;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic, readonly) SCKPresenceUser *user; // @synthesize user;
@property(nonatomic, readonly) NSString *id;

@end

