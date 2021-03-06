//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet;

@interface MFNanoServerFullMessageLoaderBatchRequest : NSObject <NSCopying>
{
    _Bool _resultIncludesProtectedMessages;
    CDUnknownBlockType _completionBlock;
    NSMutableOrderedSet *_outstandingMessageIdRequests;
    NSMutableSet *_pendingMessageIdRequests;
    NSMutableDictionary *_resultedMessagesById;
}

@property(nonatomic) _Bool resultIncludesProtectedMessages; // @synthesize resultIncludesProtectedMessages=_resultIncludesProtectedMessages;
@property(retain, nonatomic) NSMutableDictionary *resultedMessagesById; // @synthesize resultedMessagesById=_resultedMessagesById;
@property(retain, nonatomic) NSMutableSet *pendingMessageIdRequests; // @synthesize pendingMessageIdRequests=_pendingMessageIdRequests;
@property(retain, nonatomic) NSMutableOrderedSet *outstandingMessageIdRequests; // @synthesize outstandingMessageIdRequests=_outstandingMessageIdRequests;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (id)results;
- (_Bool)isRequestCompleted;
- (void)addResult:(id)arg1 isProtectedMessage:(_Bool)arg2;
- (void)addResults:(id)arg1 isProtectedMessage:(_Bool)arg2;
- (void)cancelRequestForMessageId:(id)arg1;
- (_Bool)enqueueMessageId:(id)arg1;
- (_Bool)enqueueMessageIds:(id)arg1;
- (id)dequeueMessageId;
- (id)dequeueAllMessageIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessageIds:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

