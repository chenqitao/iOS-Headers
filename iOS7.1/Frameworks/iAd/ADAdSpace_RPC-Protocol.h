//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ADAdImpressionPublicAttributes, NSError, NSString, NSURL;

@protocol ADAdSpace_RPC
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned int)arg1;
- (void)_remote_requestViewControllerWithClassName:(NSString *)arg1 forAdSpaceControllerWithIdentifier:(NSString *)arg2;
- (void)_remote_openURL:(NSURL *)arg1;
- (void)_remote_creativeDidFailWithError:(NSError *)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(ADAdImpressionPublicAttributes *)arg1;
- (void)_remote_creativeWillLoad;
- (void)_remote_setRemoteWindowContextID:(unsigned int)arg1;
@end
