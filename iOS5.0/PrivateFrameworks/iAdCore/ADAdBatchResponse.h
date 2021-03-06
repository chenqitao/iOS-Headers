/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class ADAdDefaultsOverrides, NSMutableArray, NSString;

@interface ADAdBatchResponse : PBCodable
{
    BOOL _hasError;
    int _error;
    NSString *_batchId;
    NSMutableArray *_ads;
    BOOL _hasSupplyMetrics;
    BOOL _supplyMetrics;
    ADAdDefaultsOverrides *_overrideDefaults;
}

@property(retain, nonatomic) ADAdDefaultsOverrides *overrideDefaults; // @synthesize overrideDefaults=_overrideDefaults;
@property(nonatomic) BOOL supplyMetrics; // @synthesize supplyMetrics=_supplyMetrics;
@property(nonatomic) BOOL hasSupplyMetrics; // @synthesize hasSupplyMetrics=_hasSupplyMetrics;
@property(retain, nonatomic) NSMutableArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) BOOL hasError; // @synthesize hasError=_hasError;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOverrideDefaults;
- (id)adAtIndex:(unsigned int)arg1;
- (unsigned int)adsCount;
- (void)addAd:(id)arg1;
@property(readonly, nonatomic) BOOL hasBatchId;
- (void)dealloc;

@end

