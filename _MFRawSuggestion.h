//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchAtomSuggestion.h"

@class NSString;

@interface _MFRawSuggestion : MFSearchAtomSuggestion
{
    NSString *_phrase;
}

+ (id)rawSuggestionForPhrase:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (void).cxx_destruct;
- (id)category;
- (id)atomTitle;
- (id)contactIdentifier;
- (id)subtitle;
- (id)title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrase:(id)arg1;

@end

