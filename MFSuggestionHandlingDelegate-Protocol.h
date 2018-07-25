//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageCallToAction, NSArray;

@protocol MFSuggestionHandlingDelegate <NSObject>
- (void)didIgnoreAction:(MessageCallToAction *)arg1;
- (void)didConfirmAction:(MessageCallToAction *)arg1;
- (void)displayMultipleCallsToAction:(NSArray *)arg1 presentationSource:(id <MFPopoverPresentationSource>)arg2;
- (void)ignoreAction:(MessageCallToAction *)arg1;
- (void)showConfirmationForAction:(MessageCallToAction *)arg1 presentationSource:(id <MFPopoverPresentationSource>)arg2;
@end
