//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFTriageInteraction.h"

@class MFMailboxUid, NSSet;

@interface MFMoveMessageTriageInteraction : MFTriageInteraction
{
    NSSet *_sourceMailboxes;
    int _specialDestination;
    MFMailboxUid *_targetMailbox;
}

@property(nonatomic) int specialDestination; // @synthesize specialDestination=_specialDestination;
@property(retain, nonatomic) MFMailboxUid *targetMailbox; // @synthesize targetMailbox=_targetMailbox;
- (void).cxx_destruct;
- (id)color;
- (id)miniIcon;
- (id)icon;
- (id)shortTitle;
- (id)title;
@property(readonly, nonatomic) NSSet *sourceMailboxes;
- (void)_moveToSpecialDestination:(int)arg1;
- (void)_moveToTargetMailbox:(id)arg1;
- (void)_performInteraction_Internal;

@end

