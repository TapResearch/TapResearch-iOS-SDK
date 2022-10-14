//
//  TRReward.h
//  TapResearchSDK
//
//  Created by Kevin Chang on 6/21/15.
//  Copyright (c) 2015 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TRReward : NSObject<NSCoding>

@property (nonatomic, strong, readonly) NSString *transactionIdentifier;
@property (nonatomic, assign, readonly) NSInteger rewardAmount;
@property (nonatomic, strong, readonly) NSString *currencyName;
@property (nonatomic, assign, readonly) NSInteger payoutEvent;
@property (nonatomic, strong, readonly) NSString *placementIdentifier;

@end
