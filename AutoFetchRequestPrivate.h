//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFCVisibleMailboxFetch.h"
#import "MSFetchMetricsControllerDataSource.h"

@class MFActivityMonitor, MFError, MFMailMessageStore, MFMailboxUid, MSFetchMetricsController, MailAccount, NSString;

@interface AutoFetchRequestPrivate : NSObject <MSFetchMetricsControllerDataSource, AFCVisibleMailboxFetch>
{
    NSString *_remoteID;
    MFMailboxUid *_uid;
    MFMailMessageStore *_store;
    NSString *_key;
    MSFetchMetricsController *_metricsController;
    double _responsiveness;
    unsigned long long _gotNewMessagesState;
    _Bool _wasPrimaryMailbox;
    MFError *_error;
    long long _result;
    _Bool _shouldLoadMessageBody;
    _Bool _dontNotify;
    _Bool _displayErrors;
    _Bool _compactMailbox;
    _Bool _isVisibleFetch;
    _Bool _isPowernapFetch;
    _Bool _retry;
    _Bool _closeConnection;
    _Bool _isUserRequested;
    _Bool _isForegroundRequest;
    _Bool _shouldGrowFetchWindow;
    _Bool _downloadAllMessages;
    _Bool _isPush;
    _Bool _isScheduled;
    unsigned long long _loadNumOlderMessages;
    MFActivityMonitor *_monitor;
}

@property(readonly, nonatomic) MFActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) _Bool downloadAllMessages; // @synthesize downloadAllMessages=_downloadAllMessages;
@property(nonatomic) _Bool shouldGrowFetchWindow; // @synthesize shouldGrowFetchWindow=_shouldGrowFetchWindow;
@property(nonatomic) _Bool isForegroundRequest; // @synthesize isForegroundRequest=_isForegroundRequest;
@property(nonatomic) _Bool isUserRequested; // @synthesize isUserRequested=_isUserRequested;
@property(nonatomic) _Bool closeConnection; // @synthesize closeConnection=_closeConnection;
@property(nonatomic) _Bool retry; // @synthesize retry=_retry;
@property(nonatomic) _Bool dontNotify; // @synthesize dontNotify=_dontNotify;
@property(nonatomic) unsigned long long loadNumOlderMessages; // @synthesize loadNumOlderMessages=_loadNumOlderMessages;
@property(nonatomic) _Bool shouldLoadMessageBody; // @synthesize shouldLoadMessageBody=_shouldLoadMessageBody;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
@property(readonly, nonatomic) MFMailboxUid *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) double responsiveness; // @synthesize responsiveness=_responsiveness;
@property(nonatomic) unsigned long long gotNewMessagesState; // @synthesize gotNewMessagesState=_gotNewMessagesState;
@property(nonatomic) _Bool isPowernapFetch; // @synthesize isPowernapFetch=_isPowernapFetch;
@property(nonatomic) _Bool isVisibleFetch; // @synthesize isVisibleFetch=_isVisibleFetch;
@property(nonatomic) _Bool wasPrimaryMailbox; // @synthesize wasPrimaryMailbox=_wasPrimaryMailbox;
@property(nonatomic) _Bool shouldCompact; // @synthesize shouldCompact=_compactMailbox;
@property(nonatomic) _Bool displayErrors; // @synthesize displayErrors=_displayErrors;
@property(copy, nonatomic) NSString *remoteIDToPreserve; // @synthesize remoteIDToPreserve=_remoteID;
@property(readonly, nonatomic) _Bool shouldNotify;
- (_Bool)willGrowFetchWindow;
- (id)mailbox;
@property(readonly, nonatomic) MailAccount *account;
- (void)logSummary:(id)arg1 error:(id)arg2;
- (_Bool)shouldReport;
- (unsigned long long)localNonDeletedCount;
- (unsigned long long)numMessagesFetched;
- (unsigned long long)totalBytesReceived;
- (unsigned long long)totalBytesSent;
- (_Bool)didTimeout;
- (id)mailError;
- (int)newMessagesState;
- (_Bool)isForeground;
- (int)trigger;
- (int)mailboxType;
- (int)protocol;
- (int)emailProvider;
- (id)diagnosticManager;
@property(readonly, nonatomic, getter=_fetchedSuccessfully) _Bool fetchedSuccessfully;
- (void)run;
- (void)dealloc;
- (id)initRequestForMailboxUid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

