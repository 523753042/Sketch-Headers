//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSTextStyle.h>

@class NSDictionary, NSString;

@interface MSTextStyle : _MSTextStyle
{
    NSDictionary *_decodedAttributes;
}

+ (id)styleWithAttributes:(id)arg1;
@property(copy, nonatomic) NSDictionary *decodedAttributes; // @synthesize decodedAttributes=_decodedAttributes;
- (void).cxx_destruct;
- (void)resetDecodedAttributes;
- (void)syncOwningTextLayerWithThisStyle;
@property(copy, nonatomic) NSDictionary *attributes;
- (void)updateAttributesWithoutSyncingOwningTextLayer:(id)arg1;
@property(readonly, nonatomic) NSString *fontPostscriptName;
@property(readonly, nonatomic) BOOL isRequiredFontAvailable;
- (id)treeAsDictionary;
- (void)replaceFonts:(id)arg1;

@end

