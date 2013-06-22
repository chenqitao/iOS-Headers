/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID
{
    id _store;
    _NS128bitWrapper *_uuid128;
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (unsigned int)hash;
- (id)_storeIdentifier;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (void)_setPersistentStore:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)_referenceData;

@end
