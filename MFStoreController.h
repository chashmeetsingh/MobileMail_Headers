//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class MFPromise, NSString, SKStoreProductViewController;

@interface MFStoreController : NSObject <SKStoreProductViewControllerDelegate>
{
    SKStoreProductViewController *_storeViewController;
    MFPromise *_promise;
}

+ (id)_presentStoreURL:(id)arg1;
+ (id)_canLoadAsStoreURL:(id)arg1;
+ (id)openPossibleStoreURL:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)_presentStoreURL:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

