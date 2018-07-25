//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSource.h"

@class MFMessageInfoOrderedSet;

@interface ThreadedMiniMallSource : GenericSource
{
    id <MiniMallSource> _source;
    long long _conversationID;
    unsigned int _didFailASearchForOlderMessages:1;
    unsigned int _hasCountedMissingMessages:1;
    unsigned int _hasMissingMessages:1;
    MFMessageInfoOrderedSet *_messageInfosSet;
}

- (id)diagnosticDescription;
- (void)setLastViewedMessage:(id)arg1;
- (id)lastViewedMessageDate;
- (id)lastViewedMessage;
- (void)_sourceDidReload:(id)arg1;
- (void)_conversationHasMerged:(id)arg1;
- (void)_handleSourceNotification:(id)arg1;
- (id)_copyAllMessages;
- (id)_firstMessage;
- (void)markAllMessagesAsViewed;
- (void)markAllMessagesAsNotViewed;
- (void)markAllMessagesAsNotFlagged;
- (void)markAllMessagesAsFlagged;
- (void)_applyOperation:(id)arg1;
- (_Bool)supportsMarkAll;
- (void)moveAllMessagesWithObserver:(id)arg1 toMailbox:(id)arg2;
- (_Bool)supportsMoveAll;
- (void)markAllMessagesAsDeletedOrArchived:(unsigned long long)arg1 withObserver:(id)arg2;
- (_Bool)supportsDeleteAll;
- (_Bool)supportsThreadOperations;
- (_Bool)shouldArchiveByDefaultForMessageInfos:(id)arg1;
- (_Bool)supportsArchivingForMessageInfos:(id)arg1;
- (_Bool)deleteMovesToTrashForMessageInfos:(id)arg1;
- (_Bool)supportsFlagging;
- (_Bool)deleteMovesToTrash;
- (_Bool)shouldArchiveByDefault;
- (_Bool)supportsArchiving;
- (id)mailboxName;
- (_Bool)supportsSearch;
- (id)mailboxUids;
- (id)equivalentCriterion;
- (id)bulletinsContext;
- (id)uniqueIDForStorage;
- (int)correspondingType;
- (_Bool)representsMailboxID:(unsigned int)arg1;
- (_Bool)representsMailboxUid:(id)arg1;
- (void)applyChanges;
- (id)oldestKnownMessage;
- (id)cachedMessageForMessageInfo:(id)arg1;
- (id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(_Bool)arg2;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)_copyConversationHashCriterionMergedWith:(id)arg1;
- (id)copyMessageInfos;
- (_Bool)shouldPlayNewMailSound;
- (_Bool)shouldGrowFetchWindow;
- (_Bool)shouldCompactOnFetch;
- (long long)fetchNumOlderMessages:(unsigned long long)arg1 preservingUID:(id)arg2;
- (_Bool)canLoadOlderMessages;
- (_Bool)needsFetch;
- (unsigned long long)currentFetchWindow;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)remoteMessageCount;
- (unsigned long long)allMessageCount;
- (unsigned long long)messageCount;
- (long long)conversationID;
- (void)_loadMessages;
- (void)flushCaches;
- (unsigned long long)type;
- (void)setProtectedDataAvailable:(_Bool)arg1;
- (_Bool)isProtectedDataAvailable;
- (CDUnknownFunctionPointerType)comparator;
- (void)dealloc;
- (id)initWithSource:(id)arg1 conversationID:(long long)arg2;

@end
