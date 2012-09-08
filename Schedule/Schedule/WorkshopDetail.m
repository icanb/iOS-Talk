//
//  WorkshopDetail.m
//  Schedule
//
//  Created by Ilter Canberk on 9/8/12.
//  Copyright (c) 2012 Mocha Labs. All rights reserved.
//

#import "WorkshopDetail.h"

@implementation WorkshopDetail

@synthesize title;
@synthesize description;
@synthesize date;

- (id)initWithTitle:(NSString *)title description:(NSString *)description date:(NSString *)date {
  
  if ((self = [super init])) {
    
    self.title = title;
    self.description = description;
    self.date = date;

  }
  return self;
  
}

@end


