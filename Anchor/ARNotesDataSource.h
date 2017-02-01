//
//  ARNotesDataSource.h
//  Anchor
//
//  Created by Austen McDonald on 1/30/17.
//  Copyright © 2017 Roger Huffstetler. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UITableViewController.h>

#import "ARSingleSectionDataSource.h"

@class ARNote;

@interface ARNotesDataSource : ARSingleSectionDataSource

- (instancetype)initWithNotes:(NSArray<ARNote *> *)notes;

@property (nonatomic, copy) NSArray<ARNote *> *notes;

@end