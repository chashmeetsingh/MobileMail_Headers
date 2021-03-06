//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFSwipableTableViewDelegate.h"
#import "MessageMiniMallObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MessageMiniMall, NSString, PreviousDraftPickerHeaderView, UITableView;

@interface PreviousDraftPickerController : UIViewController <MessageMiniMallObserver, MFSwipableTableViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _actionBlock;
    MessageMiniMall *_mall;
    PreviousDraftPickerHeaderView *_headerView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)miniMallDidLoadMessages:(id)arg1;
- (void)miniMallDidFinishSearch:(id)arg1;
- (void)miniMallCurrentMessageRemoved:(id)arg1;
- (void)miniMallGrowingMailboxesChanged:(id)arg1;
- (void)miniMallFinishedFetch:(id)arg1;
- (void)miniMallMessageCountWillChange:(id)arg1;
- (void)miniMallStartFetch:(id)arg1;
- (void)_monitorActivityDidEnd:(id)arg1;
- (void)miniMallMessagesAtIndexPathsChanged:(id)arg1;
- (void)miniMallMessageCountDidChange:(id)arg1;
- (void)_updateHeaderViewDraftsState;
- (id)_transformIndexPaths:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setActionBlock:(CDUnknownBlockType)arg1;
- (void)pulledToRefresh:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateContentSizeForViewInPopoverAllowShrink:(_Bool)arg1;
- (struct NSDirectionalEdgeInsets)mf_extraContentMargins;
- (struct NSDirectionalEdgeInsets)_tableViewDirectionalLayoutMargins;
- (void)viewDidLayoutSubviews;
- (double)draftRowHeight;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

