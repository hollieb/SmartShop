//
//  ViewController.h
//  SmartShop
//
//  Created by Hollie Bradley on 6/11/15.
//  Copyright (c) 2015 Hollie Bradley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RESTWebServiceHandler.h"

@interface LoginViewController : UIViewController <RESTWebServiceHandlerDelegate>

@property (weak, nonatomic) IBOutlet UITextField *userField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)didPressLogin:(id)sender;

@end

