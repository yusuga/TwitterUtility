//
//  ViewController.m
//  TwitterUtilityDevelop
//
//  Created by Yu Sugawara on 2016/03/17.
//  Copyright © 2016年 Yu Sugawara. All rights reserved.
//

#import "ViewController.h"
#import "TwitterUtility.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    for (NSString *code in [TwitterUtility availableSearchTwitterISO639_1Codes]) {
        NSLog(@"%@ - %@", code, [[NSLocale currentLocale] displayNameForKey:NSLocaleLanguageCode value:code]);
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
