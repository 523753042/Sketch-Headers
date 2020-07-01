//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCZipableFile : NSObject
{
    BOOL _encodeAsJSON;
    BOOL _shouldCompress;
    BOOL _writen;
    NSString *_subPath;
    NSObject *_objectToEncode;
}

+ (id)dataZipableForObject:(id)arg1 withSubPath:(id)arg2 shouldCompress:(BOOL)arg3;
+ (id)jsonZipableForObject:(id)arg1 withSubPath:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL writen; // @synthesize writen=_writen;
@property(readonly, nonatomic) BOOL shouldCompress; // @synthesize shouldCompress=_shouldCompress;
@property(readonly, nonatomic) BOOL encodeAsJSON; // @synthesize encodeAsJSON=_encodeAsJSON;
@property(readonly, nonatomic) NSObject *objectToEncode; // @synthesize objectToEncode=_objectToEncode;
@property(readonly, nonatomic) NSString *subPath; // @synthesize subPath=_subPath;
- (BOOL)isEqual:(id)arg1;
- (BOOL)filePathMatches:(id)arg1;
- (id)initWithObject:(id)arg1 subPath:(id)arg2 asJSON:(BOOL)arg3 shouldCompress:(BOOL)arg4;

@end

