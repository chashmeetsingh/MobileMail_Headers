//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "MFReclaimable.h"
#import "MFSwipeActionHost.h"

@class MFSwipeActionUIConfigurator, NSString, _MFSwipableTableViewCellDeleteScanlineView, _UIContentUnavailableView;

@interface MFSwipableTableView : UITableView <MFSwipeActionHost, MFReclaimable>
{
    _MFSwipableTableViewCellDeleteScanlineView *_deleteScanLineView;
    _UIContentUnavailableView *_noContentView;
    MFSwipeActionUIConfigurator *_configurator;
    struct UIEdgeInsets _previousSafeAreaInsets;
}

- (void).cxx_destruct;
- (void)reconstruct;
- (void)purgeForMemoryReclamation;
- (id)_snapshotOfActivePullView;
- (void)animateTransitionToSize:(struct CGSize)arg1 withCoordinator:(id)arg2;
- (void)setSwipedIndexPath:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateForDestructiveAction:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(CDStruct_b06b0113)arg3 completion:(CDUnknownBlockType)arg4;
- (id)deleteConfirmationIndexPath;
- (void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1;
- (void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentUnavailableTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_updateSeparatorInsetEditing:(_Bool)arg1;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateSwipeConfiguration;
- (void)swipeDidEndForItemAtIndexPath:(id)arg1;
- (void)swipeWillBeginForItemAtIndexPath:(id)arg1;
- (_Bool)swipeMayBeginForItemAtIndexPath:(id)arg1;
- (id)trailingSwipeActionsForItemAtIndexPath:(id)arg1;
- (id)leadingSwipeActionsForItemAtIndexPath:(id)arg1;
- (id)viewForItemAtIndexPath:(id)arg1;
- (id)indexPathForTouchLocation:(struct CGPoint)arg1;
- (void)resetSwipedIndexPathAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)itemContainerView;
- (id)gestureRecognizerView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <MFSwipableTableViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

