//
//  ARCalendarManager.h
//  Anchor
//
//  Created by Austen McDonald on 1/9/17.
//  Copyright © 2017 Overlord. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BFTask;

@interface ARCalendarManager : NSObject

- (BFTask *)asyncFetchScheduleWithDate:(NSDate *)date;

@end
