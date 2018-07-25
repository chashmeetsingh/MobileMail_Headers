//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MFAccountStatusManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_accounts;
}

@property(retain, nonatomic) NSMutableDictionary *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)_networkStatusChanged:(id)arg1;
- (void)_autoFetchJobOrPushCompleted:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_sendAccountStatusDidChangeNotification;
- (void)sendAccountStatusDidChangeNotification;
- (void)_updateAccountsForNetworkAvailability;
- (_Bool)_accountHasError:(id)arg1;
- (id)_accountStatusErrors;
- (id)_statusForAccount:(id)arg1;
- (void)_removeAccountByUniqueId:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)_updateAccountStatusForAccount:(id)arg1 withStatus:(long long)arg2 error:(id)arg3;
- (void)updateAccountsForNetworkAvailability;
- (id)accountStatusErrors;
- (_Bool)accountHasError:(id)arg1;
- (id)statusForAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)updateAccountStatusForAccount:(id)arg1 withStatus:(long long)arg2 error:(id)arg3;
- (id)init;

@end
