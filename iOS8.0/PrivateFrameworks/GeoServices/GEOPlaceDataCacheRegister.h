//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataCacheRegister : NSObject
{
    NSMutableDictionary *_caches;
}

- (void)evictAllEntries;
- (void)deletePhoneNumberMapping;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (id)allCacheEntries;
- (id)cacheForProviderID:(int)arg1;
- (void)dealloc;
- (id)init;

@end

