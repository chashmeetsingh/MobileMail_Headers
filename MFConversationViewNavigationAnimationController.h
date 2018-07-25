//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class MFExpandedMessageCell, MFInteractiveMessageDismissalTransition, NSString;

@interface MFConversationViewNavigationAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    MFInteractiveMessageDismissalTransition *_interactiveTransition;
    _Bool _isTransitioningBack;
    _Bool _isInteractive;
    MFExpandedMessageCell *_conversationCell;
    struct CGPoint _animationOffset;
}

@property(nonatomic) struct CGPoint animationOffset; // @synthesize animationOffset=_animationOffset;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(nonatomic) _Bool isTransitioningBack; // @synthesize isTransitioningBack=_isTransitioningBack;
@property(retain, nonatomic) MFExpandedMessageCell *conversationCell; // @synthesize conversationCell=_conversationCell;
- (void)animationEnded:(_Bool)arg1;
@property(readonly, retain, nonatomic) MFInteractiveMessageDismissalTransition *interactiveTransition;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

