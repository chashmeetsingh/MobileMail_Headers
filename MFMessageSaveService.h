//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailService.h"

@class NSString;

@interface MFMessageSaveService : NSObject <MFMailService>
{
}

+ (_Bool)handleMessage:(id)arg1 connectionState:(id)arg2 replyObject:(id *)arg3 error:(id *)arg4;
+ (id)requiredEntitlement;
+ (id)serviceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

