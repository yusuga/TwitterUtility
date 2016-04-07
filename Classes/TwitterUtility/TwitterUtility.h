//
//  TwitterUtility.h
//  TwitterUtilityDevelop
//
//  Created by Yu Sugawara on 2016/03/17.
//  Copyright © 2016年 Yu Sugawara. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TwitterUtility : NSObject

/**
 *  List of ISO 639-1 codes
 *  https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes
 *
 *  Twitter - Advanced Search
 *  https://twitter.com/search-advanced?lang=en
 */
+ (NSArray<NSString *> *)availableSearchTwitterISO639_1Codes;

/**
 *  https://dev.twitter.com/rest/reference/get/trends/available
 */
+ (NSDictionary *)trendDeviceLocation;
+ (NSDictionary *)trendWorldwideLocation;

@end
