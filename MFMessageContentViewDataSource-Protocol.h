//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailMessage, MFMessageContentView, MFQuotedContentAttribution;

@protocol MFMessageContentViewDataSource <NSObject>
- (MFQuotedContentAttribution *)messageContentView:(MFMessageContentView *)arg1 quotedContentAttributionForMessage:(MFMailMessage *)arg2;
@end
