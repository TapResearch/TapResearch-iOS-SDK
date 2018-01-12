//
//  TapResearch.h
//  TapResearchSDK
//
//  Copyright (c) 2015 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIColor.h>

typedef NS_OPTIONS(NSInteger, TRPayoutType) {
    TRPayoutEventProfileComcplete=0,
    TRPayoutDidntQualify = 1,
    TRPayoutEventBonusPayout = 2,
    TRPayoutEventCampaignComplete = 3
};

@protocol TapResearchDelegate;
@protocol TapResearchSurveyDelegate;

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
 @method: isSurveyAvailable
 @abstract: Check if there is a survey available for the user.
 @param: identifier: offer identifier
 */

+ (BOOL)isSurveyAvailableForIdentifier:(NSString *)identifier;

/**
 @method: showSurvey
 @abstract: Takes the user into a survey. Shows an alert modal asking if the user would like to "cancel" or "continue".
 */
+ (void)showSurvey;

/**
 @method: showSurveyWithDelegate:
 @abstract: Takes the user into a survey. Shows an alert modal asking if the user would like to "cancel" or "continue".
 @param: delegate: notifies your app which button was selected in the alert modal.
 */
+ (void)showSurveyWithDelegate:(id<TapResearchSurveyDelegate>)delegate;

/**
 
 */
+ (void)showSurveyWithIdentifier:(NSString *)identifier delegate:(id<TapResearchSurveyDelegate>)surveyDelegate;

/**
 @method: setUniqueUserIdentifier
 @abstract: Store unique user identifier for re-identification purposes
 @param: userIdentifier: Unique user identifier. Required if you have opted for server to server postback.
 */
+ (void)setUniqueUserIdentifier:(NSString *)userIdentifier;

/**
 @method: setNavigationBarColor
 @abstract: Set the survey wall navigation bar color
 @param: color: The navigation bar color
 */
+ (void)setNavigationBarColor:(UIColor *)color;

/**
 @method: setNavigationBarText
 @abstract: Set the survey wall navigation bar title
 @param: text: Navigation bar title
 */
+ (void)setNavigationBarText:(NSString *)text;

/**
 @method: setNavigationBarTextColor
 @abstract: Set the navigation bar text color
 @param: color: Navigation bar text color
 */
+ (void)setNavigationBarTextColor:(UIColor *)color;

@end

@protocol TapResearchDelegate <NSObject>

/**
 @method: tapResearchDidReceiveRewardWithQuantity:transactionIdentifier:currenyName:payoutEvent
 @abstract: Notifies the delegate that a user has earned an in-app reward.
 
 @param: quantity: Rewards quantity
 @param: transactionIdentifier: Rewards unique transaction identifier
 @param: currencyName: Currency name, depends on the payoutEvent
 @param: payoutEvent: Payout event type
 @param: offerIdentifier: The offer identifier
 */
- (void)tapResearchDidReceiveRewardWithQuantity:(NSInteger)quantity transactionIdentifier:(NSString *)transactionIdentifier
                                   currencyName:(NSString *)currencyName payoutEvent:(NSInteger)payoutEvent offerIdentifier:(NSString *)offerIdentifier;

@optional

/**
 @method: tapResearchSurveyAvailable
 @abstract: Notifies the delegate when a survey is available.
 */
- (void)tapResearchOnSurveyAvailable;

/**
 @method: tapResearchOnSurveyAvailableWithPlacement
 @abstract: Notifies the delegate when a survey is available.
 
 @param: placement: Placement identifier
 */
- (void)tapResearchOnSurveyAvailableWithPlacement:(NSString *)placement;

/**
 @method: tapResearchOnSurveyNotAvailable
 @abstract: Notifies the delegate when a survey is not available.
 */
- (void)tapResearchOnSurveyNotAvailable;

/**
 @method: tapResearchOnSurveyNotAvailableWithPlacement
 @abstract: Notifies the delegate when a survey is not available.

 @param: placement: Placement identifier
*/
- (void)tapResearchOnSurveyNotAvailableWithPlacement:(NSString *)placement;

@end

@protocol TapResearchSurveyDelegate <NSObject>

@optional
/**
 @method: tapResearchSurveyModalOpened
 @abstract: Notifies the delegate when a user opens the survey modal.
 */
- (void)tapResearchSurveyModalOpened;

/**
 @method: tapResearchSurveyModalOpened
 @abstract: Notifies the delegate when a user opens the survey modal.
 
 @param: placement: Placement identifier
 */
- (void)tapResearchSurveyModalOpenedWithPlacement:(NSString *)placement;

/**
 @method: tapResearchSurveyModalDismissed
 @abstract: Notifies the delegate when a user dismisses the survey modal.
 */
- (void)tapResearchSurveyModalDismissed;

/**
 @method: tapResearchSurveyModalDismissed
 @abstract: Notifies the delegate when a user dismisses the survey modal.
 
 @param: placement: Placement identifier
 */
- (void)tapResearchSurveyModalDismissedWithPlacement:(NSString *)placement;

@end

