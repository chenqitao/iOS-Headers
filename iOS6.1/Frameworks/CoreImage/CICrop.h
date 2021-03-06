/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CICrop : CIFilter
{
    CIImage *inputImage;
    CIVector *inputRectangle;
}

+ (id)customAttributes;
@property(copy, nonatomic) CIVector *inputRectangle; // @synthesize inputRectangle;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;

@end

