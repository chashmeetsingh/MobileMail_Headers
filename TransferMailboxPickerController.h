//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AccountListControllerDelegate.h"
#import "CAAnimationDelegate.h"

@class MFMailboxUid, MFMessageScreenshotGenerator, MailAccount, MailboxListViewControllerMail, MailboxTableCell, NSArray, NSMutableArray, NSSet, NSString, TransferMailboxPickerPalette, UIImageView, UIView;

@interface TransferMailboxPickerController : UIViewController <CAAnimationDelegate, AccountListControllerDelegate>
{
    NSArray *_sortedMessages;
    NSMutableArray *_senders;
    NSString *_subject;
    MailAccount *_account;
    NSSet *_sourceAccounts;
    NSSet *_sourceMailboxes;
    MFMailboxUid *_selectedMailbox;
    MailboxListViewControllerMail *_mailboxListController;
    MFMessageScreenshotGenerator *_screenshotGenerator;
    unsigned int _multipleSourceAccounts:1;
    MailboxTableCell *_tableCell;
    TransferMailboxPickerPalette *_pickerPalette;
    UIView *_animatedView;
    UIView *_lastSuperview;
    UIImageView *_backstop;
    _Bool _hasReceivedViewWillAppear;
    _Bool _didSelectMailbox;
    id <MFMailboxPrediction> _mailboxPrediction;
    CDUnknownBlockType _onSelectMailbox;
    CDUnknownBlockType _onFinish;
    id <TransferMailboxPickerAnimationDelegate> _animationDelegate;
}

@property(readonly, nonatomic) NSSet *sourceAccounts; // @synthesize sourceAccounts=_sourceAccounts;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <MFMailboxPrediction> mailboxPrediction; // @synthesize mailboxPrediction=_mailboxPrediction;
@property(nonatomic) __weak id <TransferMailboxPickerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(copy, nonatomic) CDUnknownBlockType onFinish; // @synthesize onFinish=_onFinish;
@property(copy, nonatomic) CDUnknownBlockType onSelectMailbox; // @synthesize onSelectMailbox=_onSelectMailbox;
- (void).cxx_destruct;
- (void)accountList:(id)arg1 didCancel:(_Bool)arg2;
- (void)accountList:(id)arg1 didSelectAccount:(id)arg2;
- (void)mailboxList:(id)arg1 didSelectMailbox:(id)arg2;
- (void)allMessageAnimationsDidStop;
- (void)animateMessageToPoint:(struct CGPoint)arg1 inView:(id)arg2 didFinishDelegate:(id)arg3 selector:(SEL)arg4 context:(id)arg5;
- (void)messageAnimationDidStop;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateMessageToCell:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)initiateTransfer;
- (void)_countMailboxPredictionDidCancel;
- (void)finishAnimated:(_Bool)arg1;
- (void)finish;
- (_Bool)canDismiss;
- (_Bool)shouldSnapshot;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_didReceiveTargetDetailChangedNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setPaletteVisible:(_Bool)arg1;
- (void)updateSourceMailboxesFromMessages:(id)arg1;
- (void)updateSubjectFromMessages:(id)arg1;
- (void)updateSenderFromMessages:(id)arg1;
- (double)_navigationBarAndPaletteMaxY;
- (double)_navigationBarMaxY;
- (void)restoreScrollOffset;
- (void)saveScrollOffset;
- (double)_yOffsetMaximum;
- (void)updateTitle;
- (id)contentScrollView;
- (void)loadView;
- (void)mailAccountsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

