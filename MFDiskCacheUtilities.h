//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFDiskCacheUtilities : NSObject
{
}

+ (void)deleteLocalMessages;
+ (void)deleteLocalAttachments;
+ (void)_enumeratePurgeableFileInTemporaryDirectoryWithHandler:(CDUnknownBlockType)arg1;
+ (long long)deleteTemporaryDirectoryContent;
+ (long long)deletePlaceholderAttachmentsWithCreationDateOver:(long long)arg1;
+ (long long)deletePlaceholderAttachments;
+ (long long)sizeForPurgeableTemporaryDirectoryContent;
+ (id)mailSpaceWithError:(id *)arg1;
+ (id)systemSpaceWithError:(id *)arg1;
+ (void)_enumerateContentPathsAndAttributes:(CDUnknownBlockType)arg1;
+ (void)_enumeratePurgeableContentsWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)_enumerateContentsForAccounts:(id)arg1 withType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_pathsForContentWithType:(unsigned long long)arg1;

@end

