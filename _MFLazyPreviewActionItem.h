//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPreviewActionGroup.h"

#import "UIPreviewActionItem.h"

@class NSString;

@interface _MFLazyPreviewActionItem : UIPreviewActionGroup <UIPreviewActionItem>
{
    id <_MFLazyPreviewActionItemDataSource> _dataSource;
}

+ (id)previewActionItemWithTitle:(id)arg1 dataSource:(id)arg2;
@property(retain, nonatomic) id <_MFLazyPreviewActionItemDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)isKindOfClass:(Class)arg1;
- (CDUnknownBlockType)handler;
- (id)_actions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

