//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchAtomSuggestion.h"

#import "NSSecureCoding.h"

@class MFMessageCriterion, MFSearchSuggestionCategoryScope;

@interface MFSearchScopedSuggestion : MFSearchAtomSuggestion <NSSecureCoding>
{
    MFSearchAtomSuggestion *_suggestion;
    long long _selectedScopeIndex;
}

+ (id)scopedSuggestion:(id)arg1 selectedScopeIndex:(long long)arg2;
+ (id)scopedSuggestion:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long selectedScopeIndex; // @synthesize selectedScopeIndex=_selectedScopeIndex;
@property(readonly, nonatomic) MFSearchAtomSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
@property(readonly, nonatomic) MFSearchSuggestionCategoryScope *selectedScope;
@property(readonly, nonatomic) MFMessageCriterion *criterion;
- (id)criterionWithSelectedScope:(id)arg1;
- (id)atomImage;
- (id)atomTitle;
- (id)image;
- (id)contactIdentifier;
- (id)subtitle;
- (id)title;
- (id)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1 selectedScopeIndex:(long long)arg2;
- (id)initWithSuggestion:(id)arg1;

@end

