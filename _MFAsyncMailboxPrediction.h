//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailboxPrediction.h"

@class MFFuture, NSString;

@interface _MFAsyncMailboxPrediction : NSObject <MFMailboxPrediction>
{
    _Bool _didWait;
    MFFuture *_future;
    unsigned long long _context;
    double _startedAt;
    double _finishedAt;
}

+ (id)mailboxPredictionFromFuture:(id)arg1 context:(unsigned long long)arg2 startedAt:(double)arg3;
@property(nonatomic) double finishedAt; // @synthesize finishedAt=_finishedAt;
@property(nonatomic) double startedAt; // @synthesize startedAt=_startedAt;
@property(nonatomic) _Bool didWait; // @synthesize didWait=_didWait;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) MFFuture *future; // @synthesize future=_future;
- (void).cxx_destruct;
- (void)_reportTimingForSuccess:(_Bool)arg1 processing:(double)arg2 waiting:(double)arg3;
- (id)_waitOnceForFutureResult;
- (id)copyForContext:(unsigned long long)arg1;
- (id)diagnostics;
- (id)mailboxes;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

