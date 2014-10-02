//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface NSNumberFormatter : NSFormatter
{
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter *_formatter;
    unsigned int _counter;
    unsigned int _behavior;
    NSRecursiveLock *_lock;
    void *_reserved[10];
}

+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned int)arg2;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;
+ (unsigned int)defaultFormatterBehavior;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
- (void)setPartialStringValidationEnabled:(BOOL)arg1;
- (BOOL)isPartialStringValidationEnabled;
- (void)setMaximumSignificantDigits:(unsigned int)arg1;
- (unsigned int)maximumSignificantDigits;
- (void)setMinimumSignificantDigits:(unsigned int)arg1;
- (unsigned int)minimumSignificantDigits;
- (void)setUsesSignificantDigits:(BOOL)arg1;
- (BOOL)usesSignificantDigits;
- (void)setLenient:(BOOL)arg1;
- (BOOL)isLenient;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (id)currencyGroupingSeparator;
- (void)setMaximum:(id)arg1;
- (id)maximum;
- (void)setMinimum:(id)arg1;
- (id)minimum;
- (void)setMaximumFractionDigits:(unsigned int)arg1;
- (unsigned int)maximumFractionDigits;
- (void)setMinimumFractionDigits:(unsigned int)arg1;
- (unsigned int)minimumFractionDigits;
- (void)setMaximumIntegerDigits:(unsigned int)arg1;
- (unsigned int)maximumIntegerDigits;
- (void)setMinimumIntegerDigits:(unsigned int)arg1;
- (unsigned int)minimumIntegerDigits;
- (void)setRoundingIncrement:(id)arg1;
- (id)roundingIncrement;
- (void)setRoundingMode:(unsigned int)arg1;
- (unsigned int)roundingMode;
- (void)setPaddingPosition:(unsigned int)arg1;
- (unsigned int)paddingPosition;
- (void)setPaddingCharacter:(id)arg1;
- (id)paddingCharacter;
- (void)setMultiplier:(id)arg1;
- (id)multiplier;
- (void)setFormatWidth:(unsigned int)arg1;
- (unsigned int)formatWidth;
- (void)setSecondaryGroupingSize:(unsigned int)arg1;
- (unsigned int)secondaryGroupingSize;
- (void)setGroupingSize:(unsigned int)arg1;
- (unsigned int)groupingSize;
- (void)setExponentSymbol:(id)arg1;
- (id)exponentSymbol;
- (void)setPlusSign:(id)arg1;
- (id)plusSign;
- (void)setMinusSign:(id)arg1;
- (id)minusSign;
- (void)setPerMillSymbol:(id)arg1;
- (id)perMillSymbol;
- (void)setPercentSymbol:(id)arg1;
- (id)percentSymbol;
- (BOOL)_hasSetInternationalCurrencySymbol;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (id)internationalCurrencySymbol;
- (void)setCurrencySymbol:(id)arg1;
- (BOOL)_hasSetCurrencySymbol;
- (id)currencySymbol;
- (BOOL)_hasSetCurrencyCode;
- (void)setCurrencyCode:(id)arg1;
- (id)currencyCode;
- (void)setNegativeSuffix:(id)arg1;
- (id)negativeSuffix;
- (void)setNegativePrefix:(id)arg1;
- (id)negativePrefix;
- (void)setPositiveSuffix:(id)arg1;
- (id)positiveSuffix;
- (void)setPositivePrefix:(id)arg1;
- (id)positivePrefix;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (id)negativeInfinitySymbol;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (id)textAttributesForPositiveInfinity;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (id)positiveInfinitySymbol;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (id)textAttributesForNotANumber;
- (void)setNotANumberSymbol:(id)arg1;
- (id)notANumberSymbol;
- (void)setTextAttributesForNil:(id)arg1;
- (id)textAttributesForNil;
- (void)setNilSymbol:(id)arg1;
- (id)nilSymbol;
- (void)setTextAttributesForZero:(id)arg1;
- (id)textAttributesForZero;
- (void)setZeroSymbol:(id)arg1;
- (id)zeroSymbol;
- (void)setGroupingSeparator:(id)arg1;
- (id)groupingSeparator;
- (void)setUsesGroupingSeparator:(BOOL)arg1;
- (BOOL)usesGroupingSeparator;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (id)currencyDecimalSeparator;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)arg1;
- (BOOL)alwaysShowsDecimalSeparator;
- (void)setDecimalSeparator:(id)arg1;
- (id)decimalSeparator;
- (void)setAllowsFloats:(BOOL)arg1;
- (BOOL)allowsFloats;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (id)textAttributesForPositiveValues;
- (void)setPositiveFormat:(id)arg1;
- (id)positiveFormat;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (id)textAttributesForNegativeValues;
- (void)setNegativeFormat:(id)arg1;
- (id)negativeFormat;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (unsigned int)formatterBehavior;
- (void)setGeneratesDecimalNumbers:(BOOL)arg1;
- (BOOL)generatesDecimalNumbers;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setNumberStyle:(unsigned int)arg1;
- (unsigned int)numberStyle;
- (id)numberFromString:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_reset;
- (id)init;
- (void *)__Keynote_NOOP;
- (void)_regenerateFormatter;
- (void)_clearFormatter;

@end
