//
//  ToDoList.h
//  CoreDataToDo
//
//  Created by Jason Hellwege on 21/06/14.
//  Copyright (c) 2014 RMIT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ToDoList : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *items;
@end

@interface ToDoList (CoreDataGeneratedAccessors)

- (void)addItemsObject:(NSManagedObject *)value;
- (void)removeItemsObject:(NSManagedObject *)value;
- (void)addItems:(NSSet *)values;
- (void)removeItems:(NSSet *)values;

@end
