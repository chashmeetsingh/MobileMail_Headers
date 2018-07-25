//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSwipeAction, MessageMiniMall, NSSet, NSString, UIAlertAction, UIColor, UIImage;

@interface MFTriageInteraction : NSObject
{
    _Bool _shouldAskForConfirmation;
    _Bool _destructive;
    id <MFTriageInteractionDelegate> _delegate;
    id <MFPopoverPresentationSource> _presentationSource;
    NSString *_title;
    NSSet *_messages;
    MessageMiniMall *_mall;
}

+ (id)interactionWithMessages:(id)arg1 mall:(id)arg2;
@property(retain, nonatomic) MessageMiniMall *mall; // @synthesize mall=_mall;
@property(copy, nonatomic) NSSet *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id <MFPopoverPresentationSource> presentationSource; // @synthesize presentationSource=_presentationSource;
@property(nonatomic) _Bool shouldAskForConfirmation; // @synthesize shouldAskForConfirmation=_shouldAskForConfirmation;
@property(nonatomic) id <MFTriageInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)previewActionItemForSwipe:(_Bool)arg1;
@property(readonly, nonatomic) MFSwipeAction *miniSwipeAction;
@property(readonly, nonatomic) MFSwipeAction *swipeAction;
@property(readonly, nonatomic) UIAlertAction *alertAction;
- (id)_swipeActionWithMiniIcon:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)miniSwipeActionWithCompletion:(CDUnknownBlockType)arg1;
- (id)swipeActionWithCompletion:(CDUnknownBlockType)arg1;
- (id)alertActionWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_preferredAlertActionStyle;
@property(readonly, nonatomic, getter=isPermitted) _Bool permitted;
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) UIImage *miniIcon;
@property(readonly, nonatomic) UIImage *icon;
- (id)_iconImageName;
@property(readonly, nonatomic) NSString *shortTitle;
- (id)_pluralizedTitleStringWithPrefix:(id)arg1;
- (void)_presentConfirmationSheet:(id)arg1;
- (void)_performInteractionIfPermittedWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_requiresConfirmationPrompt;
- (void)_applyDestructiveChange:(id)arg1;
- (void)_performInteraction_Internal;
- (void)performInteractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)performInteraction;
- (void)dealloc;

@end

