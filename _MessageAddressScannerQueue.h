//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFBufferedQueue.h"

@class CRRecentContactsLibrary, MFSparseMutable64IndexSet, NSObject<OS_dispatch_queue>;

@interface _MessageAddressScannerQueue : MFBufferedQueue
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    MFSparseMutable64IndexSet *_hashes;
    CRRecentContactsLibrary *_recentsLibrary;
}

@property(retain, nonatomic) CRRecentContactsLibrary *recentsLibrary; // @synthesize recentsLibrary=_recentsLibrary;
- (_Bool)handleHashes:(id)arg1;
- (_Bool)_flush;
- (void)removeAllObjects;
- (_Bool)addHash:(long long)arg1;
- (_Bool)isEmpty;
- (void)setTargetQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

