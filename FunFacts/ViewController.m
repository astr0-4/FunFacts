//
//  ViewController.m
//  FunFacts
//
//  Created by Alex on 2015-01-29.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#import "ViewController.h"
#import "Factbook.h"
#import "ColourWheel.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.factbook = [[Factbook alloc] init];
    self.colourWheel = [[ColourWheel alloc] init];
    
    UIColor *randomColor = [self.colourWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
    self.funFactLabel.text = [self.factbook randomFact];
    
    self.funFactLabel.numberOfLines = 0;
    
    self.funFactLabel.lineBreakMode = NSLineBreakByWordWrapping;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact {
     UIColor *randomColor = [self.colourWheel randomColor];
     self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
     self.funFactLabel.text = [self.factbook randomFact];
    
    
}

@end
