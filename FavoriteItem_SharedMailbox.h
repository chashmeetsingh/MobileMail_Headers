//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoriteItem.h"

@interface FavoriteItem_SharedMailbox : FavoriteItem
{
    unsigned long long _sourceType;
}

@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (id)persistentIdForMigration;
- (void)wasSelected:(id)arg1 indexPath:(id)arg2 accessoryTapped:(_Bool)arg3;
- (void)configureCell:(id)arg1;
- (id)badgeCountString;
- (id)criterion;
- (id)applicationShortcutIcon;
- (id)iconTintColor;
- (id)defaultIcon;
- (id)displayName;
- (id)sharedMailboxController;
- (_Bool)isVisible;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSourceType:(unsigned long long)arg1;

@end

