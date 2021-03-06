/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage;

@interface ABPersonIconImageView : UIView
{
    UIView *_imageView;
    int _imageType;
    struct CGSize _iconSize;
    UIImage *_maskImage;
    UIImage *_overlayImage;
    id _styleHelper;
}

+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(int)arg1;
+ (id)_placeholderCompanyImageForType:(int)arg1 size:(struct CGSize)arg2;
+ (id)_placeholderPersonImageForType:(int)arg1 size:(struct CGSize)arg2;
+ (id)genericBlankPlaceholderImageOfSize:(struct CGSize)arg1;
+ (id)leftRightBorderOverlayImageOfSize:(struct CGSize)arg1;
+ (id)rightBorderOverlayImageOfSize:(struct CGSize)arg1;
+ (id)newImageViewWithIconSize:(struct CGSize)arg1 imageType:(int)arg2;
+ (struct CGSize)optimalIconSize;
@property(readonly, nonatomic) int imageType; // @synthesize imageType=_imageType;
- (BOOL)hasImageToDisplay;
@property(nonatomic) BOOL shouldPickBestImage;
- (void *)displayedPerson;
- (void)setDisplayedPerson:(void *)arg1;
- (id)_placeholderCompanyImage;
- (id)_placeholderPersonImage;
- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
- (id)_overlayImageOrNSNull;
- (id)_maskImageOrNSNull;
- (void)_updateImages;
- (void)setNeedsRecompositing;
- (void)setNeedsReload;
- (void)dealloc;
- (id)initWithIconSize:(struct CGSize)arg1 imageType:(int)arg2;
- (id)personImageView;
- (id)init;

@end

