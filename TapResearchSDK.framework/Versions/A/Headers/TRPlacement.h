//
//  TRPlacement.h
//  TapResearchSDK
//
//  Created by Ilan Caspi on 1/22/18.
//  Copyright © 2018 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TapResearchSDK.h"

@interface TRPlacement : NSObject

@property (nonatomic, copy, readonly) NSString *placementIdentifier;
@property (nonatomic, copy, readonly) NSString *currencyName;
@property (nonatomic, copy, readonly) NSString *placementErrorMessage;
@property (nonatomic, assign, readonly) BOOL isSurveyWallAvailable;
@property (nonatomic, assign, readonly) NSInteger placementCode;
@property (nonatomic, assign, readonly) NSInteger maxPayoutInCurrency;
@property (nonatomic, assign, readonly) NSInteger minPayoutInCurrency;
@property (nonatomic, assign, readonly) NSInteger maxSurveyLength;
@property (nonatomic, assign, readonly) NSInteger minSurveyLength;

- (void)showSurveyWallWithDelegate:(id<TapResearchSurveyDelegate>)surveyDelegate;

@end
