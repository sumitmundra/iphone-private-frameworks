/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIViewController.h>


@interface UISnapshotModalViewController : UIViewController {
	int _interfaceOrientation;
	UIViewController* _disappearingViewController;
}
@property(retain, nonatomic) UIViewController* disappearingViewController;
-(id)initWithInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
@end

