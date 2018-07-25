//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class UILongPressGestureRecognizer;

@interface LongPressableButtonItem : UIBarButtonItem
{
    id _longPressTarget;
    SEL _longPressAction;
    _Bool _longPressEnabled;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic, getter=isLongPressEnabled) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
- (void).cxx_destruct;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)longPressGestureRecognized:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

