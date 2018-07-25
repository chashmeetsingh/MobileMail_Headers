//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoriteItem.h"

@interface FavoriteItem_UnifiedMailbox : FavoriteItem
{
    int _mailboxType;
}

- (id)description;
- (id)persistentIdForMigration;
- (void)wasSelected:(id)arg1 indexPath:(id)arg2 accessoryTapped:(_Bool)arg3;
- (struct CGPoint)iconOffset;
- (void)configureCell:(id)arg1;
- (id)badgeCountString;
- (id)applicationShortcutIcon;
- (id)defaultIcon;
- (id)displayName;
- (_Bool)isVisible;
- (id)dictionaryRepresentation;
- (_Bool)acceptsMessageTransfers;
- (id)representingMailboxes;
- (int)mailboxType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMailboxType:(int)arg1;

@end
