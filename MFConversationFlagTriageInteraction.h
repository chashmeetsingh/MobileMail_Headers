//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFFlagChangeTriageInteraction.h"

@class MFMailMessage;

@interface MFConversationFlagTriageInteraction : MFFlagChangeTriageInteraction
{
    MFMailMessage *_referenceMessage;
}

+ (id)interactionWithReferenceMessage:(id)arg1;
@property(retain, nonatomic) MFMailMessage *referenceMessage; // @synthesize referenceMessage=_referenceMessage;
- (void)dealloc;

@end

