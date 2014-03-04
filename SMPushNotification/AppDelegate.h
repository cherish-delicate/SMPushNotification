//
//  AppDelegate.h
//  SMPushNotification
//
//  Created by MingYang on 3/4/14.
//  Copyright (c) 2014 Cherish215. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class SMClient;
@class SMPushClient;
@class SMCoreDataStore;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (strong, nonatomic) SMClient *client;
@property (strong, nonatomic) SMPushClient *pushClient;
@property (strong, nonatomic) SMCoreDataStore *coreDataStore;

@end
