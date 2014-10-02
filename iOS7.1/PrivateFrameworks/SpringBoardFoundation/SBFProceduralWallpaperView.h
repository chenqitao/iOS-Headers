//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

#import "SBFProceduralWallpaperDelegate.h"

@class NSTimer, UIImage;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    NSTimer *_colorSampleTimer;
    UIImage *_blur;
    int _thermalNotificationToken;
    BOOL _pausedForThermalReasons;
}

+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;
- (void)_updateAnimating;
- (void)_sample;
- (BOOL)_shouldSampleContinuously;
- (void)_updateSampleTimer;
- (id)_newImageFromBlurSurface:(void *)arg1 rect:(struct CGRect)arg2;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
- (id)_blurredImage;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (BOOL)isDisplayingWallpaper:(id)arg1;
- (void)layoutSubviews;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 proceduralWallpaper:(id)arg2;

@end
