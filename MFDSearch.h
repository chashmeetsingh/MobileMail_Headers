//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSearch.h"

#import "MSDSearchProtocol.h"
#import "MessageMiniMallObserver.h"
#import "QueryProgressMonitor.h"

@class MFActivityMonitor, MFMailMessageLibrary, MFMessageCriterion, MFPromise, MFXPCClient, MessageMiniMall, NSArray, NSProgress, NSString, _MFDSearchResultsQueue;

@interface MFDSearch : MSSearch <QueryProgressMonitor, MessageMiniMallObserver, MSDSearchProtocol>
{
    MFMailMessageLibrary *_library;
    MFXPCClient *_client;
    MFActivityMonitor *_monitor;
    MFMessageCriterion *_criteria;
    id <MFMessageIterationFilter> _filter;
    unsigned long long _options;
    NSArray *_keys;
    MessageMiniMall *_mall;
    _MFDSearchResultsQueue *_resultsQueue;
    MFPromise *_searchPromise;
    NSProgress *_searchProgress;
}

+ (id)endpointInfo;
@property(retain, nonatomic) NSProgress *searchProgress; // @synthesize searchProgress=_searchProgress;
@property(retain, nonatomic) MFPromise *searchPromise; // @synthesize searchPromise=_searchPromise;
@property(retain, nonatomic) _MFDSearchResultsQueue *resultsQueue; // @synthesize resultsQueue=_resultsQueue;
@property(retain, nonatomic) MessageMiniMall *mall; // @synthesize mall=_mall;
@property(copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <MFMessageIterationFilter> filter; // @synthesize filter=_filter;
@property(retain, nonatomic) MFMessageCriterion *criteria; // @synthesize criteria=_criteria;
- (void)miniMallGrowingMailboxesChanged:(id)arg1;
- (void)miniMallDidLoadMessages:(id)arg1;
- (void)miniMallCurrentMessageRemoved:(id)arg1;
- (void)miniMallFinishedFetch:(id)arg1;
- (void)miniMallStartFetch:(id)arg1;
- (void)miniMallMessagesAtIndexPathsChanged:(id)arg1;
- (void)miniMallMessageCountWillChange:(id)arg1;
- (void)miniMallDidFinishSearch:(id)arg1;
- (void)miniMallMessageCountDidChange:(id)arg1;
- (unsigned int)_libraryOptions;
- (void)_backgroundSearch;
- (_Bool)_shouldPerformMallSearch;
- (id)_performMallSearch;
- (void)_performLibrarySearch;
- (_Bool)shouldCancel;
- (void)stop;
- (void)start;
- (void)_libraryWillBecomeUnavailable:(id)arg1;
- (void)_autoFetchDone:(id)arg1;
- (void)_registerForAutoFetchFinishedNotification;
- (_Bool)_hasSearchableMailAccount;
- (void)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3;
- (id)_searchResultsProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (void)dealloc;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

