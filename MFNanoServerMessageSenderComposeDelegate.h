//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEmailModel.h"

#import "MFComposeTypeFactoryDelegate.h"

@class MFComposeBodyField, MFMailAccountProxyGenerator, MFMessageHeaders, NSString;

@interface MFNanoServerMessageSenderComposeDelegate : MSEmailModel <MFComposeTypeFactoryDelegate>
{
    NSString *_sendingEmailAddress;
    MFComposeBodyField *_bodyField;
    MFMailAccountProxyGenerator *_accountProxyGenerator;
    MFMessageHeaders *_savedHeaders;
    NSString *_compositionContextID;
}

@property(retain, nonatomic) NSString *compositionContextID; // @synthesize compositionContextID=_compositionContextID;
@property(retain, nonatomic) MFMessageHeaders *savedHeaders; // @synthesize savedHeaders=_savedHeaders;
- (void)dealloc;
- (id)sendingAccountProxy;
- (id)accountProxyGenerator;
- (id)shouldCreateRichTextRepresentation;
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (id)pianoMoverImageURL;
- (id)attachments;
- (id)addInlinedElementToStore:(id)arg1 onlyIfNecessary:(_Bool)arg2;
- (id)sendingEmailAddress;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(_Bool)arg2;
- (id)bccRecipients;
- (void)setBccRecipients:(id)arg1;
- (id)ccRecipients;
- (void)setCcRecipients:(id)arg1;
- (id)toRecipients;
- (void)setToRecipients:(id)arg1;
- (id)bodyField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

