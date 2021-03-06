//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MFReusable.h"

@class MFMessageDisplayMetrics, MFMessageLoadingContext, NSLayoutConstraint, NSString, SeparatorLayer, UILayoutGuide;

@interface MFMessageHeaderViewBlock : UIView <MFReusable>
{
    _Bool _separatorIsHidden;
    _Bool _separatorDrawsFlushWithLeadingEdge;
    _Bool _separatorDrawsFlushWithTrailingEdge;
    _Bool _usingLargeTextLayout;
    MFMessageLoadingContext *_messageLoadingContext;
    MFMessageDisplayMetrics *_displayMetrics;
    SeparatorLayer *_separator;
    UILayoutGuide *_trailingAccessoryViewLayoutGuide;
    NSLayoutConstraint *_trailingAccessoryViewLayoutGuideWidth;
    NSLayoutConstraint *_trailingAccessoryViewLayoutGuideTrailing;
    NSLayoutConstraint *_separatorLeading;
    NSLayoutConstraint *_separatorTrailing;
}

@property(retain, nonatomic) NSLayoutConstraint *separatorTrailing; // @synthesize separatorTrailing=_separatorTrailing;
@property(retain, nonatomic) NSLayoutConstraint *separatorLeading; // @synthesize separatorLeading=_separatorLeading;
@property(retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideTrailing; // @synthesize trailingAccessoryViewLayoutGuideTrailing=_trailingAccessoryViewLayoutGuideTrailing;
@property(retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideWidth; // @synthesize trailingAccessoryViewLayoutGuideWidth=_trailingAccessoryViewLayoutGuideWidth;
@property(nonatomic) _Bool usingLargeTextLayout; // @synthesize usingLargeTextLayout=_usingLargeTextLayout;
@property(nonatomic) _Bool separatorDrawsFlushWithTrailingEdge; // @synthesize separatorDrawsFlushWithTrailingEdge=_separatorDrawsFlushWithTrailingEdge;
@property(nonatomic) _Bool separatorDrawsFlushWithLeadingEdge; // @synthesize separatorDrawsFlushWithLeadingEdge=_separatorDrawsFlushWithLeadingEdge;
@property(nonatomic) _Bool separatorIsHidden; // @synthesize separatorIsHidden=_separatorIsHidden;
@property(retain, nonatomic) UILayoutGuide *trailingAccessoryViewLayoutGuide; // @synthesize trailingAccessoryViewLayoutGuide=_trailingAccessoryViewLayoutGuide;
@property(retain, nonatomic) SeparatorLayer *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property(retain, nonatomic) MFMessageLoadingContext *messageLoadingContext; // @synthesize messageLoadingContext=_messageLoadingContext;
- (void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2;
- (void)displayMessage:(id)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)initializePrimaryLayoutConstraints;
- (void)createPrimaryViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

