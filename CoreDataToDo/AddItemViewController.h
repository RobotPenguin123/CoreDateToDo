//
//  AddItemViewController.h
//  CoreDataToDo
//
//  Created by Jason Hellwege on 21/06/14.
//  Copyright (c) 2014 RMIT. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ToDoItem;

@interface AddItemViewController : UIViewController
@property (strong, nonatomic) ToDoItem *addedItem;
@end
