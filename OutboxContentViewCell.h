//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailboxContentViewCell.h"

@class UIActivityIndicatorView, UIButton;

@interface OutboxContentViewCell : MailboxContentViewCell
{
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_errorButton;
    unsigned int _inDelivery:1;
}

- (void)_errorButtonPressed:(id)arg1;
- (void)layoutStatusIndicatorViews;
- (void)updateFlagsFromMessage:(id)arg1 isUnread:(_Bool)arg2 isFlagged:(_Bool)arg3;
- (void)dealloc;

@end

