//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface MFNanoServerFullMessageLoader : NSObject
{
    _Bool _isProtectedDataAvailable;
    _Bool _isNetworkUp;
    _Bool _isRetryScheduled;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSOperationQueue *_operationQueue;
    id _networkObserverId;
    NSMutableDictionary *_failedMessageIdsByRequest;
    double _currentBackoff;
}

@property(nonatomic) double currentBackoff; // @synthesize currentBackoff=_currentBackoff;
@property(nonatomic) _Bool isRetryScheduled; // @synthesize isRetryScheduled=_isRetryScheduled;
@property(retain, nonatomic) NSMutableDictionary *failedMessageIdsByRequest; // @synthesize failedMessageIdsByRequest=_failedMessageIdsByRequest;
@property(nonatomic) _Bool isNetworkUp; // @synthesize isNetworkUp=_isNetworkUp;
@property(nonatomic) _Bool isProtectedDataAvailable; // @synthesize isProtectedDataAvailable=_isProtectedDataAvailable;
@property(retain, nonatomic) id networkObserverId; // @synthesize networkObserverId=_networkObserverId;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
- (id)_libraryMessagesKeyedByStore:(id)arg1;
- (void)_libraryAvailabilityChanged;
- (void)resetExponentialBackoff;
- (double)_exponentialBackoff;
- (void)_suspendOrResumeOperationQueue;
- (void)_networkStatusChanged;
- (void)_enqueueMessageIds:(id)arg1 forRequest:(id)arg2;
- (void)_dispatchOperation;
- (void)_handleResults:(id)arg1 forRequest:(id)arg2 isProtectedMessage:(_Bool)arg3;
- (void)_scheduleRetryForFailedMessageIds:(id)arg1 failedRequest:(id)arg2;
- (id)_dequeueMessageIdsFromFirstRequestAvailable:(out id *)arg1;
- (_Bool)_isProtectedDataAvailable;
- (id)_loadFullMessageForMessageIds:(id)arg1 isProtectedMessage:(_Bool *)arg2;
- (void)_processPendingRequests;
- (void)cancelAllPendingOperations;
- (void)attemptToCancelFullMessageLoadForMessageIds:(id)arg1;
- (void)loadFullMessagesForMessageIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_setupNetworkObserver;
- (void)_registerForLibraryAvailabilityNotifications;
- (id)initWithCallbackQueue:(id)arg1;

@end

