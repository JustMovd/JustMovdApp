//
//  ActivityFeedViewController.h
//  JustMovdApp
//
//  Created by MacBook Pro on 10/23/13.
//  Copyright (c) 2013 Kabir Mahal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "ActivityFeedCellDelegate.h"
#import "AddNewPostToActivityFeedDelegate.h"
//#import "CheckInViewController.h"


@class UpdateCellHeader;

@interface ActivityFeedViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, ActivityFeedCellDelegate, AddNewPostToActivityFeedDelegate>

@property (strong, nonatomic) UIRefreshControl *refreshControl;

- (IBAction)unwindFromCheckInVC:(UIStoryboardSegue *)unwindSegue;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *sideBarButton;


@end
