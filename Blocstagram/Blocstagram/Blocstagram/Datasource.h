//
//  Datasource.h
//  Blocstagram
//
//  Created by Elyse Erb on 8/19/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface Datasource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)items;

@end
