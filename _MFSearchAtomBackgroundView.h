//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MFAtomTextViewAtomLayout.h"

@class NSString, UIColor;

@interface _MFSearchAtomBackgroundView : UIView <MFAtomTextViewAtomLayout>
{
    long long _selectionStyle;
    CDStruct_513ff01d _flags;
    UIColor *_defaultColor;
}

@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)_updateSelectionStyleMask;
- (void)_updateBackgroundColor;
@property(readonly, nonatomic) struct CGRect selectionBounds;
- (void)setSelectionStyle:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long selectionStyle;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) long long baseWritingDirection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
