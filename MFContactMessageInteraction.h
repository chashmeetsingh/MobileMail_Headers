//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CertificateViewController, MFCertificateTrustInfo, MFMessageLoadingContext, MFMessageLoadingContextSMIMEInfo, MFSecureMIMEPersonHeaderView, NSError, UIViewController;

@interface MFContactMessageInteraction : NSObject
{
    MFCertificateTrustInfo *_certificateTrustInfo;
    MFSecureMIMEPersonHeaderView *_headerView;
    id <MFContactMessageInteractionDelegate> _delegate;
    MFMessageLoadingContext *_messageLoadingContext;
    CertificateViewController *_certificateViewController;
    MFMessageLoadingContextSMIMEInfo *_smimeInfo;
    NSError *_smimeError;
    id <MFCancelable> _smimeCancellable;
}

@property(retain, nonatomic) id <MFCancelable> smimeCancellable; // @synthesize smimeCancellable=_smimeCancellable;
@property(retain, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(retain, nonatomic) MFMessageLoadingContextSMIMEInfo *smimeInfo; // @synthesize smimeInfo=_smimeInfo;
@property(retain, nonatomic) CertificateViewController *certificateViewController; // @synthesize certificateViewController=_certificateViewController;
@property(retain, nonatomic) MFMessageLoadingContext *messageLoadingContext; // @synthesize messageLoadingContext=_messageLoadingContext;
@property(nonatomic) __weak id <MFContactMessageInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)promptToReplaceCurrentCertificateWithBlock:(CDUnknownBlockType)arg1;
- (void)promptOrInstallCertificationWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshCertificateViewControllerStatus;
- (void)_updateHeaderView;
- (void)installCertificateWithTrustException:(_Bool)arg1;
- (void)performCertificateActionUntrust;
- (void)performCertificateActionTrust;
- (void)performCertificateActionInstall;
- (void)performCertificateActionTrustAndInstall;
- (void)performCertificateActionRemove;
- (void)updateCertificateAction;
- (void)_certificateControllerDidFinish;
- (void)setCertificateViewController:(id)arg1 certificateTrustInfo:(id)arg2;
- (void)_presentCertificateTrustInfo:(id)arg1;
- (void)_viewEncryptionCertificateButtonTapped:(id)arg1;
- (void)_viewSigningCertificateButtonTapped:(id)arg1;
- (void)_configureSecureMIMEPersonHeaderView:(id)arg1;
- (_Bool)shouldShowContactHeader;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) MFSecureMIMEPersonHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)handle_trustDidChange;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)initWithMessageLoadingContext:(id)arg1;
- (void)dealloc;

@end

