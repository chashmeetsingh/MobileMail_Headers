//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFNanoBridgeSettingsMailbox.h"

#import "NSSecureCoding.h"

@class MFMailboxUid, NSString, NSURL;

@interface MFNanoBridgeSettingsAccountSpecificMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding>
{
    MFMailboxUid *_mailboxUid;
    NSURL *_mailboxURL;
    NSString *_accountUniqueIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(readonly, nonatomic) NSString *accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (id)description;
- (id)_mailboxUid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (unsigned long long)level;
- (id)icon;
- (id)displayName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) int type;
- (void)invalidateCachedData;
- (unsigned long long)mailboxFilterType;
- (void)dealloc;
- (id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2;
- (id)initWithMailboxUid:(id)arg1 account:(id)arg2;

@end

