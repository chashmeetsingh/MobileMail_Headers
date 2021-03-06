//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSTopHitSearchQuery, NSArray, NSIndexSet;

@interface MFSpotlightTopHitsQueryResult : NSObject
{
    CSTopHitSearchQuery *_topHitSearchQuery;
    NSArray *_foundItems;
    NSIndexSet *_libraryIdentifiers;
}

@property(retain, nonatomic) NSIndexSet *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(copy, nonatomic) NSArray *foundItems; // @synthesize foundItems=_foundItems;
@property(retain, nonatomic) CSTopHitSearchQuery *topHitSearchQuery; // @synthesize topHitSearchQuery=_topHitSearchQuery;
- (void).cxx_destruct;
- (long long)spotlightTopHitsIndexOfMessageLibraryID:(id)arg1;
- (void)userDidInteractWithLibraryIdentifier:(id)arg1;
- (id)initWithTopHitSearchQuery:(id)arg1 foundItems:(id)arg2;

@end

