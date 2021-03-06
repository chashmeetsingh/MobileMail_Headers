//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFNanoServerMessageContentLoader, NNMKMessage, NNMKMessageContent, NSString, UIImage;

@protocol MFNanoServerMessageContentLoaderDelegate <NSObject>
- (void)messageContentLoaderDidFailLoadingContent:(MFNanoServerMessageContentLoader *)arg1;
- (void)messageContentLoaderDidFinishLoading:(MFNanoServerMessageContentLoader *)arg1;
- (void)messageContentLoader:(MFNanoServerMessageContentLoader *)arg1 receivedImageAttachment:(UIImage *)arg2 contentId:(NSString *)arg3 loadedProtected:(_Bool)arg4;
- (void)messageContentLoader:(MFNanoServerMessageContentLoader *)arg1 receivedMailContent:(NNMKMessageContent *)arg2 forMessage:(NNMKMessage *)arg3 loadedProtected:(_Bool)arg4;
@end

