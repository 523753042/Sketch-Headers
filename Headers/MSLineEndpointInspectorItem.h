//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSTwoTextFieldInspectorItem.h"

@class MSCoordinateInspectorValueAdaptor;

@interface MSLineEndpointInspectorItem : MSTwoTextFieldInspectorItem
{
    MSCoordinateInspectorValueAdaptor *_xAdaptor;
    MSCoordinateInspectorValueAdaptor *_yAdaptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSCoordinateInspectorValueAdaptor *yAdaptor; // @synthesize yAdaptor=_yAdaptor;
@property(retain, nonatomic) MSCoordinateInspectorValueAdaptor *xAdaptor; // @synthesize xAdaptor=_xAdaptor;
- (void)setLayers:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 field1Label:(id)arg2 field2Label:(id)arg3 xPath:(id)arg4 yPath:(id)arg5;

@end

