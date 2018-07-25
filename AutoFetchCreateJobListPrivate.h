//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AutoFetchCreateJobListPrivate : NSObject
{
    NSMutableArray *_jobList;
    NSArray *_visibleUids;
    NSArray *_accounts;
    NSMutableDictionary *_accountResponsiveness;
    _Bool _isUserRequested;
    _Bool _isForegroundRequest;
    _Bool _shouldGrowFetchWindow;
}

@property(readonly, nonatomic) NSArray *jobList; // @synthesize jobList=_jobList;
- (void)run;
- (void)dealloc;
- (id)initForVisibleUids:(id)arg1 accounts:(id)arg2 accountResponsiveness:(id)arg3 fetchType:(int)arg4;

@end

