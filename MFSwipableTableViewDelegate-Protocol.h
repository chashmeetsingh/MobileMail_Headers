//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"

@class MFSwipableTableView, NSArray, NSIndexPath;

@protocol MFSwipableTableViewDelegate <UITableViewDelegate>

@optional
- (double)leadingMarginPaddingWhenEditingInTableView:(MFSwipableTableView *)arg1;
- (NSArray *)tableView:(MFSwipableTableView *)arg1 trailingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(MFSwipableTableView *)arg1 leadingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg2;
@end

