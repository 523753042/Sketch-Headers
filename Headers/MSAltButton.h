//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/MSHoverButton.h>

@interface MSAltButton : MSHoverButton
{
    id _bc_weakTarget;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id bc_weakTarget; // @synthesize bc_weakTarget=_bc_weakTarget;
- (void)dealloc;
- (void)updateToolTip;
- (void)flagsChangedNotification:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)awakeFromNib;

@end

