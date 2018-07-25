//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_MFInteractiveAnimating.h"

@class MFApplicationSceneController, NSString, NSUUID, UISpringLoadedInteraction, UIView, UIViewController<MFApplicationSceneActor>, _MFActorItemView, _MFBorrowedActorView;

@interface _MFActorItem : NSObject <_MFInteractiveAnimating>
{
    MFApplicationSceneController *_hostSceneController;
    struct UIViewController *_viewController;
    id _resurrectionIdentifier;
    NSString *_identificationString;
    _MFActorItemView *_containerView;
    _Bool _snapshotViewNeedsUpdate;
    _Bool _isPurged;
    UIView *_subviewToSnapshot;
    _MFBorrowedActorView *_lentSnapshotView;
    _MFBorrowedActorView *_lentContentView;
    NSUUID *_snapshotIdentifier;
    UISpringLoadedInteraction *_springLoadedInteraction;
}

@property(retain, nonatomic) UISpringLoadedInteraction *springLoadedInteraction; // @synthesize springLoadedInteraction=_springLoadedInteraction;
@property(retain, nonatomic) NSUUID *snapshotIdentifier; // @synthesize snapshotIdentifier=_snapshotIdentifier;
@property(copy, nonatomic) NSString *identificationString; // @synthesize identificationString=_identificationString;
@property(nonatomic) __weak UIView *subviewToSnapshot; // @synthesize subviewToSnapshot=_subviewToSnapshot;
@property(readonly, nonatomic) _MFActorItemView *view; // @synthesize view=_containerView;
@property(readonly, nonatomic, getter=isPurged) _Bool purged; // @synthesize purged=_isPurged;
@property(retain, nonatomic) id resurrectionIdentifier; // @synthesize resurrectionIdentifier=_resurrectionIdentifier;
@property(readonly, nonatomic) UIViewController<MFApplicationSceneActor> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak MFApplicationSceneController *hostSceneController; // @synthesize hostSceneController=_hostSceneController;
- (void).cxx_destruct;
- (void)finishInteractiveAnimation;
- (void)continueInteractiveAnimation;
- (void)cancelInteractiveAnimation;
- (void)setAnimationProgress:(double)arg1;
- (void)startInteractiveAnimation;
- (void)setSnapshotView:(id)arg1;
- (id)snapshotView;
- (void)populateIdentificationString;
- (void)actorViewControllerWasResurrectedWithViewController:(id)arg1;
- (void)actorViewControllerWasPurged;
- (void)setDimmingIntensity:(double)arg1 animated:(_Bool)arg2;
- (void)_setViewController:(struct UIViewController *)arg1;
- (double)dimmingIntensity;
- (void)returnBorrowedActorSnapshotView:(id)arg1;
- (void)returnBorrowedActorContentView:(id)arg1;
- (id)lendActorSnapshotView;
- (id)lendActorContentView;
@property(readonly, copy) NSString *description;
- (id)initWithActorViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

