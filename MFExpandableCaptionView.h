//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MFCaptionLabelDataSource.h"

@class MFCaptionLabel, NSDate, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton, UIFont, UILabel, UIStackView, _MFExpandableCaptionViewDetailToggleButton;

@interface MFExpandableCaptionView : UIView <MFCaptionLabelDataSource>
{
    _Bool _expanded;
    _Bool _outgoing;
    _Bool _showsTimestampWhenExpanded;
    id <MFExpandableCaptionViewDelegate> _delegate;
    double _listSpacing;
    NSDate *_dateSent;
    UIFont *_font;
    MFCaptionLabel *_captionLabel;
    _MFExpandableCaptionViewDetailToggleButton *_toggleInfoButton;
    UIStackView *_atomListStackView;
    UILabel *_lastBaseLineDeceptionLabel;
    UILabel *_timestampLabel;
    NSLayoutConstraint *_captionLabelTrailingConstraint;
    NSLayoutConstraint *_lastBaselineLabelConstraint;
    NSMutableDictionary *_participantDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *participantDictionary; // @synthesize participantDictionary=_participantDictionary;
@property(retain, nonatomic) NSLayoutConstraint *lastBaselineLabelConstraint; // @synthesize lastBaselineLabelConstraint=_lastBaselineLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *captionLabelTrailingConstraint; // @synthesize captionLabelTrailingConstraint=_captionLabelTrailingConstraint;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *lastBaseLineDeceptionLabel; // @synthesize lastBaseLineDeceptionLabel=_lastBaseLineDeceptionLabel;
@property(retain, nonatomic) UIStackView *atomListStackView; // @synthesize atomListStackView=_atomListStackView;
@property(retain, nonatomic) _MFExpandableCaptionViewDetailToggleButton *toggleInfoButton; // @synthesize toggleInfoButton=_toggleInfoButton;
@property(retain, nonatomic) MFCaptionLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(nonatomic) _Bool showsTimestampWhenExpanded; // @synthesize showsTimestampWhenExpanded=_showsTimestampWhenExpanded;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(nonatomic) double listSpacing; // @synthesize listSpacing=_listSpacing;
@property(nonatomic) id <MFExpandableCaptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_senderAtomPressed:(id)arg1;
- (void)_recipientAtomPressed:(id)arg1;
- (void)_addAtomListForAddresses:(id)arg1 label:(id)arg2 title:(id)arg3 key:(id)arg4;
- (void)iterateAtomListsWithBlock:(CDUnknownBlockType)arg1;
- (id)captionLabel:(id)arg1 displayNameForEmailAddress:(id)arg2 abbreviated:(_Bool)arg3;
- (void)_setRecipientDetailsVisible:(_Bool)arg1;
- (void)_reattachBottomConstraint;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_toggleButtonTapped:(id)arg1;
- (void)reloadData;
- (void)setParticipants:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updateConstraints;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_initializePrimaryLayoutConstraints;
- (void)_createPrimaryViews;
@property(readonly, nonatomic) UIButton *toggleButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

