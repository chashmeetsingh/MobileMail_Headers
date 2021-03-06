//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageSuggestionSession, NSString, UIImage, UIViewController;

@interface MessageCallToAction : NSObject
{
    _Bool _primaryActionCompleted;
    long long _category;
    NSString *_supplementaryActionTitle;
    MessageSuggestionSession *_session;
    id _context;
}

+ (id)callsToActionFromSuggestions:(id)arg1;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak MessageSuggestionSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *supplementaryActionTitle; // @synthesize supplementaryActionTitle=_supplementaryActionTitle;
@property(nonatomic, getter=isPrimaryActionCompleted) _Bool primaryActionCompleted; // @synthesize primaryActionCompleted=_primaryActionCompleted;
@property(nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)ignore;
- (void)confirm;
- (void)prepareConfirmationViewControllerWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIViewController *confirmationViewController;
- (id)compactAction;
@property(readonly, copy, nonatomic) NSString *secondaryActionTitle;
@property(readonly, copy, nonatomic) NSString *primaryActionTitle;
- (id)compactSubtitle;
- (id)compactTitle;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hideAfterConfirming;
@property(readonly, copy, nonatomic) NSString *mixedBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, retain, nonatomic) UIImage *notificationAppIcon;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCallToAction:(id)arg1;
- (id)description;
- (void)dealloc;

@end

