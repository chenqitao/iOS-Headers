/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class UIDatePicker;

@interface ABDatePickerViewController : UIViewController
{
    void *_context;
    UIDatePicker *_datePicker;
    id <ABDatePickerViewControllerDismissDelegate> _dismissDelegate;
}

+ (struct CGSize)datePickerSize;
- (void)dealloc;
- (float)ab_heightToFitForViewInPopoverView;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
@property(nonatomic) id <ABDatePickerViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) void *context; // @synthesize context=_context;

@end
