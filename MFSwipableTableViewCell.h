//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface MFSwipableTableViewCell : UITableViewCell
{
    UIView *_contentWrapperView;
}

@property(retain, nonatomic) UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

