/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKDocumentRoot.h>

@class TSSStylesheet, TSSTheme;

@interface TSKDocumentRoot (TSSAdditions)
- (void)enumerateStyleClientsUsingBlock:(id)arg1;
@property(readonly, nonatomic) TSSStylesheet *stylesheet;
- (void)setThemeForTemplateImport:(id)arg1;
@property(retain, nonatomic) TSSTheme *theme;
@end

