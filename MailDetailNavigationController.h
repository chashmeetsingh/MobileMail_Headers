//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString;

@interface MailDetailNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    long long _ancestorSplitViewControllerDisplayMode;
    _Bool _isPerformingCustomTransition;
}

@property(nonatomic) _Bool isPerformingCustomTransition; // @synthesize isPerformingCustomTransition=_isPerformingCustomTransition;
- (_Bool)_shouldCrossFadeNavigationBar;
- (_Bool)_willPerformCustomNavigationTransitionForPush;
- (_Bool)_willPerformCustomNavigationTransitionForPop;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) long long ancestorSplitViewControllerDisplayMode;
- (id)bottomMostConversationViewController;
- (id)topMostConversationViewController;
- (id)_findConversationViewControllerStartingFromTopOfStack:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_shouldHideBarsInCurrentLayout;
- (void)_updateBarHidingEnabled;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

