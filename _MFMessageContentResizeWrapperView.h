//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface _MFMessageContentResizeWrapperView : UIView
{
    UIView *_snapshotView;
    double _snapshotViewYOrigin;
}

@property(nonatomic) double snapshotViewYOrigin; // @synthesize snapshotViewYOrigin=_snapshotViewYOrigin;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 snapshotView:(id)arg2;
- (void)dealloc;

@end
