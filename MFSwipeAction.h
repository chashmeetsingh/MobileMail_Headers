//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage, UIView;

@interface MFSwipeAction : NSObject
{
    _Bool _isDestructive;
    _Bool _canBeTriggeredBySwipe;
    _Bool _dismissesSwipedRow;
    CDUnknownBlockType _preHandler;
    CDUnknownBlockType _handler;
    NSString *_title;
    UIColor *_color;
    UIImage *_icon;
    UIView *__sourceView;
    CDUnknownBlockType _swipeDismissal;
}

+ (id)swipeActionWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3 handler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic, getter=_swipeDismissal, setter=_setSwipeDismissal:) CDUnknownBlockType swipeDismissal; // @synthesize swipeDismissal=_swipeDismissal;
@property(nonatomic) UIView *_sourceView; // @synthesize _sourceView=__sourceView;
@property(nonatomic) _Bool dismissesSwipedRow; // @synthesize dismissesSwipedRow=_dismissesSwipedRow;
@property(nonatomic) _Bool canBeTriggeredBySwipe; // @synthesize canBeTriggeredBySwipe=_canBeTriggeredBySwipe;
@property(nonatomic) _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) CDUnknownBlockType preHandler; // @synthesize preHandler=_preHandler;
- (id)description;
- (void)performSwipeDismissal;
- (void)executeHandler;
- (void)executePreHandler;
- (void)dealloc;
- (id)init;

@end
