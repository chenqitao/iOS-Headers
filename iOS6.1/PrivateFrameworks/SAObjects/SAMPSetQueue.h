/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSURL, SAMPCollection;

@interface SAMPSetQueue : SABaseClientBoundCommand
{
}

+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setQueue;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *sort;
@property(retain, nonatomic) SAMPCollection *mediaItems;
@property(copy, nonatomic) NSArray *filters;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
