//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSourcePrefetching.h"

@class NSOperationQueue, NSString;

@interface MFTableViewPrefetcher : NSObject <UITableViewDataSourcePrefetching>
{
    NSOperationQueue *_operationQueue;
    id <MFTableViewPrefetchProvider> _prefetchProvider;
}

@property(retain, nonatomic) id <MFTableViewPrefetchProvider> prefetchProvider; // @synthesize prefetchProvider=_prefetchProvider;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (id)initWithPrefetchProvider:(id)arg1;
- (id)initWithPrefetchProvider:(id)arg1 maxConcurrentOperationCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

