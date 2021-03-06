//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface TSKAnnotationAuthor : TSPObject
{
    NSString *mName;
    TSUColor *mColor;
}

+ (id)defaultAuthorName;
+ (id)authorColorNameForIndex:(unsigned int)arg1;
+ (id)authorColorAppearanceNameForIndex:(unsigned int)arg1;
+ (id)authorMenuSwatchColorForIndex:(unsigned int)arg1;
+ (id)authorStorageColorForIndex:(unsigned int)arg1;
+ (id)authorColorForIndex:(unsigned int)arg1 forKey:(id)arg2;
+ (unsigned int)presetColorCount;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)allowsImplicitComponentOwnership;
- (id)componentRootObject;
@property(readonly, nonatomic) BOOL showAuthorComments;
@property(readonly, nonatomic) NSString *menuSwatchColorForAuthor;
@property(readonly, nonatomic) NSString *appearanceColorForAuthor;
@property(readonly, nonatomic) NSString *authorColorName;
@property(readonly, nonatomic) TSUColor *gradientEndColor;
@property(readonly, nonatomic) TSUColor *gradientStartColor;
@property(readonly, nonatomic) TSUColor *sidebarSelectedBorderColor;
@property(readonly, nonatomic) TSUColor *sidebarChangeBarColor;
@property(readonly, nonatomic) TSUColor *sidebarUsernameColor;
@property(readonly, nonatomic) TSUColor *sidebarSelectedColor;
@property(readonly, nonatomic) TSUColor *sidebarHoverColor;
@property(readonly, nonatomic) TSUColor *popoverColor;
@property(readonly, nonatomic) TSUColor *flagFillColor;
@property(readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property(readonly, nonatomic) TSUColor *flagPressedColor;
@property(readonly, nonatomic) TSUColor *flagStrokeColor;
@property(readonly, nonatomic) TSUColor *cellViolatorColor;
@property(readonly, nonatomic) TSUColor *textHighlightColor;
@property(readonly, nonatomic) TSUColor *textMarkupColor;
@property(readonly, nonatomic) TSUColor *popoverAuthorLabelColor;
@property(readonly, nonatomic) TSUColor *popoverButtonTintColor;
- (unsigned int)p_authorColorIndex;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
@property(retain, nonatomic) TSUColor *storageColor;
@property(copy, nonatomic) NSString *name;

@end

