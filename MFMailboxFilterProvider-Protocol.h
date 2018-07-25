//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailboxFilter, MFMailboxFilterGroup, MFMessageCriterion, NSArray;

@protocol MFMailboxFilterProvider <NSObject>
@property(readonly, nonatomic) NSArray *defaultFilters;
@property(readonly, nonatomic) NSArray *allFilters;
@property(readonly, nonatomic) NSArray *filtersGroups;
- (NSArray *)reduce:(NSArray *)arg1;
- (MFMailboxFilter *)filterMatchingCriterion:(MFMessageCriterion *)arg1;
- (MFMailboxFilterGroup *)groupContainingFilter:(MFMailboxFilter *)arg1;
@end

