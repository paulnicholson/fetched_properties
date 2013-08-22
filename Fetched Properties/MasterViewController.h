//
//  MasterViewController.h
//  Fetched Properties
//
//  Created by Paul Nicholson on 8/22/13.
//  Copyright (c) 2013 Refactored Tech, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
