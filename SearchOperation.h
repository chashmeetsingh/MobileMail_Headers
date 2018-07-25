//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSProgressReporting.h"

@class MFMailMessageLibrary, MFMessageCriterion, NSArray, NSCondition, NSMutableArray, NSNumber, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSProgress, NSString, SearchManager, SourceSearchContext;

@interface SearchOperation : NSOperation <NSProgressReporting>
{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    NSCondition *_condition;
    struct os_unfair_lock_s _monitorLock;
    NSMutableArray *_monitors;
    MFMessageCriterion *_sourcesCriterion;
    SearchManager *_manager;
    NSNumber *_identifier;
    MFMailMessageLibrary *_library;
    SourceSearchContext *_searchContext;
    SourceSearchContext *_serverSearchContext;
    NSArray *_sources;
}

@property(readonly, copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(readonly, copy, nonatomic) SourceSearchContext *serverSearchContext; // @synthesize serverSearchContext=_serverSearchContext;
@property(readonly, copy, nonatomic) SourceSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(readonly, nonatomic) MFMessageCriterion *sourcesCriterion; // @synthesize sourcesCriterion=_sourcesCriterion;
@property(readonly, nonatomic) MFMailMessageLibrary *library; // @synthesize library=_library;
@property(retain) NSNumber *identifier; // @synthesize identifier=_identifier;
@property __weak SearchManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)cancel;
- (void)signal;
- (void)waitForFinishOrCancel;
- (void)afterDelay:(double)arg1 perform:(CDUnknownBlockType)arg2;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)_monitorWork:(CDUnknownBlockType)arg1;
- (void)cancelMonitors;
- (void)unregisterMonitor:(id)arg1;
- (void)registerMonitor:(id)arg1;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)baseCriterionFromSources:(id)arg1;
- (id)initWithManager:(id)arg1 library:(id)arg2 sources:(id)arg3 searchContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

