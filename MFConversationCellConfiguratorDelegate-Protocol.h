//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFConversationCellConfigurator, MFConversationViewCell, NSArray, NSIndexPath, NSString;

@protocol MFConversationCellConfiguratorDelegate <NSObject>
- (struct CGSize)cellConfigurator:(MFConversationCellConfigurator *)arg1 animationOffsetForExpandingCellAtIndexPath:(NSIndexPath *)arg2;
- (double)cellConfigurator:(MFConversationCellConfigurator *)arg1 targetHeightForExpandingCellAtIndexPath:(NSIndexPath *)arg2;
- (void)cellConfigurator:(MFConversationCellConfigurator *)arg1 didInvalidateConfigurationForCellsAtIndexPaths:(NSArray *)arg2;
- (_Bool)cellConfigurator:(MFConversationCellConfigurator *)arg1 messageAtIndexPathShouldBeExpanded:(NSIndexPath *)arg2;
- (NSString *)cellConfigurator:(MFConversationCellConfigurator *)arg1 messageIdAtIndexPath:(NSIndexPath *)arg2;
- (void)cellConfigurator:(MFConversationCellConfigurator *)arg1 didConfigureCell:(MFConversationViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
