/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextFieldDelegate-Protocol.h"

@protocol PINEntryView <UITextFieldDelegate>
- (void)setBlocked:(BOOL)arg1;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(int)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)hideError;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)showError:(id)arg1 animate:(BOOL)arg2;
@end
