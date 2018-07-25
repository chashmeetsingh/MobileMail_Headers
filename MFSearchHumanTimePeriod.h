//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFPair, NSString;

@interface MFSearchHumanTimePeriod : NSObject
{
    NSString *_displayName;
    unsigned long long _calendarUnit;
    long long _deltaFrom;
    long long _deltaTo;
}

+ (id)humanTimePeriods;
@property(readonly, nonatomic) long long deltaTo; // @synthesize deltaTo=_deltaTo;
@property(readonly, nonatomic) long long deltaFrom; // @synthesize deltaFrom=_deltaFrom;
@property(readonly, nonatomic) unsigned long long calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property(readonly, nonatomic) MFPair *dateComponentsRange;
- (id)description;
- (id)_initWithDisplayName:(id)arg1 calendarUnit:(unsigned long long)arg2 from:(long long)arg3 to:(long long)arg4;

@end
