/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifdef USE_TI_UILISTVIEW

#import "TiUIListSectionProxy.h"
#import "TiViewProxy.h"

#define TRANSCRIPT_MODE_DISABLE 0
#define TRANSCRIPT_MODE_NORMAL 1
#define TRANSCRIPT_MODE_ALWAYS_SCROLL 2

@interface TiUIListViewProxy : TiViewProxy <TiUIListViewDelegate>

@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSNumber *sectionCount;

- (TiUIListSectionProxy *)sectionForIndex:(NSUInteger)index;
- (void)deleteSectionAtIndex:(NSUInteger)index;
- (void)setMarker:(id)args;

- (void) setReverseMode:(id)bMode;
- (BOOL) getReverseMode:(id)unused;
- (void) setBottomState:(id)bState;
- (BOOL) getBottomState:(id)unused;
- (void) FireEventIsBottom:(bool)bBottom;
- (NSUInteger) getInsertItemsCountForSection:(NSUInteger)index;
@end

@interface TiUIListViewProxy (internal)
- (void)willDisplayCell:(NSIndexPath *)indexPath;
@end
#endif
