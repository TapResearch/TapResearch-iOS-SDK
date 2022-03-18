//
//  TROffer.h
//  TapResearchSDK
//
//  Created by Kevin Chang on 5/15/17.
//  Copyright © 2017 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TROffer : NSObject<NSCoding>

@property (nonatomic, copy) NSString *offerURL;
@property (nonatomic, copy) NSString *abandonURL;
@property (nonatomic, copy) NSString *reasonComment;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, copy) NSString *currencyName;
@property (nonatomic, assign) BOOL isSurveyWallAvailable;
@property (nonatomic, assign) BOOL hasHotSurvey;
@property (nonatomic, assign) NSInteger offerReason;
@property (nonatomic, assign) NSInteger minSurveyLength;
@property (nonatomic, assign) NSInteger maxSurveyLength;
@property (nonatomic, assign) NSInteger maxPayoutInCurrency;
@property (nonatomic, assign) NSInteger minPayoutInCurrency;

- (instancetype)initWithTROfferDictionary:(NSDictionary *)dict;

@end
