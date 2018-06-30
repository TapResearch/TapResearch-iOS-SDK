//
//  TapResearch.h
//  TapResearchSDK
//
//  Copyright (c) 2015 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIColor.h>

@class TRPlacement;
@class TRReward;

typedef NS_OPTIONS(NSInteger, TRPayoutType) {
    TRPayoutEventProfileComplete = 0,
    TRPayoutDidntQualify = 1,
    TRPayoutEventBonusPayout = 2,
    TRPayoutEventCampaignComplete = 3
};

@protocol TapResearchRewardDelegate;
@protocol TapResearchSurveyDelegate;

/**
 Main interface for you to communicate with the TapResearch service.
 */
@interface TapResearch : NSObject

/**
 @method initWithApiToken:delegate:
 @abstract Initialize TapResearch with your apiToken and callback handler.

 @param apiToken Your app's unique identifier.
 @param delegate The class that will implement the TapResearchRewardsDelegate protocol.
 */
+ (void)initWithApiToken:(NSString *)apiToken delegate:(id<TapResearchRewardDelegate>)delegate;

/**
 @method setUniqueUserIdentifier
 @abstract Store unique user identifier for re-identification purposes
 @param userIdentifier Unique user identifier. Required if you have opted for server to server postback.
 */
+ (void)setUniqueUserIdentifier:(NSString *)userIdentifier;

/**
 @method initPlacementWithIdentifier
 @abstract Initialize the TRPlacemnt
*/
+ (void)initPlacementWithIdentifier:(NSString *)placementIdentifier placementBlock:(void(^)(TRPlacement *placement))block;
/**
 @method setNavigationBarColor
 @abstract Set the survey wall navigation bar color
 @param color The navigation bar color
 */
+ (void)setNavigationBarColor:(UIColor *)color;

/**
 @method setNavigationBarText
 @abstract Set the survey wall navigation bar title
 @param text Navigation bar title
 */
+ (void)setNavigationBarText:(NSString *)text;

/**
 @method setNavigationBarTextColor
 @abstract Set the navigation bar text color
 @param color Navigation bar text color
 */
+ (void)setNavigationBarTextColor:(UIColor *)color;

+ (void)initWithApiToken:(NSString *)apiToken developmentPlatform:(NSString *)developmentPlatform developmentPlatformVersion:(NSString *)developmentPlatformVersion delegate:(id<TapResearchRewardDelegate>)delegate;

@end

@protocol TapResearchRewardDelegate <NSObject>

/**
 @method tapResearchDidReceiveRewardWithQuantity:transactionIdentifier:currenyName:payoutEvent
 @abstract Notifies the delegate that a user has earned an in-app reward.
 @param reward The new reward
 */
- (void)tapResearchDidReceiveReward:(TRReward *)reward;

@end

@protocol TapResearchSurveyDelegate <NSObject>

@optional

/**
 @method tapResearchSurveyModalOpened
 @abstract Notifies the delegate when a user opens the survey modal.
 @param placement Placement identifier
 */
- (void)tapResearchSurveyWallOpenedWithPlacement:(TRPlacement *)placement;

/**
 @method tapResearchSurveyModalDismissed
 @abstract Notifies the delegate when a user dismisses the survey modal.
 @param placement Placement identifier
 */
- (void)tapResearchSurveyWallDismissedWithPlacement:(TRPlacement *)placement;


@end

