//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSComplimentaryOverrides;

@interface MSOverrideManagementItem : NSObject
{
    unsigned long long _indentationLevel;
    MSComplimentaryOverrides *_complimentaryOverrides;
}

@property(retain, nonatomic) MSComplimentaryOverrides *complimentaryOverrides; // @synthesize complimentaryOverrides=_complimentaryOverrides;
@property(nonatomic) unsigned long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
- (void).cxx_destruct;
- (void)highlightItem:(BOOL)arg1;
- (id)title;

@end

