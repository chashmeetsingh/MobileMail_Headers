//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MailboxContentViewCell;

@interface _CellStaticView : UIView
{
    unsigned long long _lastDrawingGenerationNumber;
    unsigned long long _lastLayoutGenerationNumber;
    unsigned int _highlighted:1;
    _Bool _disclosureEnabled;
    MailboxContentViewCell *_cell;
    unsigned long long _entryStyle;
}

@property(nonatomic) _Bool disclosureEnabled; // @synthesize disclosureEnabled=_disclosureEnabled;
@property(nonatomic) unsigned long long entryStyle; // @synthesize entryStyle=_entryStyle;
@property(nonatomic) MailboxContentViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setNeedsDisplay;
- (void)layerWillDraw:(id)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end
