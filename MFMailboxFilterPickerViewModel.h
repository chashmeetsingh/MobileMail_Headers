//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface MFMailboxFilterPickerViewModel : NSObject
{
    id <MFMailboxFilterProvider> _provider;
    NSMutableSet *_selectedIndexPaths;
}

@property(retain, nonatomic) NSMutableSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(retain, nonatomic) id <MFMailboxFilterProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)selectedFilters;
- (id)selected;
- (void)deselectFilterAtIndexPath:(id)arg1;
- (void)selectFilterAtIndexPath:(id)arg1;
- (long long)selectionTypeAtIndex:(id)arg1;
- (_Bool)canDeselectRowAtIndexPath:(id)arg1;
- (id)indexPathsForFilters:(id)arg1;
- (id)indexPathForFilter:(id)arg1;
- (id)filterAtIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)indexOfGroup:(id)arg1;
- (id)groupAtIndex:(long long)arg1;
- (id)filtersForGroupAtIndex:(long long)arg1;
- (long long)numberOfFiltersForSection:(long long)arg1;
- (long long)numberOfFilterSection;
@property(readonly, nonatomic) NSArray *filters;
- (id)initWithFilterViewModel:(id)arg1;
- (id)initWithProvider:(id)arg1 selectedFilters:(id)arg2;

@end

