//
//  Factbook.h
//  FunFacts
//
//  Created by Alex on 2015-01-31.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Factbook : NSObject

@property (strong, nonatomic) NSArray *facts;

-(NSString *)randomFact;

@end
