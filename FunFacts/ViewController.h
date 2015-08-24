//
//  ViewController.h
//  FunFacts
//
//  Created by Benedict Aluan on 25/08/15.
//  Copyright (c) 2015 Pencil Rocket. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;

@end

