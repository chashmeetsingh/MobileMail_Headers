//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@protocol MFAccountsProvider <NSObject>
@property(readonly, nonatomic, getter=isDisplayingMultipleAccounts) _Bool displayingMultipleAccounts;
@property(readonly, copy, nonatomic) NSSet *autofetchAccounts;
@property(readonly, copy, nonatomic) NSSet *displayedAccounts;
@property(readonly, copy, nonatomic) NSArray *orderedAccounts;
@property(readonly, copy, nonatomic) NSArray *mailAccounts;
@end

