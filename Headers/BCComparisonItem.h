//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCComparisonItem : NSObject
{
    id _updatedObject;
    id _oldObject;
    BCComparisonItem *_parent;
}

@property(retain, nonatomic) BCComparisonItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id oldObject; // @synthesize oldObject=_oldObject;
@property(readonly, nonatomic) id updatedObject; // @synthesize updatedObject=_updatedObject;
- (void).cxx_destruct;
@property(readonly, nonatomic) id object;
@property(readonly, nonatomic) long long type;
- (id)addChangeForPropertyNamed:(id)arg1;
@property(readonly, nonatomic) NSString *fullPath;
- (id)internalFullPath;
- (id)initWithNewObject:(id)arg1 oldObject:(id)arg2 parent:(id)arg3;
- (id)init;

@end

