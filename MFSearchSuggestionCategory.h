//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, UIImage;

@interface MFSearchSuggestionCategory : NSObject <NSCopying>
{
    NSString *_displayName;
    UIImage *_image;
    UIImage *_atomImage;
    NSArray *_scopes;
    MFSearchSuggestionCategory *_groupingCategory;
}

+ (id)topHitsCategory;
+ (id)cannedCategory;
+ (id)otherCategory;
+ (id)dateCategory;
+ (id)subjectContainsCategory;
+ (id)subjectCategory;
+ (id)peopleContainsCategory;
+ (id)peopleCategory;
+ (id)mailboxCategory;
+ (id)rawCategory;
@property(nonatomic) __weak MFSearchSuggestionCategory *groupingCategory; // @synthesize groupingCategory=_groupingCategory;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(copy, nonatomic) UIImage *atomImage; // @synthesize atomImage=_atomImage;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)isGroupedInCategory:(id)arg1;
- (unsigned long long)indexOfScopeWithIdentifier:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayName:(id)arg1 groupingCategory:(id)arg2;
- (id)initWithDisplayName:(id)arg1;
- (id)init;
- (void)_configureAsSubjectCategoryWithScopes:(id)arg1;
- (void)_configureAsPeopleCategoryWithScopes:(id)arg1;

@end

