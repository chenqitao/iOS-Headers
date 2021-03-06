/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Conference/CNFRegListController.h>

@class CNFRegAlias, NSArray, PSSpecifier;

@interface CNFRegAliasDetailController : CNFRegListController
{
    CNFRegAlias *_alias;
    PSSpecifier *_removeGroupSpecifier;
    PSSpecifier *_removeButtonSpecifier;
    NSArray *_resendValidationSpecifierGroup;
}

- (id)initWithRegController:(id)arg1 alias:(id)arg2;
- (void)dealloc;
- (id)bundle;
- (id)specifierList;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)_canRemoveAlias;
- (void)_updateUIAnimated:(BOOL)arg1;
- (void)_showResendGroup:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forgetAliasTapped:(id)arg1;
- (void)setRemoveAliasEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showRemoveAliasConfirmation;
- (void)resendValidationEmailTapped:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)_showAliasValidationError:(id)arg1;
- (void)_setupEventHandlers;
@property(retain, nonatomic) CNFRegAlias *alias; // @synthesize alias=_alias;

@end

