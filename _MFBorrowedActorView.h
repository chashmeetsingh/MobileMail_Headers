//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class _MFActorSnapshotView;

@interface _MFBorrowedActorView : UIView
{
    _MFActorSnapshotView *_actorSnapshotView;
    UIView *_dimmingView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) _MFActorSnapshotView *actorSnapshotView; // @synthesize actorSnapshotView=_actorSnapshotView;
- (void)borrowContentView:(id)arg1;
- (void)borrowDimmingView:(id)arg1;
- (void)borrowActorSnapshotView:(id)arg1;
- (void)dealloc;

@end

