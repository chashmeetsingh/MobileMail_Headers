//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFIndexMap, NSMutableIndexSet;

@interface MFExpandedRowsMap : NSObject
{
    unsigned long long _expandedCount;
    long long _emptyRangeCount;
    NSMutableIndexSet *_expandedTableRows;
    MFIndexMap *_indexMap;
}

@property(retain, nonatomic) MFIndexMap *indexMap; // @synthesize indexMap=_indexMap;
@property(retain, nonatomic) NSMutableIndexSet *expandedTableRows; // @synthesize expandedTableRows=_expandedTableRows;
@property(nonatomic) long long emptyRangeCount; // @synthesize emptyRangeCount=_emptyRangeCount;
@property(nonatomic) unsigned long long expandedCount; // @synthesize expandedCount=_expandedCount;
- (struct _NSRange)_rangeStartingAt:(unsigned long long)arg1;
- (unsigned long long)_numberOfExpandedRanges;
- (void)_assertConsistency;
- (void)_removeRootRow:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (void)_insertRootRow:(unsigned long long)arg1 key:(long long)arg2 numEntries:(unsigned long long)arg3;
- (void)enumerateRowsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)updateRowsForContext:(id)arg1 destinationIndexPaths:(id)arg2 cascadedContext:(out id *)arg3 removedKeys:(out id *)arg4;
- (_Bool)isRootIndexPath:(id)arg1;
- (_Bool)isRootRow:(long long)arg1;
- (_Bool)isExpandedIndexPath:(id)arg1;
- (_Bool)isExpandedRow:(long long)arg1;
- (id)unOffsetIndexPath:(id)arg1;
- (id)offsetIndexPath:(id)arg1;
- (long long)rootRowForKey:(long long)arg1;
- (long long)keyForRootRow:(long long)arg1;
- (id)rootIndexPathForExpandedRow:(long long)arg1;
- (id)indexPathsForAllEntries;
- (unsigned long long)numberOfRootRows;
- (unsigned long long)numberOfExpandedRowsForKey:(long long)arg1;
- (unsigned long long)numberOfExpandedRowsForRootRow:(long long)arg1;
- (id)indexPathsForEntriesFromRootRow:(long long)arg1;
- (id)expandFromKey:(long long)arg1 numEntries:(unsigned long long)arg2;
- (void)addEmptyRootRow:(long long)arg1 key:(long long)arg2;
- (id)expandFromRootRow:(long long)arg1 key:(long long)arg2 numEntries:(unsigned long long)arg3;
- (void)setNumEntries:(unsigned long long)arg1 forRootRow:(long long)arg2;
- (void)removeExpandedRowsFromRootRow:(long long)arg1;
- (void)removeAllExpandedRows;
- (unsigned long long)numberOfExpandedRows;
- (_Bool)hasExpandedRows;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

