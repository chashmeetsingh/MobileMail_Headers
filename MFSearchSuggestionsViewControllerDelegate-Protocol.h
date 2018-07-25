//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailMessage, MFSearchAtomSuggestion, MFSearchSuggestionCategory, MFSearchSuggestionsViewController, MessageMiniMall, NSArray, NSDictionary, NSString, UIView, UIViewController;

@protocol MFSearchSuggestionsViewControllerDelegate <NSObject>
- (void)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 previewingContext:(id <UIViewControllerPreviewing>)arg2 commitViewController:(UIViewController *)arg3;
- (UIViewController *)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 previewingContext:(id <UIViewControllerPreviewing>)arg2 viewControllerForMessage:(MFMailMessage *)arg3 indexInformation:(NSDictionary *)arg4 view:(UIView *)arg5 canShowAsConversation:(_Bool)arg6;
- (_Bool)shouldDisableGlobalScopeControlForSearchSuggestionsController:(MFSearchSuggestionsViewController *)arg1;
- (long long)selectedScopeIndexForSearchSuggestionsController:(MFSearchSuggestionsViewController *)arg1;
- (void)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 didSelectSearchScopeIndex:(long long)arg2;
- (NSString *)addressStringForSearchSuggestionsController:(MFSearchSuggestionsViewController *)arg1 addressList:(NSArray *)arg2;
- (void)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 didSelectMessage:(MFMailMessage *)arg2 indexInformation:(NSDictionary *)arg3 mall:(MessageMiniMall *)arg4;
- (void)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 didSelectSuggestion:(MFSearchAtomSuggestion *)arg2;
- (_Bool)searchSuggestionsViewController:(MFSearchSuggestionsViewController *)arg1 shouldShowSuggestionsForCategory:(MFSearchSuggestionCategory *)arg2;
@end
