//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISplitViewController.h"

#import "TransferMailboxPickerAnimationDelegate.h"
#import "UIMultiColumnViewControllerDelegate.h"
#import "UISplitViewControllerDelegate.h"

@class MFTransferStackViewController, NSSet, NSString, TransferNavigationController, UIMultiColumnViewController, UINavigationController;

@interface MFTransferSplitViewController : UISplitViewController <UIMultiColumnViewControllerDelegate, UISplitViewControllerDelegate, TransferMailboxPickerAnimationDelegate>
{
    unsigned long long _transferOptions;
    NSSet *_messagesToDisplay;
    UINavigationController *_stackNavigationController;
    _Bool _usePushFromLeftPresentation;
    _Bool _receivedFirstNumColumnChange;
    TransferNavigationController *_transferNavigationController;
    MFTransferStackViewController *_stackViewController;
    UIMultiColumnViewController *_multiColumnController;
}

@property(nonatomic) _Bool receivedFirstNumColumnChange; // @synthesize receivedFirstNumColumnChange=_receivedFirstNumColumnChange;
@property(nonatomic) _Bool usePushFromLeftPresentation; // @synthesize usePushFromLeftPresentation=_usePushFromLeftPresentation;
@property(retain, nonatomic) UIMultiColumnViewController *multiColumnController; // @synthesize multiColumnController=_multiColumnController;
@property(retain, nonatomic) MFTransferStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
@property(retain, nonatomic) TransferNavigationController *transferNavigationController; // @synthesize transferNavigationController=_transferNavigationController;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(struct CGRect)arg2 inView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2;
- (void)transferMailboxPickerController:(id)arg1 animateMessageToPoint:(struct CGPoint)arg2 inView:(id)arg3 didFinishDelegate:(id)arg4 selector:(SEL)arg5 context:(id)arg6;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_ensurePrimaryViewControllerIsVisibleAnimated:(_Bool)arg1;
- (void)multiColumnViewController:(id)arg1 willShowColumns:(unsigned long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 options:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

