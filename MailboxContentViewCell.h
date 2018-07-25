//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSwipableTableViewCell.h"

#import "MBLSingleMessageClient.h"
#import "MFReclaimable.h"
#import "MailboxContentTableEntry.h"

@class MFMailMessage, MFSimpleLabel, MessageListStatusIndicatorManager, NSArray, NSAttributedString, NSMutableArray, NSString, UIButton, UIColor, UIDateLabel, UIImageView, UILabel, UIView, _CellStaticView, _MailboxContentViewCellLayoutValues;

@interface MailboxContentViewCell : MFSwipableTableViewCell <MBLSingleMessageClient, MailboxContentTableEntry, MFReclaimable>
{
    MFMailMessage *_message;
    UIDateLabel *_dateLabel;
    _MailboxContentViewCellLayoutValues *_layoutValues;
    NSArray *_highlightedTerms;
    NSString *_address;
    NSString *_subject;
    NSString *_summary;
    NSString *_mailboxName;
    NSAttributedString *_attributedAddress;
    NSAttributedString *_attributedSubject;
    NSAttributedString *_attributedSummary;
    struct _NSRange _firstAddressRange;
    struct _NSRange _firstSubjectRange;
    struct _NSRange _firstSummaryRange;
    double _interval;
    unsigned long long _generationNumber;
    NSString *_bestRecipientString;
    NSArray *_recipientRangeMatches;
    long long _bestMatchLabelType;
    long long _recipientLabelType;
    long long _chevronType;
    NSMutableArray *_viewsToLayoutDuringTransition;
    _CellStaticView *_staticView;
    MessageListStatusIndicatorManager *_statusIndicatorLayoutManager;
    UILabel *_mailboxNameLabel;
    UIImageView *_recipientLabelImageView;
    UIImageView *_bestMatchLabelImageView;
    UIImageView *_chevron;
    UIView *_chevronBoxView;
    unsigned long long _entryStyle;
    unsigned int _isFlagged:1;
    unsigned int _isUnread:1;
    unsigned int _isReplied:1;
    unsigned int _isForwarded:1;
    unsigned int _isVIP:1;
    unsigned int _isNotify:1;
    unsigned int _isMute:1;
    unsigned int _hasAttachments:1;
    unsigned int _threaded:1;
    unsigned int _removeFromMBL:1;
    unsigned int _needsSummary:1;
    unsigned int _shouldHighlightDate:1;
    unsigned int _preferToOverFrom:1;
    unsigned int _showsBestMatchedAddress:1;
    _Bool _compact;
    _Bool _subjectIsPresent;
    _Bool _addressIsPresent;
    _Bool _shouldAnnotateReplyOrForward;
    _Bool _disclosureEnabled;
    _Bool _drawContentLabels;
    unsigned long long _annotatedRelationshipType;
    long long _animationPhase;
    MFSimpleLabel *_addressLabel;
    MFSimpleLabel *_subjectLabel;
    MFSimpleLabel *_summaryLabel;
    UIButton *_disclosureButton;
    UIColor *_deselectedBackgroundColor;
}

+ (long long)actualLineCountForSummary:(id)arg1 bounds:(struct CGRect)arg2;
+ (double)topHitsRowHeight;
+ (double)expandedRowHeight;
+ (double)dynamicRowHeightWithSummary:(id)arg1 bounds:(struct CGRect)arg2;
+ (double)defaultRowHeight;
+ (double)compactRowHeight;
+ (void)invalidateCachedLayoutInformation;
@property(retain, nonatomic) UIColor *deselectedBackgroundColor; // @synthesize deselectedBackgroundColor=_deselectedBackgroundColor;
@property(retain, nonatomic) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(nonatomic) _Bool drawContentLabels; // @synthesize drawContentLabels=_drawContentLabels;
@property(retain, nonatomic) MFSimpleLabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) MFSimpleLabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) MFSimpleLabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(nonatomic) long long animationPhase; // @synthesize animationPhase=_animationPhase;
@property(nonatomic) _Bool disclosureEnabled; // @synthesize disclosureEnabled=_disclosureEnabled;
@property(nonatomic) unsigned long long annotatedRelationshipType; // @synthesize annotatedRelationshipType=_annotatedRelationshipType;
@property(nonatomic) _Bool shouldAnnotateReplyOrForward; // @synthesize shouldAnnotateReplyOrForward=_shouldAnnotateReplyOrForward;
@property(nonatomic) _Bool addressIsPresent; // @synthesize addressIsPresent=_addressIsPresent;
@property(nonatomic) _Bool subjectIsPresent; // @synthesize subjectIsPresent=_subjectIsPresent;
@property(nonatomic, getter=isCompact) _Bool compact; // @synthesize compact=_compact;
- (void)_layoutChevronForDisclosureStateAnimated:(_Bool)arg1;
- (void)_didTapDisclosureButton:(id)arg1;
- (void)setDisclosureEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reconstruct;
- (void)purgeForMemoryReclamation;
- (_Bool)isSelectedForStaticView:(id)arg1;
- (unsigned long long)generationNumberForStaticView:(id)arg1;
- (void)_drawEffectiveBackgroundColorInStaticView:(id)arg1 context:(struct CGContext *)arg2;
- (void)drawInStaticView:(id)arg1 highlighted:(_Bool)arg2;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)_recalculateAttributedStrings;
- (id)bestRecipientStringWithMatchedRanges:(id *)arg1 labelType:(long long *)arg2;
- (struct _NSRange)_focusableRangeWithString:(id)arg1 ranges:(id)arg2;
- (id)_copyAttributedStringWithString:(id)arg1 attributes:(id)arg2 searchTerms:(id)arg3 matchAttributes:(id)arg4 firstHighlightedRange:(struct _NSRange *)arg5;
- (id)_copyAttributedStringWithString:(id)arg1 attributes:(id)arg2 matchRanges:(id)arg3 matchAttributes:(id)arg4;
- (id)_subjectAttributesWithColor:(id)arg1;
- (id)_addressAttributesWithColor:(id)arg1;
- (id)_defaultAttributesWithFont:(id)arg1 color:(id)arg2;
- (id)_bodyAttributesWithColor:(id)arg1;
- (id)_scriptingInfo;
- (void)_updateSummary;
- (void)_cancelMessageBodyLoad;
- (void)_requestMessageBodyLoadForMessage:(id)arg1;
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;
- (void)notifyFullMessageContentsUnavailableForMessage:(id)arg1 error:(id)arg2;
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;
- (_Bool)wantsContentsOfType:(int)arg1;
- (id)message;
- (double)ordering;
- (long long)priority;
- (void)forceSummaryUpdate;
- (_Bool)isMute;
- (_Bool)isVIP;
- (_Bool)isNotify;
- (_Bool)isForwarded;
- (_Bool)isReplied;
- (_Bool)isUnread;
- (_Bool)isFlagged;
@property(readonly, nonatomic, getter=isThreaded) _Bool threaded;
- (void)setTimeInterval:(double)arg1;
- (void)setShowsAccessory:(_Bool)arg1 svcIsShowingDetail:(_Bool)arg2;
- (void)setShowsAccessory:(_Bool)arg1;
- (void)updateRecipientToCc:(_Bool)arg1;
- (void)updateFlagsFromMessage:(id)arg1 isUnread:(_Bool)arg2 isFlagged:(_Bool)arg3;
- (void)setHasUnreadMessages:(_Bool)arg1 hasAttachments:(_Bool)arg2 hasFlagged:(_Bool)arg3 hasVIP:(_Bool)arg4 hasNotify:(_Bool)arg5 hasMute:(_Bool)arg6 receivedInterval:(double)arg7;
- (void)setAddress:(id)arg1;
- (_Bool)_isAnimatingResize;
@property(readonly, nonatomic) UIView *accessorySnapshot;
- (void)setPrefersToOverFrom:(_Bool)arg1;
- (void)setShouldHighlightDate:(_Bool)arg1;
- (void)setDisplayVIP:(_Bool)arg1;
- (void)setDisplayUnreadDot:(_Bool)arg1;
- (void)setMailboxName:(id)arg1;
- (void)setShowsBestMatchedAddress:(_Bool)arg1;
- (void)setHighlightedTerms:(id)arg1;
- (void)setMessage:(id)arg1 entryStyle:(unsigned long long)arg2;
- (void)setEntryStyle:(unsigned long long)arg1;
- (unsigned long long)entryStyle;
- (id)layoutValues;
- (void)_invalidateCachedValues;
- (struct CGRect)rectForMailboxNameWithBounds:(struct CGRect)arg1 dateRect:(struct CGRect)arg2;
- (struct CGRect)rectForDateWithBounds:(struct CGRect)arg1 chevronBoxRect:(struct CGRect)arg2;
- (struct CGPoint)_dateOriginAlignedWithChevronBoxRect:(struct CGRect)arg1 dateLabelSize:(struct CGSize)arg2;
- (struct CGPoint)_dateOriginAlignedWithAddressBaselineForBounds:(struct CGRect)arg1;
- (struct CGPoint)_dateOriginUnderSummary:(struct CGRect)arg1;
- (struct CGRect)rectForSummaryWithBounds:(struct CGRect)arg1;
- (struct CGRect)rectForSubjectWithBounds:(struct CGRect)arg1 mailboxRect:(struct CGRect)arg2;
- (struct CGRect)rectForRecipientLabelWithBounds:(struct CGRect)arg1;
- (struct CGRect)rectForAddressWithBounds:(struct CGRect)arg1 dateRect:(struct CGRect)arg2;
- (struct CGRect)rectForDisclosureButtonWithFrame:(struct CGRect)arg1 boxFrame:(struct CGRect)arg2;
- (struct CGRect)rectForChevronBoxWithBounds:(struct CGRect)arg1;
- (struct CGRect)rectForChevronWithBounds:(struct CGRect)arg1;
- (struct CGPoint)alignAddressAndChevronBoxOrigin:(struct CGPoint)arg1;
- (struct CGPoint)centerForChevronBoxWithBounds:(struct CGRect)arg1;
- (struct CGRect)rectForBestMatchLabelWithBounds:(struct CGRect)arg1;
- (struct CGRect)rectForHorizontalStatusIndicatorViewsWithPrimaryStatusIndicatorImage:(id)arg1 bounds:(struct CGRect)arg2;
- (struct CGRect)rectForStatusIndicatorViewsWithPrimaryStatusIndicatorImage:(id)arg1;
- (void)layoutStatusIndicatorViews;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateCellBackgroundColors;
- (void)staticViewNeedsLayout;
- (void)staticViewNeedsDisplay;
- (id)_chevronBoxView;
- (id)_chevron;
- (id)_bestMatchLabelImageView;
- (id)_recipientLabelImageView;
- (id)_summaryLabel;
- (id)_subjectLabel;
- (id)_addressLabel;
- (id)_mailboxNameLabel;
- (id)_dateLabel;
- (id)_statusIndicatorLayoutManager;
- (id)_dateLabelTextColor;
- (void)_layoutValuesDidChange:(id)arg1;
- (void)_significantTimeChange;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_animateIndicator:(id)arg1 keyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 withDuration:(double)arg5 damping:(double)arg6;
- (void)_animateIndicator:(unsigned long long)arg1 toState:(_Bool)arg2;
- (void)previewNewIndicatorAfterTriageAction:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets)edgeInsets;
- (double)_trailingInset;
- (double)leadingInset;
- (void)layoutMarginsDidChange;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
