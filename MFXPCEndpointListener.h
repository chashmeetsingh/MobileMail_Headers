//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class MFWeakReferenceHolder, NSArray, NSLock, NSMutableArray, NSString, NSXPCListener;

@interface MFXPCEndpointListener : NSObject <NSXPCListenerDelegate>
{
    NSLock *_lock;
    NSMutableArray *_clientInfos;
    MFWeakReferenceHolder *_endpointHolder;
    NSXPCListener *_listener;
}

@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeClientInfo:(id)arg1;
- (void)addClientInfo:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *clients;
@property(readonly, copy) NSString *description;
- (id)endpointInfo;
- (void)dealloc;
- (id)initWithEndpointInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

