//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _MLClientCompletionBlockWrapper : NSObject
{
    CDUnknownBlockType _libraryCompletionHandler;
    CDUnknownBlockType _transactionCompletionHandler;
    CDUnknownBlockType _queryCompletionHandler;
    CDUnknownBlockType _progressCompletionHandler;
}

+ (id)emptyClientCompletionBlock;
+ (id)clientCompletionBlockWithImportStatusHandler:(CDUnknownBlockType)arg1;
+ (id)clientCompletionBlockWithQueryResultHandler:(CDUnknownBlockType)arg1;
+ (id)clientCompletionBlockWithTransactionHandler:(CDUnknownBlockType)arg1;
+ (id)clientCompletionBlockWithLibraryHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType progressCompletionHandler; // @synthesize progressCompletionHandler=_progressCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType transactionCompletionHandler; // @synthesize transactionCompletionHandler=_transactionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType libraryCompletionHandler; // @synthesize libraryCompletionHandler=_libraryCompletionHandler;
- (void).cxx_destruct;

@end

