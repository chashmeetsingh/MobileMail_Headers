//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol MailStatusBarViewDelegate
- (void)tintColorDidChange;
- (NSString *)mailboxQualifier;
- (_Bool)shouldShowSubtitle;
- (void)updateBarItemTitle:(NSString *)arg1 secondaryTitle:(NSString *)arg2;
- (long long)interfaceOrientation;
- (NSDictionary *)currentStatus;
@end

