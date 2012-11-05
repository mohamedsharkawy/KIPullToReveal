//
//  PullToRevealViewController.h
//  PullToReveal
//
//  Created by Marcus Kida on 02.11.12.
//  Copyright (c) 2012 Marcus Kida. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import "PullToRevealCell.h"

@protocol PullToRevealDelegate <NSObject>

@optional
- (void) PullToRevealDidSearchFor:(NSString *)searchText;

@end

@interface PullToRevealViewController : UITableViewController

@property (nonatomic, weak) id <PullToRevealDelegate> pullToRevealDelegate;
@property (nonatomic, assign) BOOL centerUserLocation;
@property (nonatomic, retain) MKMapView *mapView;

@end


