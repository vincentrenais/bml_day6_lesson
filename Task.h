//
//  Task.h
//  DelegationsAndProtocols
//
//  Created by Vincent Renais on 2015-04-13.
//  Copyright (c) 2015 Vincent Renais. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TaskDelegate.h"


@interface Task : NSObject

// assign is used to hold a strong reference to the delegate object
@property (assign) id<TaskDelegate> delegate;

- (void)generateReport;

@end
