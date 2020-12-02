//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSCopying-Protocol.h>
#import <SketchCloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, SCKJWT;

@interface SCKAPISession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_token;
    NSString *_refreshToken;
    NSString *_tokenType;
    SCKJWT *_jwt;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasCurrent;
+ (void)invalidateCurrentCache;
+ (id)currentSessionWithError:(id *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCKJWT *jwt; // @synthesize jwt=_jwt;
@property(readonly, copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (BOOL)isRefreshedByAuthentication:(id)arg1;
@property(readonly, nonatomic) NSString *httpAuthorizationValue;
@property(readonly, nonatomic) BOOL isValidInTheNearFuture;
- (double)validityPeriod;
- (id)issueDate;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSString *organizationID;
@property(readonly, copy, nonatomic) NSString *userID;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)sessionWithRefreshToken:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithOAuthDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 ofType:(id)arg2 refreshToken:(id)arg3;
- (id)init;
@property(readonly, nonatomic) BOOL isCurrent;

@end

