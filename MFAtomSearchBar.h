//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

#import "MFAtomTextViewDelegateInternal.h"

@class MFAtomScopeControl, NSArray, NSProgress, NSString, UIFont, UIView, _MFSearchAtomTextView;

@interface MFAtomSearchBar : UISearchBar <MFAtomTextViewDelegateInternal>
{
    _MFSearchAtomTextView *_atomTextView;
    UIFont *_font;
    UIView *_scopeBarContainer;
    MFAtomScopeControl *_atomScopeControl;
    struct {
        unsigned int delegateScopeButtonTitlesForRepresentedObject:1;
        unsigned int delegateSelectedScopeButtonIndexForRepresentedObject:1;
        unsigned int delegateSelectedScopeButtonIndexDidChangeForRepresentedObject:1;
        unsigned int delegateSearchButtonTapped:1;
        unsigned int delegateSupportedPasteboardTypes:1;
        unsigned int delegateRepresentedObjectsFromPasteboard:1;
        unsigned int delegateStoreRepresentedObjectsOnPasteboard:1;
        unsigned int showsScopeBar:1;
        unsigned int autoSelected:1;
    } _flags;
    _Bool _showsProgress;
    NSProgress *_progress;
}

+ (id)defaultFont;
@property(nonatomic) _Bool showsProgress; // @synthesize showsProgress=_showsProgress;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadInputViews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_containingView;
- (void)_atomScopeChanged:(id)arg1;
- (void)setSelectedScopeButtonIndex:(long long)arg1;
- (long long)selectedScopeButtonIndex;
- (void)setScopeButtonTitles:(id)arg1;
- (id)scopeButtonTitles;
- (void)_setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;
- (void)setShowsScopeBar:(_Bool)arg1;
- (_Bool)showsScopeBar;
- (_Bool)_scopeBarIsVisible;
- (id)_scopeBarContainer;
@property(readonly, nonatomic) MFAtomScopeControl *atomScopeControl;
- (void)_setupAtomScopeControl;
- (_Bool)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;
- (id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
- (id)supportedPasteboardTypesForAtomTextView:(id)arg1;
- (_Bool)_atomTextView:(id)arg1 shouldReplaceRepresentedObject:(id)arg2 replacementText:(id)arg3;
- (void)atomTextViewDidChangeSelection:(id)arg1;
- (id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;
- (void)_atomTextViewReturnPressed;
- (void)_atomTextViewEndEditing;
- (void)_atomTextViewEditingChanged;
- (void)_atomTextViewBeginEditing;
@property(readonly, nonatomic) _MFSearchAtomTextView *atomTextView;
- (void)_setupAtomTextView;
- (void)_updateMagnifyingGlassView;
- (id)_textColor:(_Bool)arg1;
- (id)_glyphAndPlaceholderColor:(_Bool)arg1;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(_Bool)arg2;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currentEditingString;
@property(readonly, copy, nonatomic) NSArray *selectedRepresentedObjects;
@property(copy, nonatomic) NSArray *representedObjects;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)_setMaskActive:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (id)_searchBarTextFieldOrMailReplacementView;
- (id)_searchBarTextField;
- (void)_setupSearchField;
@property(copy, nonatomic) UIFont *font;
@property(nonatomic) __weak id <MFAtomSearchBarDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

