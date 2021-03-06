//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFXPCServer.h"

#import "MSDMessageSnapshotProtocol.h"

@class MFMessageScreenshotGenerator, NSString;

@interface MFDMessageSnapshot : MFXPCServer <MSDMessageSnapshotProtocol>
{
    MFMessageScreenshotGenerator *_screenshotGenerator;
}

+ (id)exportedInterface;
@property(retain, nonatomic) MFMessageScreenshotGenerator *screenshotGenerator; // @synthesize screenshotGenerator=_screenshotGenerator;
- (void).cxx_destruct;
- (void)loadMessageFromLibraryID:(id)arg1 size:(struct CGSize)arg2 traitCollection:(id)arg3 layoutMargins:(struct UIEdgeInsets)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

