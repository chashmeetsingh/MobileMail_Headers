//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EKICSPreviewControllerDelegate.h"
#import "MFAttachmentHandlingDelegate.h"
#import "MFAttachmentShowcaseDelegate.h"
#import "MFContactMessageInteractionDelegate.h"
#import "MFConversationItemHeaderBlockDelegate.h"
#import "MFMailMarkupDelegate.h"
#import "MFMessageContentViewDataSource.h"
#import "MFMessageContentViewDelegate.h"
#import "MFReusable.h"
#import "QLPreviewControllerDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class CNContactViewController, MFAttachmentShowcase, MFContactMessageInteraction, MFConversationItemHeaderBlock, MFMailMessage, MFMessageContentView, MFMessageLoadingContext, MFMessageLoadingContextErrorReportingMiddleware, MFMessageLoadingContextRetryMiddleware, MFVIPContactMessageInteraction, NSString, QLPreviewController, UIDocumentInteractionController;

@interface MFMessageViewController : UIViewController <EKICSPreviewControllerDelegate, MFAttachmentHandlingDelegate, MFAttachmentShowcaseDelegate, MFContactMessageInteractionDelegate, MFMailMarkupDelegate, MFMessageContentViewDataSource, MFMessageContentViewDelegate, UIDocumentInteractionControllerDelegate, UIPopoverPresentationControllerDelegate, QLPreviewControllerDelegate, MFConversationItemHeaderBlockDelegate, MFReusable>
{
    struct CGRect _attachmentRect;
    MFAttachmentShowcase *_attachmentShowcase;
    MFConversationItemHeaderBlock *_participantHeader;
    struct {
        unsigned int delegateRespondsToDidFinishRenderingWithHeight:1;
        unsigned int delegateRespondsToDidFinishFirstPaint:1;
        unsigned int delegateRespondsToDidDisplayContent:1;
        unsigned int delegateRespondsToDidTapShowMoreAtOffset:1;
        unsigned int delegateRespondsToDidFinishLoading:1;
        unsigned int delegateRespondsToMostRecentAncestorMessageForMessage:1;
        unsigned int delegateRespondsToWillBeginZoomingMessage:1;
        unsigned int delegateRespondsToDidEndZoomingMessage:1;
        unsigned int delegateRespondsToDidTapRevealActionsButton:1;
        unsigned int delegateRespondsToDidTapToExpand:1;
        unsigned int delegateRespondsToDidTapAddressAtomContactViewController:1;
        unsigned int delegateRespondsToDisplayNameForEmailAddressAbbreviated:1;
        unsigned int delegateRespondsToDidChangeSelectedHTML:1;
        unsigned int delegateRespondsToLoadingIndicatorDidChangeVisibility:1;
    } _flags;
    _Bool _automaticallyCollapseQuotedContent;
    _Bool _configuredForSingleMessageDisplay;
    id <MFMessageViewControllerDelegate> _delegate;
    MFMessageLoadingContext *_messageLoadingContext;
    MFMessageContentView *_messageContentView;
    QLPreviewController *_previewController;
    UIDocumentInteractionController *_doc;
    CNContactViewController *_contactViewController;
    MFContactMessageInteraction *_contactInteraction;
    MFVIPContactMessageInteraction *_vipContactInteraction;
    MFMessageLoadingContextRetryMiddleware *_retryMiddleware;
    MFMessageLoadingContextErrorReportingMiddleware *_errorReportingMiddleware;
}

@property(retain, nonatomic) MFMessageLoadingContextErrorReportingMiddleware *errorReportingMiddleware; // @synthesize errorReportingMiddleware=_errorReportingMiddleware;
@property(retain, nonatomic) MFMessageLoadingContextRetryMiddleware *retryMiddleware; // @synthesize retryMiddleware=_retryMiddleware;
@property(retain, nonatomic) MFVIPContactMessageInteraction *vipContactInteraction; // @synthesize vipContactInteraction=_vipContactInteraction;
@property(retain, nonatomic) MFContactMessageInteraction *contactInteraction; // @synthesize contactInteraction=_contactInteraction;
@property(retain, nonatomic) CNContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(nonatomic) __weak UIDocumentInteractionController *doc; // @synthesize doc=_doc;
@property(nonatomic) __weak QLPreviewController *previewController; // @synthesize previewController=_previewController;
@property(retain, nonatomic) MFMessageContentView *messageContentView; // @synthesize messageContentView=_messageContentView;
@property(nonatomic) _Bool configuredForSingleMessageDisplay; // @synthesize configuredForSingleMessageDisplay=_configuredForSingleMessageDisplay;
@property(nonatomic) _Bool automaticallyCollapseQuotedContent; // @synthesize automaticallyCollapseQuotedContent=_automaticallyCollapseQuotedContent;
@property(retain, nonatomic) MFMessageLoadingContext *messageLoadingContext; // @synthesize messageLoadingContext=_messageLoadingContext;
@property(nonatomic) __weak id <MFMessageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)presentingViewControllerForMessageInteraction:(id)arg1;
- (void)contactMessageInteraction:(id)arg1 didUpdateHeaderView:(id)arg2;
- (void)_setupHeaderViewForContactViewController:(id)arg1;
- (id)_contactViewControllerForAddressAtom:(id)arg1 isSender:(_Bool)arg2;
- (id)_delegateDisplayNameForEmailAddress:(id)arg1 abbreviated:(_Bool)arg2;
- (void)quicklookMarkupAction:(id)arg1;
- (void)previewAllAttachmentsStartingWithAttachment:(id)arg1;
- (void)showSelectedAttachment:(id)arg1 fromRect:(struct CGRect)arg2 view:(id)arg3;
- (void)showMenuForSelectedAttachment:(id)arg1 fromRect:(struct CGRect)arg2 view:(id)arg3;
- (void)hideMenuForSelectedAttachment;
- (void)_setAttachmentOriginRect:(struct CGRect)arg1 scale:(double)arg2;
- (id)_attachmentShowcase;
- (struct CGRect)markupAttachmentMaskForAttachment:(id)arg1;
- (struct CGRect)markupAttachmentBoundsForAttachment:(id)arg1;
- (id)attachmentIcon:(id)arg1;
- (id)markupReplacementAttachment;
- (void)handleMarkupData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 attachment:(id)arg4;
- (void)handleMarkupURL:(id)arg1 attachment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleMarkupError:(id)arg1 attachment:(id)arg2;
- (void)dismissMarkupViewController;
- (void)presentMarkupViewController:(id)arg1;
- (void)markupAttachment:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)previewController:(id)arg1 willMarkUpAtURL:(id)arg2;
- (void)markupAttachmentWithQuickLook:(id)arg1;
- (void)_performMailAction:(int)arg1 withMarkedUpFileAttachments:(id)arg2;
- (id)_makeFileCopyOfEditedQuickLookFileToLocalContainer:(id)arg1 preferredFileName:(id)arg2;
- (id)documentInteractionControllerMarkupDismissActions:(id)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (void)exportAttachment:(id)arg1;
- (id)localizedTitleForSaveAllAttachmentsAction;
- (_Bool)canSaveAllAttachmentsInContext:(long long)arg1;
- (_Bool)isAllowedToSaveAttachments;
- (id)allImageAndVideoAttachmentURLs;
- (void)_getNumberOfImages:(unsigned long long *)arg1 videos:(unsigned long long *)arg2 undownloaded:(unsigned long long *)arg3;
- (id)additionalActivitiesForDocumentInteractionController:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (id)_attachmentForFileURL:(id)arg1;
- (id)documentInteractionControllerTransitionImageForPreview:(id)arg1 contentRect:(struct CGRect *)arg2;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (struct CGRect)documentInteractionControllerRectForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)conversationItemHeader:(id)arg1 displayNameForEmailAddress:(id)arg2 abbreviated:(_Bool)arg3;
- (void)conversationItemHeader:(id)arg1 didSelectAddressAtom:(id)arg2 forSender:(_Bool)arg3;
- (void)conversationItemHeaderWasTapped:(id)arg1;
- (id)viewControllerForPresentationsFromConversationItemHeader:(id)arg1;
- (id)messageContentView:(id)arg1 quotedContentAttributionForMessage:(id)arg2;
- (id)presentingViewControllerForAttachmentShowcase:(id)arg1;
- (id)presentingViewControllerForMessageContentView:(id)arg1;
- (id)attachmentHandlingDelegateForMessageContentView:(id)arg1;
- (void)messageViewControllerDidTapToExpand;
- (void)messageContentView:(id)arg1 loadingIndicatorDidChangeVisibility:(_Bool)arg2;
- (void)messageContentView:(id)arg1 didChangeSelectedHTML:(id)arg2;
- (void)messageContentView:(id)arg1 didEndZoomingMessageWithOffset:(struct CGPoint)arg2;
- (void)messageContentViewWillBeginZoomingMessage:(id)arg1;
- (void)messageContentViewDidTapRevealActionsButton:(id)arg1;
- (void)messageContentView:(id)arg1 expandQuoteAtCollapsedOffset:(struct CGPoint)arg2 expandedOffset:(struct CGPoint)arg3;
- (void)messageContentViewDidDisplayContent:(id)arg1;
- (void)messageContentViewDidFinishFirstPaint:(id)arg1;
- (void)messageContentView:(id)arg1 didFinishRenderingWithHeight:(double)arg2;
- (void)messageContentViewDidFinishLoadingMessage:(id)arg1;
@property(readonly, nonatomic) MFMailMessage *message;
- (id)participantHeaderForContactStore:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

