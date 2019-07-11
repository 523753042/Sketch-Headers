//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSOverlayItemContainer : NSObject
{
    BOOL _isEmpty;
    NSArray *_pathItems;
    NSArray *_bitmapItems;
    NSArray *_labelItems;
}

+ (id)containerWithPathItem:(id)arg1;
+ (id)containerWithPathItems:(id)arg1;
+ (id)container;
@property(readonly, nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property(readonly, copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property(readonly, copy, nonatomic) NSArray *bitmapItems; // @synthesize bitmapItems=_bitmapItems;
@property(readonly, copy, nonatomic) NSArray *pathItems; // @synthesize pathItems=_pathItems;
- (void).cxx_destruct;
- (id)appendingItems:(id)arg1;
- (id)initWithPathItems:(id)arg1 bitmapItems:(id)arg2 labelItems:(id)arg3;
- (id)init;

@end

