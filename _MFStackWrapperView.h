//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MFMessageLoadingContext;

@interface _MFStackWrapperView : UIView
{
    MFMessageLoadingContext *_loadingContext;
}

@property(retain, nonatomic) MFMessageLoadingContext *loadingContext; // @synthesize loadingContext=_loadingContext;
- (void)addWrappedView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 loadingContext:(id)arg2;

@end

