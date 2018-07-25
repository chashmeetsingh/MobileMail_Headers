//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class MFMessageDisplayMetrics, NSIndexPath;

@interface MFConversationViewFlowLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_expandingIndexPath;
    MFMessageDisplayMetrics *_displayMetrics;
    struct CGSize _animationOffset;
}

@property(nonatomic) struct CGSize animationOffset; // @synthesize animationOffset=_animationOffset;
@property(retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property(retain, nonatomic) NSIndexPath *expandingIndexPath; // @synthesize expandingIndexPath=_expandingIndexPath;
- (void).cxx_destruct;
- (_Bool)_isExpandingIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
