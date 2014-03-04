//
//  ViewController.h
//  SMPushNotification
//
//  Created by MingYang on 3/4/14.
//  Copyright (c) 2014 Cherish215. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)registerDevice:(id)sender;

@end
