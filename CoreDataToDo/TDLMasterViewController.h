//
//  TDLMasterViewController.h
//  CoreDataToDo
//
//  Created by Jason Hellwege on 21/06/14.
//  Copyright (c) 2014 RMIT. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface TDLMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
