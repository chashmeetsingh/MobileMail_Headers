//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMessageBulletinsObserver, NSArray, NSDictionary, NSError;

@protocol MFMessageBulletinsObserverDelegate <NSObject>
- (void)notificationService:(MFMessageBulletinsObserver *)arg1 didRemoveMessageIds:(NSArray *)arg2;
- (void)notificationService:(MFMessageBulletinsObserver *)arg1 didFetchSummaryForMessages:(NSArray *)arg2;
- (void)notificationService:(MFMessageBulletinsObserver *)arg1 didFetchMessages:(NSArray *)arg2;
- (void)notificationService:(MFMessageBulletinsObserver *)arg1 didChangeAccounts:(NSArray *)arg2 error:(NSError *)arg3;
- (void)updateClearedInfoCutoffDatesForMailboxes:(NSDictionary *)arg1;
- (void)invalidateSectionParametersForNotificationService:(MFMessageBulletinsObserver *)arg1;
- (void)messagesInvalidatedForNotificationService:(MFMessageBulletinsObserver *)arg1;
- (void)protectedDataBecameAvailableForNotificationService:(MFMessageBulletinsObserver *)arg1;
@end

