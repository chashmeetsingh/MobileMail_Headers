//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRRecentContactsLibrary;

@interface MailboxFrecencyController : NSObject
{
    CRRecentContactsLibrary *_library;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeAllDataBelongingToAccount:(id)arg1;
- (id)orderedArrayOfSources:(id)arg1;
- (id)orderedMailboxUidsForAccount:(id)arg1;
- (id)_rankedMailboxURLs;
- (id)_mailboxURLQuery;
- (void)recordEventWithMailboxURLString:(id)arg1;
- (id)initWithLibrary:(id)arg1;

@end

