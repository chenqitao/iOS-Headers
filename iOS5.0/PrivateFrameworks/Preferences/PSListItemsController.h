/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController
{
    int _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
}

- (void)viewWillAppear:(BOOL)arg1;
- (void)scrollToSelectedCell;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)suspend;
- (void)didLock;
- (void)prepareSpecifiersMetadata;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_addStaticText:(id)arg1;
- (id)itemsFromParent;
- (id)itemsFromDataSource;
- (id)specifiers;
- (BOOL)isRestrictionList;
- (void)setIsRestrictionList:(BOOL)arg1;

@end

