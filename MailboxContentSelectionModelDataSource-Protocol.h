//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMessageInfo, MailboxContentSelectionModel, NSIndexPath, NSSet;

@protocol MailboxContentSelectionModelDataSource <NSObject>
- (_Bool)selectionModel:(MailboxContentSelectionModel *)arg1 isExpandedIndexPath:(NSIndexPath *)arg2;
- (_Bool)selectionModel:(MailboxContentSelectionModel *)arg1 isRootIndexPath:(NSIndexPath *)arg2;
- (void)selectionModel:(MailboxContentSelectionModel *)arg1 getSourceStateHasUnread:(_Bool *)arg2 hasUnflagged:(_Bool *)arg3;
- (void)selectionModel:(MailboxContentSelectionModel *)arg1 getConversationStateAtTableIndexPath:(NSIndexPath *)arg2 hasUnread:(_Bool *)arg3 hasUnflagged:(_Bool *)arg4;
- (_Bool)selectionModel:(MailboxContentSelectionModel *)arg1 shouldArchiveByDefaultForTableIndexPath:(NSIndexPath *)arg2;
- (_Bool)selectionModel:(MailboxContentSelectionModel *)arg1 supportsArchivingForTableIndexPath:(NSIndexPath *)arg2;
- (_Bool)selectionModel:(MailboxContentSelectionModel *)arg1 deleteMovesToTrashForTableIndexPath:(NSIndexPath *)arg2;
- (NSSet *)selectionModel:(MailboxContentSelectionModel *)arg1 messageInfosAtTableIndexPath:(NSIndexPath *)arg2;
- (NSSet *)selectionModel:(MailboxContentSelectionModel *)arg1 messagesForMessageInfos:(NSSet *)arg2;
- (NSSet *)selectionModel:(MailboxContentSelectionModel *)arg1 expandedIndexPathsForRootIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)selectionModel:(MailboxContentSelectionModel *)arg1 rootIndexPathForCollectionContainingMessageInfo:(MFMessageInfo *)arg2;
- (NSIndexPath *)selectionModel:(MailboxContentSelectionModel *)arg1 indexPathForMessageInfo:(MFMessageInfo *)arg2;
- (id <MiniMallSource>)selectionModel:(MailboxContentSelectionModel *)arg1 sourceForMessageInfo:(MFMessageInfo *)arg2;
- (NSSet *)sourcesForSelectionModel:(MailboxContentSelectionModel *)arg1;

@optional
- (NSSet *)selectionModel:(MailboxContentSelectionModel *)arg1 sourcesForMessageInfos:(NSSet *)arg2;
@end

