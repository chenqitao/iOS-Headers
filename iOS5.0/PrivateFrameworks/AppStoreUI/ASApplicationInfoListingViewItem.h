/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface ASApplicationInfoListingViewItem : NSObject
{
    UIImage *_image;
    struct CGSize _imageSize;
    NSString *_label;
    struct CGSize _labelSize;
    NSArray *_values;
    float _valueHeight;
    float _valueWidth;
    unsigned int _isCompact:1;
    unsigned int _wrapsIfNecessary:1;
}

@property(nonatomic) float valueWidth; // @synthesize valueWidth=_valueWidth;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL wrapsIfNecessary;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) BOOL shouldCompact;
@property(nonatomic, getter=isCompact) BOOL compact;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) NSString *combinedValues;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 values:(id)arg2;

@end
