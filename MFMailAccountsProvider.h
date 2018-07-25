//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFAccountsProvider.h"

@class NSArray, NSSet, NSString;

@interface MFMailAccountsProvider : NSObject <MFAccountsProvider>
{
    NSArray *_mailAccounts;
    NSSet *_displayedAccounts;
    NSArray *_orderedAccounts;
    unsigned long long _numberOfActiveAccounts;
    unsigned long long _numberOfInactiveAccounts;
}

@property(nonatomic) unsigned long long numberOfInactiveAccounts; // @synthesize numberOfInactiveAccounts=_numberOfInactiveAccounts;
@property(nonatomic) unsigned long long numberOfActiveAccounts; // @synthesize numberOfActiveAccounts=_numberOfActiveAccounts;
@property(copy, nonatomic) NSArray *orderedAccounts; // @synthesize orderedAccounts=_orderedAccounts;
@property(copy, nonatomic) NSSet *displayedAccounts; // @synthesize displayedAccounts=_displayedAccounts;
@property(copy, nonatomic) NSArray *mailAccounts; // @synthesize mailAccounts=_mailAccounts;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *autofetchAccounts;
@property(readonly, nonatomic, getter=isDisplayingMultipleAccounts) _Bool displayingMultipleAccounts;
- (id)_displayedAccountsIdentifiers;
- (id)_activeNonLocalAccountsWithMailAccounts:(id)arg1;
- (id)_executeChange:(CDUnknownBlockType)arg1;
- (void)_accountsOrderDidChange:(id)arg1;
- (void)_registerNotifications;
- (id)reloadWithMailAccounts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

