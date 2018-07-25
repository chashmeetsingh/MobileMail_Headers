//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchAtomSuggestion.h"

@class NSArray, NSString;

@interface MFSearchMailboxSuggestion : MFSearchAtomSuggestion
{
    NSString *_subtitle;
    NSArray *_mailboxes;
}

+ (id)suggestionForMailboxes:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)subtitle;
- (id)title;
- (id)category;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxes:(id)arg1;

@end
