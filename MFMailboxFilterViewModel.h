//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFObservable<MFObserver>, NSArray, NSFormatter;

@interface MFMailboxFilterViewModel : NSObject
{
    _Bool _filterEnabled;
    NSArray *_selectedFilters;
    id <MFMailboxFilterProvider> _provider;
    NSFormatter *_formatter;
    MFObservable<MFObserver> *_filterEnabledObservable;
    MFObservable<MFObserver> *_selectedFiltersObservable;
}

@property(readonly, nonatomic) MFObservable<MFObserver> *selectedFiltersObservable; // @synthesize selectedFiltersObservable=_selectedFiltersObservable;
@property(readonly, nonatomic) MFObservable<MFObserver> *filterEnabledObservable; // @synthesize filterEnabledObservable=_filterEnabledObservable;
@property(retain, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) id <MFMailboxFilterProvider> provider; // @synthesize provider=_provider;
@property(nonatomic, getter=isFilterEnabled) _Bool filterEnabled; // @synthesize filterEnabled=_filterEnabled;
- (void).cxx_destruct;
- (id)_compoundCriterionForFilters:(id)arg1;
- (void)_notifySelectedFiltersObserver;
- (void)_notifyFilterEnabledObserver;
@property(retain, nonatomic) NSArray *selectedFilters; // @synthesize selectedFilters=_selectedFilters;
@property(readonly, nonatomic) NSArray *reducedSelectedFilters;
- (id)observableSelectedFilters;
- (id)observableFilterEnabled;
- (id)selectedFiltersDescription;
- (id)_sourcesByApplyingFiltersToSource:(id)arg1;
- (id)sourcesByApplyingFiltersToSource:(id)arg1;
- (id)initWithProvider:(id)arg1 formatter:(id)arg2 selectedFilters:(id)arg3;
- (id)initWithProvider:(id)arg1 formatter:(id)arg2;

@end
