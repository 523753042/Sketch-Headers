//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCSingleton.h>

@class NSURLSession, NSWindowController;

@interface MSNewsTrigger : BCSingleton
{
    NSURLSession *_urlSession;
    NSWindowController *_windowController;
}

+ (void)checkForNews;
- (void).cxx_destruct;
@property(retain, nonatomic) NSWindowController *windowController; // @synthesize windowController=_windowController;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)showURL:(id)arg1 newsID:(id)arg2;
- (BOOL)shouldShowNewsWithID:(id)arg1;
- (void)validateResult:(id)arg1;
- (void)checkForNews;
- (id)url;
- (id)init;

@end

