//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@interface MessageMarkupDocumentActivity : UIActivity
{
    id <MFAttachmentHandlingDelegate> _attachmentHandlingDelegate;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) id <MFAttachmentHandlingDelegate> attachmentHandlingDelegate; // @synthesize attachmentHandlingDelegate=_attachmentHandlingDelegate;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;

@end
