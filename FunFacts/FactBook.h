//
//  FactBook.h
//  FunFacts
//
//  Created by Benedict Aluan on 25/08/15.
//  Copyright (c) 2015 Pencil Rocket. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)getRandomFact;

@end
