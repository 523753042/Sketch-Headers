//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSJSONUnarchiver.h>

@class BCJSONDecoder, NSData;

@interface MSJSONDataUnarchiver : MSJSONUnarchiver
{
    BCJSONDecoder *_dataDecoder;
    NSData *_data;
}

+ (id)unarchivedObjectWithString:(id)arg1 asVersion:(long long)arg2 corruptionDetected:(char *)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) BCJSONDecoder *dataDecoder; // @synthesize dataDecoder=_dataDecoder;
- (id)decodeReferenceObjectOfClass:(id)arg1 withIdentifier:(id)arg2;
- (id)decodeRoot;
- (id)decoder;
- (id)initForReadingFromData:(id)arg1;

@end

