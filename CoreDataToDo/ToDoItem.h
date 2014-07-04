//
//  ToDoItem.h
//  CoreDataToDo
//
//  Created by Jason Hellwege on 21/06/14.
//  Copyright (c) 2014 RMIT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ToDoList;

@interface ToDoItem : NSManagedObject

@property (nonatomic, retain) NSString * task;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) ToDoList *list;

@end
