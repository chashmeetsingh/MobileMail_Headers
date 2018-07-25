//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFConversationViewCellExpansionTrackerDelegate.h"

@class CNContactStore, MFConversationViewCellExpansionTracker, MFConversationViewCellSizeTracker, MFMessageDisplayMetrics, NSDate, NSString, UICollectionView, UIViewPropertyAnimator;

@interface MFConversationCellConfigurator : NSObject <MFConversationViewCellExpansionTrackerDelegate>
{
    _Bool _animatingHeightChange;
    id <MFConversationCellConfiguratorDelegate> _delegate;
    MFConversationViewCellExpansionTracker *_expansionTracker;
    MFConversationViewCellSizeTracker *_sizeTracker;
    CNContactStore *_contactStore;
    MFMessageDisplayMetrics *_displayMetrics;
    UIViewPropertyAnimator *_heightChangeAnimator;
    UICollectionView *_collectionView;
    NSDate *_lastAnimatedExpansionTimestamp;
}

@property(nonatomic) _Bool animatingHeightChange; // @synthesize animatingHeightChange=_animatingHeightChange;
@property(retain, nonatomic) NSDate *lastAnimatedExpansionTimestamp; // @synthesize lastAnimatedExpansionTimestamp=_lastAnimatedExpansionTimestamp;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIViewPropertyAnimator *heightChangeAnimator; // @synthesize heightChangeAnimator=_heightChangeAnimator;
@property(retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) MFConversationViewCellSizeTracker *sizeTracker; // @synthesize sizeTracker=_sizeTracker;
@property(retain, nonatomic) MFConversationViewCellExpansionTracker *expansionTracker; // @synthesize expansionTracker=_expansionTracker;
@property(nonatomic) __weak id <MFConversationCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)expansionTracker:(id)arg1 didChangeCollapsingAllowed:(_Bool)arg2;
- (_Bool)animatePendingHeightChangesIfNecessary;
- (void)expandCellAtIndexPath:(id)arg1 animated:(_Bool)arg2 highlightFirst:(_Bool)arg3;
- (void)_setCellAtIndexPath:(id)arg1 highlighted:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCellAtIndexPath:(id)arg1 highlighted:(_Bool)arg2 animated:(_Bool)arg3;
- (void)resetCaches;
- (void)enumerateExpandedCellsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisibleCellsWithBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (_Bool)messageWithIdIsExpanded:(id)arg1;
- (id)cellForItemAtIndexPath:(id)arg1 loadingContext:(id)arg2;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

