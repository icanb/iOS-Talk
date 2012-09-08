//
//  MasterViewController.h
//  Schedule
//
//  Created by Ilter Canberk on 9/8/12.
//  Copyright (c) 2012 Mocha Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WorkshopDetail.h"

@interface MasterViewController : UITableViewController

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) IBOutlet UITextField *textField;

@end
