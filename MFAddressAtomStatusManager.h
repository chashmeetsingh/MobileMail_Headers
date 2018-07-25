//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFAddressBookClient.h"

@class MFMessageLoadingContext, MFMessageLoadingContextSMIMEInfo, MailAccount, NSError, NSString;

@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient>
{
    id <MFAddressAtomProvider> _atomProvider;
    MFMessageLoadingContext *_context;
    MailAccount *_account;
    id <MFCancelable> _smimeCancelable;
    MFMessageLoadingContextSMIMEInfo *_smimeInfo;
    NSError *_smimeError;
}

@property(retain, nonatomic, setter=setSMIMEError:) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(retain, nonatomic, setter=setSMIMEInfo:) MFMessageLoadingContextSMIMEInfo *smimeInfo; // @synthesize smimeInfo=_smimeInfo;
@property(retain, nonatomic) id <MFCancelable> smimeCancelable; // @synthesize smimeCancelable=_smimeCancelable;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak MFMessageLoadingContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <MFAddressAtomProvider> atomProvider; // @synthesize atomProvider=_atomProvider;
- (void).cxx_destruct;
- (_Bool)_atomContainsVIPSender:(id)arg1;
- (void)_updateVIPStatus;
- (void)_vipSendersDidChange:(id)arg1;
- (void)_accountsDidChange:(id)arg1;
- (void)_trustDidChange:(id)arg1;
- (void)_updateAtomsInList:(id)arg1;
- (void)updateTrustForDisplayedAtoms;
- (void)updateSMIMEInfo:(id)arg1 error:(id)arg2;
- (void)_invalidateAtoms;
- (void)addressBookManager:(id)arg1 addressBookDidChange:(void *)arg2;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)arg1;
- (void)dealloc;
- (id)initWithLoadingContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
