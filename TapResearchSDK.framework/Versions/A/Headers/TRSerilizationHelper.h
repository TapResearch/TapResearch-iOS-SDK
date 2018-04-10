//
//  TRSerilizationHelper.h
//  TapResearchSDK
//
//  Created by Ilan Caspi on 3/5/18.
//  Copyright © 2018 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TRSerilizationHelper : NSObject

+ (NSDictionary *) dictionaryWithPropertiesOfObject:(id)obj;
+ (NSString *)jsonStringFromDictionary:(NSDictionary *)dictionary;

@end
