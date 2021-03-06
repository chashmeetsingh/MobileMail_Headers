//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageCallToAction.h"

#import "EKEventEditViewDelegate.h"
#import "EKEventViewDelegatePrivate.h"

@class NSString, SGRealtimeEvent;

@interface MessageCallToActionRealtimeEvent : MessageCallToAction <EKEventEditViewDelegate, EKEventViewDelegatePrivate>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_action;
}

+ (id)callToActionForRealtimeEvent:(id)arg1;
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)ignore;
- (void)confirm;
- (void)prepareConfirmationViewControllerWithHandler:(CDUnknownBlockType)arg1;
- (id)_eventViewController;
- (id)supplementaryActionTitle;
- (id)secondaryActionTitle;
- (id)primaryActionTitle;
- (id)subtitle;
- (id)_eventAbsoluteStartTime;
- (id)title;
@property(readonly, retain, nonatomic) SGRealtimeEvent *realtimeEvent;
- (id)bundleIdentifier;
- (long long)compare:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

