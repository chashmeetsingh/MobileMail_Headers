//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFActivityMonitor, MFMailboxUid, NSString;

@protocol AFCVisibleMailboxFetch <NSObject>
- (void)setDisplayErrors:(_Bool)arg1;
- (void)setRemoteIDToPreserve:(NSString *)arg1;
- (void)setShouldCompact:(_Bool)arg1;
- (_Bool)willGrowFetchWindow;
- (MFMailboxUid *)mailbox;
- (MFActivityMonitor *)monitor;
@end
