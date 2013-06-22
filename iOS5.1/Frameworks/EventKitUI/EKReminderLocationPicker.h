/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "EKReminderLocationPickerModelDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class EKReminderLocationPickerModel, UIAlertView;

@interface EKReminderLocationPicker : UITableViewController <ABPeoplePickerNavigationControllerDelegate, EKReminderLocationPickerModelDelegate, UIAlertViewDelegate>
{
    EKReminderLocationPickerModel *_model;
    id <EKStyleProvider> _styleProvider;
    int _savedStatusBarStyle;
    UIAlertView *_meCardAlert;
    BOOL _ignoreNextSelectionChange;
}

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_presentPersonPicker;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 withLinkedPeople:(struct __CFArray *)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)_dismissPeoplePicker;
- (void)_setLocationFromRecord:(void *)arg1 multiValueIdentifier:(int)arg2;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModel:(id)arg1 didUpdateLocationItemAtIndex:(int)arg2;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModelDidEndOperation:(id)arg1;
- (void)locationPickerModelDidBeginOperation:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)marginForTableView:(id)arg1;
- (void)_presentPeopleAddressPicker;
- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_showPickMeCardAlertIfNecessary;
- (void)_removeExistingMeCardAlert;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 styleProvider:(id)arg2;

@end
