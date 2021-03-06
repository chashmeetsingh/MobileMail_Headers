//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MFGradientView, MessageLoadButton, UILabel;

@interface MessageLoadIndicator : UIView
{
    MessageLoadButton *_control;
    UILabel *_label;
    MFGradientView *_backgroundGradient;
}

- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (id)initWithDescription:(id)arg1 button:(id)arg2;

@end

