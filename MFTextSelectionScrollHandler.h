//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView, UITouch;

@interface MFTextSelectionScrollHandler : NSObject
{
    _Bool _isListeningForTouches;
    _Bool _isMovingCursor;
    UIScrollView *_scrollView;
    UITouch *_textSelectionTouch;
    double _scrollOffsetIncrement;
}

@property(nonatomic) double scrollOffsetIncrement; // @synthesize scrollOffsetIncrement=_scrollOffsetIncrement;
@property(retain, nonatomic) UITouch *textSelectionTouch; // @synthesize textSelectionTouch=_textSelectionTouch;
@property(nonatomic) _Bool isMovingCursor; // @synthesize isMovingCursor=_isMovingCursor;
@property(nonatomic) _Bool isListeningForTouches; // @synthesize isListeningForTouches=_isListeningForTouches;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_reset;
- (id)window;
- (double)_minScrollOffset;
- (double)_maxScrollOffset;
- (void)_setContentOffsetY:(double)arg1;
- (void)_scrollForTouchLocation:(struct CGPoint)arg1;
- (void)handleTouchEvents:(id)arg1;
- (void)handleTextSelectionChanged:(id)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

