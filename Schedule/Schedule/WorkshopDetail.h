//
//  WorkshopDetail.h
//  Schedule
//
//  Created by Ilter Canberk on 9/8/12.
//  Copyright (c) 2012 Mocha Labs. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface WorkshopDetail : NSObject

@property (strong) NSString *title;
@property (strong) NSString *description;
@property (strong) NSString *date;

- (id)initWithTitle:(NSString*)title description:(NSString*)description date:(NSString*)date;

@end
