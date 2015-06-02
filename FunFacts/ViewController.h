//
//  ViewController.h
//  FunFacts
//
//  Created by Alex on 2015-01-29.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Factbook;

@class ColourWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) Factbook *factbook;

@property (strong, nonatomic) ColourWheel *colourWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end
