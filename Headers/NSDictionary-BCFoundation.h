//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (BCFoundation)
- (id)dictionaryByTurningNumberKeysIntoStrings;
- (id)dictionaryByTurningStringKeysInToNumbers;
- (id)dictionaryByReverseMappingKeys_bc:(id)arg1;
- (id)dictionaryByMappingKeys_bc:(id)arg1;
- (id)dictionaryByReplacing:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)dictionaryByAddingDictionary:(id)arg1;
- (id)dictionaryByAddingOrRemovingObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyDeep;
- (id)urlForKey_bc:(id)arg1;
- (BOOL)boolForKey_bc:(id)arg1;
- (id)numberForKey_bc:(id)arg1;
- (id)dictionaryForKey_bc:(id)arg1;
- (id)arrayForKey_bc:(id)arg1;
- (id)stringForKey_bc:(id)arg1;
- (void)encodeAsRAWArchive:(id)arg1;
@end

