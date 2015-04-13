//
//  ViewController.h
//  DelegationsAndProtocols
//
//  Created by Vincent Renais on 2015-04-13.
//  Copyright (c) 2015 Vincent Renais. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"


@interface ViewController : UIViewController<TaskDelegate>

@property (strong) NSString *name;
@property (strong) NSMutableArray *lisOfTasks;


@end