//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCSOperation.h"

@interface MCSMailboxOperation : MCSOperation
{
}

- (id)localizedErrorTitle;
- (id)localizedErrorDescription;
- (id)accountForErrorHandling;
- (id)mailboxParentForMove;
- (id)mailboxToMoveOrRename;
- (id)modifiedMailboxName;
- (id)mailboxToRemove;
- (_Bool)revert;
- (_Bool)commit;
- (id)applyPendingChangeToObjects:(id)arg1;

@end

