//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageHeaderViewBlock.h"

@class NSArray, UIStackView;

@interface MFMessageDraftHeaderBlock : MFMessageHeaderViewBlock
{
    UIStackView *_fieldStackView;
    NSArray *_displayedFields;
}

@property(retain, nonatomic) NSArray *displayedFields; // @synthesize displayedFields=_displayedFields;
@property(retain, nonatomic) UIStackView *fieldStackView; // @synthesize fieldStackView=_fieldStackView;
- (id)_stringFromAddresses:(id)arg1;
- (_Bool)_hasMultipleSendingAddresses;
- (void)_addFieldWithPrefix:(id)arg1 text:(id)arg2;
- (void)displayMessage:(id)arg1;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(_Bool)arg1;
- (void)initializePrimaryLayoutConstraints;
- (void)createPrimaryViews;
- (void)setSeparatorIsHidden:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

