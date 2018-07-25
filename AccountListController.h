//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class MailAccount, NSSet;

@interface AccountListController : UITableViewController
{
    id <AccountListControllerDelegate> _accountListDelegate;
    MailAccount *_selectedAccount;
    NSSet *_disabledAccounts;
    long long _numVisibleColumns;
}

@property(nonatomic) long long numVisibleColumns; // @synthesize numVisibleColumns=_numVisibleColumns;
@property(copy, nonatomic) NSSet *disabledAccounts; // @synthesize disabledAccounts=_disabledAccounts;
@property(retain, nonatomic) MailAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(nonatomic) id <AccountListControllerDelegate> accountListDelegate; // @synthesize accountListDelegate=_accountListDelegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)_enableAccount:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldAutorotate;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (id)_indexPathForSelectedAccount;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canDismiss;
- (void)cancelButtonClicked;
- (void)selectAccount:(id)arg1 mailbox:(id)arg2;
- (_Bool)containsMultipleAccounts;
- (void)dealloc;
- (id)accounts;
- (id)init;

@end
