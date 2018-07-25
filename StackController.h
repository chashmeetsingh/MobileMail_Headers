//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "StackElementDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, UIView;

@interface StackController : NSObject <StackElementDelegate>
{
    id <StackDataSource> _dataSource;
    id <StackDelegate> _delegate;
    UIView *_stackContainerView;
    struct UIEdgeInsets _stackContainerViewEdgeInsets;
    id _defaultItem;
    NSArray *_itemsToDisplay;
    NSMutableArray *_stackedItems;
    NSMutableArray *_orderedItems;
    NSMutableDictionary *_stackElementsByItem;
    NSMutableDictionary *_loadRequestDatesByItem;
    double _lastDisplayedItemsUpdateRequest;
    unsigned long long _transactionCount;
    _Bool _updateNeeded;
    _Bool _loadingData;
    _Bool _animateStateTransitions;
    _Bool _isAnimating;
    _Bool _isTerminating;
    _Bool _isSuspended;
    _Bool _itemsBecameStacked;
}

@property(copy, nonatomic) NSArray *itemsToDisplay; // @synthesize itemsToDisplay=_itemsToDisplay;
@property(nonatomic) _Bool animateStateTransitions; // @synthesize animateStateTransitions=_animateStateTransitions;
@property(readonly, nonatomic) id defaultItem; // @synthesize defaultItem=_defaultItem;
@property(nonatomic) id <StackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <StackDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)stackElement:(id)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(id)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(id)arg1 willRemoveView:(id)arg2;
- (id)viewBelowStackElement:(id)arg1;
- (id)viewForStackElement:(id)arg1;
- (_Bool)stackIsTerminating;
- (struct UIEdgeInsets)stackContainerViewEdgeInsets;
- (id)stackContainerView;
- (void)updateIsAnimating;
@property(nonatomic) _Bool isAnimating;
@property(readonly, nonatomic) _Bool hasStackedItems;
- (_Bool)isAnyStackElementBeingStacked;
- (void)stackDataSourceDidLoadItemData:(id)arg1;
- (void)updateStackElement:(id)arg1;
- (void)updateStackElements;
- (void)setNeedsToUpdateStackElements;
- (void)endTransaction;
- (void)beginTransaction;
- (_Bool)isDataAvailableForStackElement:(id)arg1 loadIfNeeded:(_Bool)arg2;
- (void)removeStackElement:(id)arg1;
- (id)stackElementForItem:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)keyForItem:(id)arg1;
- (id)stackedViewForItem:(id)arg1;
- (void)removeStackedViews:(_Bool)arg1;
- (void)updateDisplayedItems;
- (void)addStackedItem:(id)arg1;
- (void)setNeedsToUpdateDisplayedItems:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)displayStackedViewsForItems:(id)arg1 animated:(_Bool)arg2;
- (long long)maximumStackElementDepth;
@property(readonly, nonatomic) unsigned long long maximumNumberOfVisibleStackElements;
- (void)dealloc;
- (id)init;

@end
