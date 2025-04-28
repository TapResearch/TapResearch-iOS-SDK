//
//  TRPlayer.h
//  TapResearchSDK
//
//  Copyright (c) 2015 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TapResearchSDK/TROffer.h>
#import <TapResearchSDK/TRPlacement.h>

@interface TRPlayer : NSObject<NSCoding>

@property (nonatomic, assign) NSInteger devicePlayerId;

- (instancetype)initWithTRPlayerDictionary:(NSDictionary *)dict;

- (NSString *)messageForKey:(NSString *)key;
+ (NSString *)idfa;

@end
