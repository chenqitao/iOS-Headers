/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString;

@interface AVAudioSessionDataSourceDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateSourceDescriptionsArrayWithCFArray:(struct __CFArray *)arg1 forInput:(BOOL)arg2;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary *)arg1 forInput:(BOOL)arg2;
- (struct DataSourceDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly) NSString *dataSourceName;
@property(readonly) NSNumber *dataSourceID;
- (void)dealloc;
- (id)init;

@end

