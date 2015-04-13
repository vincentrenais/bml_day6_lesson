//
//  TaskDelegate.h
//  DelegationsAndProtocols
//
//  Created by Fabien Sanglard on 4/13/15.
//  Copyright (c) 2015 Vincent Renais. All rights reserved.
//

#import <Foundation/Foundation.h>

//#import "Task.h"
@class Task;

// Implementation of the task delegate protocol
@protocol TaskDelegate <NSObject>

// Optional simpleTask delegate method
@optional
- (void)simpleTask:(Task *)theOptionalTask;

// Required requiredTask delegate method
@required
- (void)requiredTask:(NSString *)theRequiredTask;


@end
