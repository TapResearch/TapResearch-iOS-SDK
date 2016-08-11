//
//  TapResearch.h
//  TapResearchSDK
//
//  Copyright (c) 2015 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TapResearchDelegate;

/**
 Main interface for you to communicate with the TapResearch service.
 */
@interface TapResearch : NSObject

/**
 @method: initWithApiToken:delegate:
 @abstract: Initialize TapResearch with your apiToken and callback handler.
 
 @param: apiToken Your app's unique identifier.
 @param: delegate: The class that will implement the TapResearchDelegate protocol.
 */
+ (void)initWithApiToken:(NSString *)apiToken delegate:(id<TapResearchDelegate>)delegate;

/**
 @method: isSurveyAvailable
 @abstract: Check if there is a survey available for the user.
 */
+ (BOOL)isSurveyAvailable;

/**
 @method: showSurvey
 @abstract: Takes the user into a survey.
 */
+ (void)showSurvey;

/**
 @method: setUniqueUserIdentifier
 @abstract: Store unique user identifier for re-identification purposes
 
 @param: userIdentifier: Unique user identifier. Required if you have opted for server to server postback.
 */

+ (void)setUniqueUserIdentifier:(NSString *)userIdentifier;

@end

@protocol TapResearchDelegate <NSObject>

/**
 @method: tapResearchDidReceiveRewardWithQuantity:transactionIdentifier:
 @abstract: Notifies the delegate that a user has earned an in-app reward.
 */
- (void)tapResearchDidReceiveRewardWithQuantity:(NSInteger)quantity transactionIdentifier:(NSString *)transactionIdentifier;

@end
