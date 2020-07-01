//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "MSInspectorItemDelegate-Protocol.h"

@class MSExportInitialHeaderItem, MSExportInspectorViewController, MSExportPreviewHeaderInspectorItem, MSExportPreviewImagesInspectorItem, MSExportSelectedInspectorItem, MSHeader2InspectorItem, MSPaddingInspectorItem, MSSliceBackgroundColorInspectorItem, MSSliceExportGroupContentsOnlyInspectorItem, MSTrimGroupTransparencyInspectorItem, MSTrimSliceTransparencyInspectorItem, NSArray, NSString;

@interface MSExportPreviewInspectorSection : MSBaseInspectorSection <MSInspectorItemDelegate>
{
    MSExportPreviewImagesInspectorItem *_imagesItem;
    MSTrimSliceTransparencyInspectorItem *_trimSliceTransparencyItem;
    MSTrimGroupTransparencyInspectorItem *_trimGroupTransparencyItem;
    MSPaddingInspectorItem *_paddingInspectorItem;
    MSPaddingInspectorItem *_nonHeaderPaddingInspectorItem;
    MSSliceExportGroupContentsOnlyInspectorItem *_groupContentsItem;
    MSSliceBackgroundColorInspectorItem *_colorItem;
    MSExportInitialHeaderItem *_initialHeaderItem;
    MSExportPreviewHeaderInspectorItem *_headerItem;
    MSHeader2InspectorItem *_sliceHeader;
    MSHeader2InspectorItem *_groupHeader;
    NSArray *_footerItems;
    MSExportInspectorViewController *_formatsItem;
    MSExportSelectedInspectorItem *_exportSelectedItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSExportSelectedInspectorItem *exportSelectedItem; // @synthesize exportSelectedItem=_exportSelectedItem;
@property(retain, nonatomic) MSExportInspectorViewController *formatsItem; // @synthesize formatsItem=_formatsItem;
@property(retain, nonatomic) NSArray *footerItems; // @synthesize footerItems=_footerItems;
@property(retain, nonatomic) MSHeader2InspectorItem *groupHeader; // @synthesize groupHeader=_groupHeader;
@property(retain, nonatomic) MSHeader2InspectorItem *sliceHeader; // @synthesize sliceHeader=_sliceHeader;
@property(retain, nonatomic) MSExportPreviewHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) MSExportInitialHeaderItem *initialHeaderItem; // @synthesize initialHeaderItem=_initialHeaderItem;
@property(retain, nonatomic) MSSliceBackgroundColorInspectorItem *colorItem; // @synthesize colorItem=_colorItem;
@property(retain, nonatomic) MSSliceExportGroupContentsOnlyInspectorItem *groupContentsItem; // @synthesize groupContentsItem=_groupContentsItem;
@property(retain, nonatomic) MSPaddingInspectorItem *nonHeaderPaddingInspectorItem; // @synthesize nonHeaderPaddingInspectorItem=_nonHeaderPaddingInspectorItem;
@property(retain, nonatomic) MSPaddingInspectorItem *paddingInspectorItem; // @synthesize paddingInspectorItem=_paddingInspectorItem;
@property(retain, nonatomic) MSTrimGroupTransparencyInspectorItem *trimGroupTransparencyItem; // @synthesize trimGroupTransparencyItem=_trimGroupTransparencyItem;
@property(retain, nonatomic) MSTrimSliceTransparencyInspectorItem *trimSliceTransparencyItem; // @synthesize trimSliceTransparencyItem=_trimSliceTransparencyItem;
@property(retain, nonatomic) MSExportPreviewImagesInspectorItem *imagesItem; // @synthesize imagesItem=_imagesItem;
- (id)makePaddingInspectorItem;
- (void)refreshIfNecessary:(id)arg1;
- (BOOL)wantsSeparatorAfterViews;
- (id)footerViews;
- (void)addExportFormat:(id)arg1;
- (id)views;
@property(readonly, nonatomic) BOOL hasContent;
- (void)updateItems;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

