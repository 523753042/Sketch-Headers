//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSComplimentaryOverrides;

@interface MSOverrideManagementItem : NSObject
{
    unsigned long long _indentationLevel;
    MSComplimentaryOverrides *_complimentaryOverrides;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSComplimentaryOverrides *complimentaryOverrides; // @synthesize complimentaryOverrides=_complimentaryOverrides;
@property(nonatomic) unsigned long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
- (void)highlightItem:(BOOL)arg1;
- (id)title;

@end

