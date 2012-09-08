//
//  WorkshopDetail.h
//  Schedule
//
//  Created by Ilter Canberk on 9/8/12.
//  Copyright (c) 2012 Mocha Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface WorkshopDetail : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * explanation;
@property (nonatomic, retain) NSString * date;

@end
