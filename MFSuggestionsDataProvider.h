//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailMessageLibrary, NSArray, NSCache, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<SGSuggestionsServiceMailProtocol>;

@interface MFSuggestionsDataProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_suggestionsQueue;
    MFMailMessageLibrary *_library;
    NSObject<SGSuggestionsServiceMailProtocol> *_harvesterService;
    NSCache *_mailboxCache;
    NSObject<OS_dispatch_semaphore> *_scheduledDownloadSemaphore;
    NSMutableArray *_scheduledDownloadClients;
    _Bool _suspended;
    int _fullDownloadToken;
    NSArray *_unconfirmedLostMessages;
    double _lastUnconfirmedLostMessagesSearchTime;
}

+ (_Bool)isHarvestingSupported;
@property(nonatomic) double lastUnconfirmedLostMessagesSearchTime; // @synthesize lastUnconfirmedLostMessagesSearchTime=_lastUnconfirmedLostMessagesSearchTime;
@property(retain, nonatomic) NSArray *unconfirmedLostMessages; // @synthesize unconfirmedLostMessages=_unconfirmedLostMessages;
- (void)refreshLostMessagesUntilDeferred:(CDUnknownBlockType)arg1;
- (void)_libraryWillBecomeUnavailable:(id)arg1;
- (void)_libraryFinishedReconciliation:(id)arg1;
- (id)_messageFromMessageInfo:(id)arg1;
- (id)_mailboxForMessageLikeObject:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)_unregisterXpcActivity;
- (void)_registerXpcActivity;
- (void)_processBackgroundDownload;
- (void)_scheduleBackgroundDownload;
- (id)_libraryMessagesForSGMailMessageKeys:(id)arg1;
- (void)resumeFullDownloadProcessing;
- (id)initWithLibrary:(id)arg1;
- (void)dealloc;
- (_Bool)_protectedDataAvailable;

@end

