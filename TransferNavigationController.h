//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class AccountListController, TransferMailboxPickerController;

@interface TransferNavigationController : UINavigationController
{
    AccountListController *_accountListController;
    TransferMailboxPickerController *_mailboxPickerController;
    _Bool _multipleMessages;
}

@property(readonly, nonatomic) TransferMailboxPickerController *mailboxPickerController; // @synthesize mailboxPickerController=_mailboxPickerController;
@property(readonly, nonatomic) AccountListController *accountListController; // @synthesize accountListController=_accountListController;
- (void)purgeMemoryForReason:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (id)_disabledMailAccountForSourceAccounts:(id)arg1 toSameAccountOnly:(_Bool)arg2;
- (_Bool)canDismiss;
- (void)finishAnimated:(_Bool)arg1;
- (void)updatePrompt;
- (void)setMailboxPrediction:(id)arg1;
- (void)setOnFinish:(CDUnknownBlockType)arg1;
- (void)setOnSelectMailbox:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 options:(unsigned long long)arg2;
- (id)transferMailboxPickerController;

@end

