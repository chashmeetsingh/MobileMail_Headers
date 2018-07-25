//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, UIImage;

@interface MFSnapshotCacheItem : NSObject
{
    _Bool _updating;
    UIImage *_snapshotImage;
    NSUUID *_identifier;
    long long _state;
    unsigned long long _decodedSize;
}

@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) unsigned long long decodedSize; // @synthesize decodedSize=_decodedSize;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
- (void)dealloc;

@end

