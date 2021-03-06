//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UICollectionView;

@interface MFCollectionViewPagingAnimator : NSObject
{
    _Bool _animatingScroll;
    double _autoScrollOffsetAdjustment;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isAnimatingScroll) _Bool animatingScroll; // @synthesize animatingScroll=_animatingScroll;
@property(nonatomic) double autoScrollOffsetAdjustment; // @synthesize autoScrollOffsetAdjustment=_autoScrollOffsetAdjustment;
- (void).cxx_destruct;
- (void)cancelAllAnimations;
- (void)bounceAlongEdge:(unsigned long long)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCollectionView:(id)arg1;

@end

