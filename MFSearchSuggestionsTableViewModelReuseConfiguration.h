//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MFSearchSuggestionsTableViewModelReuseConfiguration : NSObject <NSCopying>
{
    NSString *_reuseIdentifier;
    CDUnknownBlockType _cellPopulator;
    CDUnknownBlockType _rowHeightCalculator;
    CDUnknownBlockType _rowSelector;
    CDUnknownBlockType _messagePreviewing;
}

@property(copy, nonatomic) CDUnknownBlockType messagePreviewing; // @synthesize messagePreviewing=_messagePreviewing;
@property(copy, nonatomic) CDUnknownBlockType rowSelector; // @synthesize rowSelector=_rowSelector;
@property(copy, nonatomic) CDUnknownBlockType rowHeightCalculator; // @synthesize rowHeightCalculator=_rowHeightCalculator;
@property(copy, nonatomic) CDUnknownBlockType cellPopulator; // @synthesize cellPopulator=_cellPopulator;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)validate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)init;

@end

