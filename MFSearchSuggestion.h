//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MFMessageCriterion, MFSearchSuggestionCategory;

@interface MFSearchSuggestion : NSObject <NSSecureCoding>
{
    id <MFSearchSuggestionDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <MFSearchSuggestionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) double ranking;
@property(readonly, nonatomic) _Bool exactMatch;
@property(readonly, nonatomic) _Bool supportsRanking;
@property(readonly, nonatomic) MFMessageCriterion *criterion;
@property(readonly, nonatomic) MFSearchSuggestionCategory *category;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

