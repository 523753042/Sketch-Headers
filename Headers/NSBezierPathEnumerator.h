//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/NSFastEnumeration-Protocol.h>

@class NSArray, NSBezierPath;

@interface NSBezierPathEnumerator : NSObject <NSFastEnumeration>
{
    BOOL _reverse;
    NSBezierPath *_bezierPath;
    NSArray *_pathItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *pathItems; // @synthesize pathItems=_pathItems;
@property(nonatomic) BOOL reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

@end

