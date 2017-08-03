//
//  RecommendationViewController.h
//  SmartShop
//
//  Created by Hollie Bradley on 6/11/15.
//  Copyright (c) 2015 Hollie Bradley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RESTWebServiceHandler.h"

@import CoreLocation;

@interface RecommendationViewController : UIViewController <RESTWebServiceHandlerDelegate, CLLocationManagerDelegate, UITableViewDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) NSMutableArray *beaconsList;

@end
