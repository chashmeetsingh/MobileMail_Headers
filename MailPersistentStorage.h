//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface MailPersistentStorage : NSObject
{
    NSString *_filePath;
    NSMutableDictionary *_groups;
    NSOperationQueue *_saveOperationQueue;
}

+ (void)wipePersistentStorage;
+ (id)sharedStorage;
+ (id)defaultFilePath;
@property(retain, nonatomic) NSOperationQueue *saveOperationQueue; // @synthesize saveOperationQueue=_saveOperationQueue;
- (void)removeAllDataBelongingToAccount:(id)arg1;
- (id)sceneRestorationDictionary;
- (void)setSceneRestorationDictionary:(id)arg1;
- (id)searchedServerDate;
- (void)clearSearchedServer;
- (void)searchedServer;
- (id)lastLoadOlder;
- (void)clearLastLoadOlder;
- (void)touchLastLoadOlder;
- (id)bodyBackfillDateForSource:(id)arg1;
- (void)setBodyBackfillDate:(id)arg1 forSource:(id)arg2;
- (id)lastAdditionalMailboxesFetchDate;
- (void)setLastAdditionalMailboxesFetchDate:(id)arg1;
- (id)fetchDateForSource:(id)arg1;
- (void)setFetchDate:(id)arg1 forSource:(id)arg2;
- (id)_objectForKey:(id)arg1 inGroup:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3;
- (void)save;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (void)dealloc;

@end
