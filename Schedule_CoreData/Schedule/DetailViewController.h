//
//  DetailViewController.h
//  Schedule
//
//  Created by Ilter Canberk on 9/8/12.
//  Copyright (c) 2012 Mocha Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WorkshopDetail;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) WorkshopDetail *detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
