//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UILabel;

@interface _MFFormEntry : NSObject
{
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

+ (id)labelFont;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;
- (id)initWithTextAlignment:(long long)arg1;

@end
