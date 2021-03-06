/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImage.h"

@class NSData;

@interface SBWallpaperImage : UIImage
{
    long long _variant;
    NSData *_data;
}

+ (void)preheatWallpaperDataForVariant:(long long)arg1;
+ (id)cachedWallpaperDataForVariant:(long long)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

@end

