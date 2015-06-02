//
//  ColourWheel.h
//  FunFacts
//
//  Created by Alex on 2015-02-01.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface ColourWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
