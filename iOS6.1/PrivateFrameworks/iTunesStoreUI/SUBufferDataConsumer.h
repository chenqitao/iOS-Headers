/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SUCollectingDataConsumer-Protocol.h"

@class NSData, NSMutableData;

@interface SUBufferDataConsumer : NSObject <SUCollectingDataConsumer>
{
    NSMutableData *_dataBuffer;
}

- (void)finish;
@property(readonly, nonatomic) NSData *consumedData;
- (int)consumeData:(id)arg1;
- (id)mutableConsumedData;
- (void)dealloc;
- (id)init;

@end
