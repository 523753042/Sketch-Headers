//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCComparisonItem.h>

@class NSString;

@interface BCComparisonPathItem : BCComparisonItem
{
    NSString *_objectName;
    long long _index;
}

+ (id)pathItemWithParent:(id)arg1 newObject:(id)arg2 oldObject:(id)arg3 named:(id)arg4;
+ (id)pathItemWithParent:(id)arg1 newObject:(id)arg2 oldObject:(id)arg3 named:(id)arg4 index:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
- (id)internalFullPath;

@end

