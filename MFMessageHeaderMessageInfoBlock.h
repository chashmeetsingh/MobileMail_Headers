//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageHeaderViewBlock.h"

@class MessageViewStatusIndicatorManager, NSLayoutConstraint, UILabel, UILayoutGuide, UIStackView, UITextView;

@interface MFMessageHeaderMessageInfoBlock : MFMessageHeaderViewBlock
{
    _Bool _isDisplayingStatusIndicators;
    _Bool _markedAsUnread;
    _Bool _markedAsFlagged;
    _Bool _senderIsVIP;
    _Bool _isNotifyThread;
    _Bool _isMuteThread;
    _Bool _showsSourceMailbox;
    UIStackView *_labelStackView;
    UITextView *_subjectTextView;
    UILabel *_timestampLabel;
    UILabel *_mailboxLabel;
    MessageViewStatusIndicatorManager *_statusIndicatorManager;
    UILayoutGuide *_statusIndicatorLayoutGuide;
    NSLayoutConstraint *_subjectTextViewFirstBaseline;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_statusIndicatorGuideWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *statusIndicatorGuideWidth; // @synthesize statusIndicatorGuideWidth=_statusIndicatorGuideWidth;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subjectTextViewFirstBaseline; // @synthesize subjectTextViewFirstBaseline=_subjectTextViewFirstBaseline;
@property(retain, nonatomic) UILayoutGuide *statusIndicatorLayoutGuide; // @synthesize statusIndicatorLayoutGuide=_statusIndicatorLayoutGuide;
@property(retain, nonatomic) MessageViewStatusIndicatorManager *statusIndicatorManager; // @synthesize statusIndicatorManager=_statusIndicatorManager;
@property(retain, nonatomic) UILabel *mailboxLabel; // @synthesize mailboxLabel=_mailboxLabel;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UITextView *subjectTextView; // @synthesize subjectTextView=_subjectTextView;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(nonatomic) _Bool showsSourceMailbox; // @synthesize showsSourceMailbox=_showsSourceMailbox;
- (void).cxx_destruct;
- (id)_subheadFont;
- (id)_subjectFont;
- (void)_updateFonts;
- (id)_whitespaceStringWithWidth:(double)arg1;
- (id)_mailboxLabelAttributedText;
- (void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2;
- (void)_layoutStatusIndicatorsInRect:(struct CGRect)arg1;
- (void)_updateStatusIndicators;
- (void)_flagStyleDidChange:(id)arg1;
- (void)_updateMailboxLabel;
- (void)updateTimestampLabel;
- (id)_contextForDDDetectionController;
- (void)_updateSubjectText;
- (void)displayMessage:(id)arg1;
- (void)layoutSubviews;
- (void)setDisplayMetrics:(id)arg1;
- (void)updateConstraints;
- (void)initializePrimaryLayoutConstraints;
- (void)createPrimaryViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

