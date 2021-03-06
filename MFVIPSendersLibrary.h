//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailMessageLibraryMiddleware.h"

@class EMVIPManager, MFEmailSet, MFMailMessageLibrary, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface MFVIPSendersLibrary : NSObject <MFMailMessageLibraryMiddleware>
{
    NSObject<OS_dispatch_queue> *_addressBookQueue;
    void *_addressBook;
    int _addressBookResetCount;
    NSLock *_abPersonByVIPIdentifierLock;
    struct __CFDictionary *_abPersonByVIPIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    MFMailMessageLibrary *_library;
    NSObject<OS_dispatch_queue> *_pendingAddressQueue;
    MFEmailSet *_pendingAdds;
    MFEmailSet *_pendingRemoves;
    EMVIPManager *_vipManager;
}

+ (id)defaultMessageLibrary;
+ (id)defaultInstance;
@property(readonly, retain, nonatomic) EMVIPManager *vipManager; // @synthesize vipManager=_vipManager;
- (id)_criterionForEmailAddresses:(id)arg1;
- (id)_messagesForSenders:(id)arg1 success:(_Bool *)arg2;
- (void *)existingPersonForVIP:(id)arg1 usingAddressBook:(void *)arg2;
- (id)vipWithIdentifier:(id)arg1;
- (id)vipForEmailAddresses:(id)arg1 andDisplayNames:(id)arg2;
- (id)allVIPEmailAddressesCriterion;
- (id)allVIPEmailAddresses;
- (id)allVIPSenders;
- (_Bool)hasVIPSenders;
- (void)deleteVIPWithIdentifier:(id)arg1;
- (void)saveVIP:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (_Bool)_setVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(_Bool)arg2;
- (_Bool)_clearVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(_Bool)arg2;
- (void)_libraryDidFinishReconciliation:(id)arg1;
- (void)_performTasksAfterProtectedDataBecomesAvailable;
@property(readonly, retain, nonatomic) id <MFUserProfileProvider> userProfileProvider;
- (void)_removePendingVIPChanges;
- (void)_savePendingVIPChanges_nts;
- (id)_pendingVIPChangesPath;
- (id)library:(id)arg1 willAddMessage:(id)arg2;
- (id)_newVIPFromVIP:(id)arg1 byAddingEmailAddresses:(id)arg2;
- (void)_checkForAddressBookChangesNeedingRevert:(_Bool)arg1;
- (void)checkForAddressBookChanges;
- (void)_handleAddressBookNotification;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

