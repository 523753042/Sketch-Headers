//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableDocumentState.h>

@class NSDictionary;

@interface MSImmutableDocumentState : _MSImmutableDocumentState
{
    NSDictionary *_cloudShare;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *cloudShare; // @synthesize cloudShare=_cloudShare;
- (id)dictionaryByAddingCloudShareInfomationToDictionary:(id)arg1 forDocument:(id)arg2;
- (BOOL)hasDefaultValues;
- (void)setCloudShareForMigration:(id)arg1;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;

@end

