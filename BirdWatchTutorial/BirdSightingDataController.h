//
//  BirdSightingDataController.h
//  BirdWatchTutorial
//
//  Created by XIAO TANG on 4/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;
@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSInteger)theIndex;
- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation;

@end
