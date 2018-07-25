//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFAddressBookClient.h"
#import "MFUserProfileProvider.h"

@class MFAddressBookManager, MFLazyCache, NSSet, NSString;

@interface MFMailUserProfileProvider : NSObject <MFAddressBookClient, MFUserProfileProvider>
{
    MFAddressBookManager *_addressBookManager;
    MFLazyCache *_cache;
}

+ (id)defaultProfile;
@property(readonly, nonatomic) MFLazyCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) MFAddressBookManager *addressBookManager; // @synthesize addressBookManager=_addressBookManager;
- (id)_contactEmailAddresses;
- (id)_accountsEmailAddresses;
- (void)_invalidate;
- (void)handle_applicationDidChangeAccounts:(id)arg1;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)arg1;
- (void)addressBookManager:(id)arg1 addressBookDidChange:(void *)arg2;
@property(readonly, copy, nonatomic) NSSet *allEmailAddresses;
- (id)contactWithKeysToFetch:(id)arg1;
- (id)contact;
@property(readonly, copy, nonatomic) NSSet *contactEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *accountsEmailAddresses;
- (void)dealloc;
- (id)initWithAddressBookManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
