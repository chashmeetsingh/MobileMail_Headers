//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MFNanoServerFetchParam : NSObject
{
    _Bool _protectedDataAvailable;
    NSDate *_beforeDateReceived;
    unsigned long long _count;
    NSString *_conversationId;
    NSDate *_dateReceivedLimit;
}

@property(nonatomic) _Bool protectedDataAvailable; // @synthesize protectedDataAvailable=_protectedDataAvailable;
@property(retain, nonatomic) NSDate *dateReceivedLimit; // @synthesize dateReceivedLimit=_dateReceivedLimit;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSDate *beforeDateReceived; // @synthesize beforeDateReceived=_beforeDateReceived;
- (void).cxx_destruct;

@end
