/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIWebView.h"

@class NSMutableDictionary, NSString;

@interface ADWebView : UIWebView
{
    id <ADWebViewDelegate><UIWebViewDelegate> _delegate;
    NSMutableDictionary *_resourceLoadStartDates;
    BOOL _shouldReportResourceTiming;
    BOOL _shouldReportScriptErrors;
    BOOL _webGLEnabled;
    BOOL _paused;
    NSString *_userAgent;
}

+ (void)clearContentStorage;
+ (void)_resetMemoryLogging:(id)arg1;
+ (void)initialize;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) BOOL webGLEnabled; // @synthesize webGLEnabled=_webGLEnabled;
@property(nonatomic) BOOL shouldReportScriptErrors; // @synthesize shouldReportScriptErrors=_shouldReportScriptErrors;
@property(nonatomic) BOOL shouldReportResourceTiming; // @synthesize shouldReportResourceTiming=_shouldReportResourceTiming;
@property(retain, nonatomic) NSMutableDictionary *resourceLoadStartDates; // @synthesize resourceLoadStartDates=_resourceLoadStartDates;
@property(nonatomic) id <UIWebViewDelegate><ADWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)loadWebArchive:(id)arg1;
- (void)sendOrientationEventForOrientation:(int)arg1;
- (void)dispatchDOMEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3;
@property(readonly, nonatomic) struct OpaqueJSContext *javaScriptContextRef;
- (void)_handleConsoleMessage:(id)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

