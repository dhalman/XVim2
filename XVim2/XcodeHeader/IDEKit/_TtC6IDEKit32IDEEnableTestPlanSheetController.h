//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEScheme, NSTextField, NSWindow;

@interface _TtC6IDEKit32IDEEnableTestPlanSheetController : IDEViewController
{
    // Error parsing type: , name: sheetWindow
    // Error parsing type: , name: titleField
    // Error parsing type: , name: scheme
    // Error parsing type: , name: hostWindow
    // Error parsing type: , name: workspaceController
    // Error parsing type: , name: testPlanChoice
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setChoice:(id)arg1;
- (void)cancel:(id)arg1;
- (void)proceed:(id)arg1;
- (void)runSheetModalOnWindow:(id)arg1 workspaceTabController:(id)arg2;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
@property(nonatomic, retain) IDEScheme *scheme; // @synthesize scheme;
@property(nonatomic, retain) NSTextField *titleField; // @synthesize titleField;
@property(nonatomic, retain) NSWindow *sheetWindow; // @synthesize sheetWindow;

@end

