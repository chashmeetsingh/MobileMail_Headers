//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFXPCServer.h"

#import "MSDStorageProtocol.h"

@class MFMailPurgeableStorage, NSString;

@interface MFDStorage : MFXPCServer <MSDStorageProtocol>
{
    MFMailPurgeableStorage *_purgeableStorage;
}

+ (id)exportedInterface;
@property(retain, nonatomic) MFMailPurgeableStorage *purgeableStorage; // @synthesize purgeableStorage=_purgeableStorage;
- (void).cxx_destruct;
- (void)reclaimableSpaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)reclaimSpaceOlderThan:(id)arg1 spaceTarget:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

