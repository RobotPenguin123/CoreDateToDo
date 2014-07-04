//
//  TDLAppDelegate.h
//  CoreDataToDo
//
//  Created by Jason Hellwege on 21/06/14.
//  Copyright (c) 2014 RMIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
