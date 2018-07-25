//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBLSingleMessageClient.h"

@class MFFuture, MFMailMessage, MFPromise, NSString;

@interface _MFMFMailboxMessageBodyProcessorLoaderClient : NSObject <MBLSingleMessageClient>
{
    MFPromise *_promise;
    MFMailMessage *_message;
}

@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;
- (void)notifyFullMessageContentsUnavailableForMessage:(id)arg1 error:(id)arg2;
- (_Bool)wantsContentsOfType:(int)arg1;
- (double)ordering;
- (long long)priority;
- (void)handleDidLoadMessage:(id)arg1;
@property(readonly, nonatomic) MFFuture *future;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

