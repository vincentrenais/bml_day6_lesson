//
//  Task.h
//  DelegationsAndProtocols
//
//  Created by Vincent Renais on 2015-04-13.
//  Copyright (c) 2015 Vincent Renais. All rights reserved.
//

#import <Foundation/Foundation.h>

// Forward declaration of the task class
@class Task;

// Implementation of the task delegate protocol
@protocol TaskDelegate <NSObject>

// Optional simpleTask delegate method
@optional
- (void)simpleTask:(NSString *)theOptionalTask;

// Required requiredTask delegate method
@required
- (void)requiredTask:(NSString *)theRequiredTask;


@end

@interface Task : NSObject

// assign is used to hold a strong reference to the delegate object
@property (assign) id<TaskDelegate> delegate;

- (void)generateReport;

@end
