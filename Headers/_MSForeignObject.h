//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSString;

@interface _MSForeignObject : MSModelObject
{
    NSString *_libraryID;
    NSString *_sourceLibraryName;
    BOOL _symbolPrivate;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_symbolPrivate:(BOOL)arg1;
- (void)setRaw_sourceLibraryName:(id)arg1;
- (void)setRaw_libraryID:(id)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) BOOL symbolPrivate; // @synthesize symbolPrivate=_symbolPrivate;
@property(retain, nonatomic) NSString *sourceLibraryName; // @synthesize sourceLibraryName=_sourceLibraryName;
@property(retain, nonatomic) NSString *libraryID; // @synthesize libraryID=_libraryID;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

