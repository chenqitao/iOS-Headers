//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkBannerItem.h"

@class NSDate, NSString, SBAlertItem, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem
{
    SBAlertItem *_alertItem;
    NSString *_title;
    NSString *_message;
    SBUISound *_sound;
    NSDate *_originDate;
}

- (CDUnknownBlockType)subActionWithIndex:(unsigned long long)arg1;
- (id)subActionLabels;
- (id)sourceDate;
- (id)sound;
- (CDUnknownBlockType)ignoreAction;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (unsigned long long)priority;
- (_Bool)matchesContext:(id)arg1;
- (void)reloadDisplayProperties;
- (long long)defaultActionType;
- (id)categoryImage;
- (id)category;
- (id)title;
- (void)dealloc;
- (id)initWithAlertItem:(id)arg1;

@end

