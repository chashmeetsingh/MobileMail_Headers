//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFNanoBridgeSettingsMailbox.h"

#import "NSSecureCoding.h"

@interface MFNanoBridgeSettingsUnifiedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding>
{
    int _type;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)icon;
- (id)displayName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)mailboxFilterType;
- (id)initWithType:(int)arg1;

@end

