//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSArray, NSMutableArray, NSString;

@interface MFSpotlightContact : NSObject
{
    NSMutableArray *_values;
    NSString *_displayName;
    CNContact *_contact;
}

@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)hasValue:(id)arg1;
- (void)addValue:(id)arg1;
@property(readonly, nonatomic) NSArray *values;
- (id)initWithContact:(id)arg1;
- (id)initWithDisplayName:(id)arg1 values:(id)arg2;

@end

