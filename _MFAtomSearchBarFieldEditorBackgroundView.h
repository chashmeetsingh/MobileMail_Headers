//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UITextFieldRoundedRectBackgroundViewNeue.h"

#import "_MFSearchAtomViewTappedStateProtocol.h"

@interface _MFAtomSearchBarFieldEditorBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue <_MFSearchAtomViewTappedStateProtocol>
{
    struct {
        _Bool shouldUpdateView;
    } _flags;
    _Bool _backgroundContainer;
    _Bool _tapped;
    unsigned long long _searchBarStyle;
    long long _barStyle;
}

@property(nonatomic, getter=isTapped) _Bool tapped; // @synthesize tapped=_tapped;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(nonatomic) _Bool backgroundContainer; // @synthesize backgroundContainer=_backgroundContainer;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCornerRadius:(double)arg1;
- (id)_fillColor:(_Bool)arg1;
- (id)_ultralightFillColorForOverlayFilter:(_Bool)arg1 active:(_Bool)arg2;
- (id)_strokeColor:(_Bool)arg1;
- (void)updateView;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 updateView:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;

@end

