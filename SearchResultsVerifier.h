//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMessageCriterion;

@interface SearchResultsVerifier : NSObject
{
    _Bool _verifySkeletonMessage;
    _Bool _verifyIndexedBySpotlight;
    MFMessageCriterion *_criterion;
}

@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(nonatomic) _Bool verifyIndexedBySpotlight; // @synthesize verifyIndexedBySpotlight=_verifyIndexedBySpotlight;
@property(nonatomic) _Bool verifySkeletonMessage; // @synthesize verifySkeletonMessage=_verifySkeletonMessage;
- (void).cxx_destruct;
- (_Bool)_containsSpotlightCriterion:(id)arg1;
- (_Bool)_walkCriterion:(id)arg1 mode:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_parseFlagsFromCriterion:(id)arg1;
- (_Bool)_passesSpotlightVerification:(id)arg1;
- (_Bool)_passesSkeletonVerification:(id)arg1;
- (id)description;
- (id)filterRemoteSearchResults:(id)arg1;
- (id)initWithCriterion:(id)arg1;

@end
