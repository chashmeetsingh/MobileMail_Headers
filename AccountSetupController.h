//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSRootController.h"

@class ACUIAddAccountViewController;

@interface AccountSetupController : PSRootController
{
    ACUIAddAccountViewController *_addTypeController;
    _Bool _setupWasInProgress;
    id _accountSetupDelegate;
}

@property(nonatomic) __weak id accountSetupDelegate; // @synthesize accountSetupDelegate=_accountSetupDelegate;
- (void).cxx_destruct;
- (_Bool)accountSetupInProgress;
- (void)_accountSetupDidFinish:(id)arg1;
- (void)_accountSetupDidChange:(_Bool)arg1;
- (id)customDefaultPNGName;
- (_Bool)shouldSnapshot;
- (void)didDismissFormSheetView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
