//
//  ColorWheel.h
//  FunFacts
//
//  Created by Benedict Aluan on 25/08/15.
//  Copyright (c) 2015 Pencil Rocket. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property(strong, nonatomic) NSArray *colors;

- (UIColor *)getRandomColor;

@end
