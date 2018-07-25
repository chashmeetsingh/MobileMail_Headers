//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface MFMailboxFilterGroup : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_filters;
    long long _combinator;
    long long _selectionCardinality;
}

+ (id)groupWithName:(id)arg1 combinator:(long long)arg2 selectionCardinality:(long long)arg3 filters:(id)arg4;
@property(readonly, nonatomic) long long selectionCardinality; // @synthesize selectionCardinality=_selectionCardinality;
@property(readonly, nonatomic) long long combinator; // @synthesize combinator=_combinator;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 combinator:(long long)arg2 selectionCardinality:(long long)arg3 filters:(id)arg4;

@end

