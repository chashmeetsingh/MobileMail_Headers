//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MFSearchAtomSuggestion, NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface MFSearchSuggestionsTableViewCell : UITableViewCell
{
    UIImageView *_glyph;
    UILabel *_title;
    UILabel *_subtitle;
    MFSearchAtomSuggestion *_suggestion;
    NSArray *_defaultConstraints;
    NSArray *_titleOnlyConstraints;
    NSArray *_subtitleConstraints;
    NSLayoutConstraint *_singleLineTitleBaselineConstraint;
    NSLayoutConstraint *_singleLineBottomBaselineConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_interLabelBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_glyphVerticalConstraint;
}

+ (id)_defaultLabelAttributesWithFont:(id)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *glyphVerticalConstraint; // @synthesize glyphVerticalConstraint=_glyphVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBaselineConstraint; // @synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *interLabelBaselineConstraint; // @synthesize interLabelBaselineConstraint=_interLabelBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *singleLineBottomBaselineConstraint; // @synthesize singleLineBottomBaselineConstraint=_singleLineBottomBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *singleLineTitleBaselineConstraint; // @synthesize singleLineTitleBaselineConstraint=_singleLineTitleBaselineConstraint;
@property(copy, nonatomic) NSArray *subtitleConstraints; // @synthesize subtitleConstraints=_subtitleConstraints;
@property(copy, nonatomic) NSArray *titleOnlyConstraints; // @synthesize titleOnlyConstraints=_titleOnlyConstraints;
@property(copy, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property(retain, nonatomic) MFSearchAtomSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)updateConstraints;
- (double)_subtitleBottomBaselineConstant;
- (double)_interLabelBaselineConstant;
- (double)_titleBaselineConstant;
- (double)_singleLineBottomBaselineConstant;
- (double)_singleLineTitleBaselineConstant;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

