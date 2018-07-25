//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface MailXPCServices : NSObject
{
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_services;
    NSMutableArray *_connections;
    NSLock *_connectionsLock;
}

+ (id)sharedServer;
- (void)_enumerateServiceClasses:(CDUnknownBlockType)arg1;
- (Class)_serviceClassForName:(id)arg1;
- (void)registerServiceClass:(Class)arg1;
- (void)_dispatchMessage:(id)arg1 onQueue:(id)arg2 connectionState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;
- (void)_registerConnection:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
