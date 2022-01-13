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
@class TRPlacementCustomParameterList;

typedef NS_OPTIONS(NSInteger, TRPayoutType) {
    TRPayoutEventProfileComplete = 0,
    TRPayoutDidntQualify = 1,
    TRPayoutEventBonusPayout = 2,
    TRPayoutEventCampaignComplete = 3
};

@protocol TapResearchRewardDelegate;
@protocol TapResearchSurveyDelegate;
@protocol TapResearchPlacementDelegate;
/**
 Main interface for you to communicate with the TapResearch service.
 */
@interface TapResearch : NSObject

/**
 @method initWithApiToken:delegate:
 @abstract Initialize TapResearch with your apiToken and callback handler.
 
 @param apiToken Your app's unique identifier.
 @param delegate The class that will implement the TapResearchRewardsDelegate protocol.
 
 @deprecated Use [TapResearch initWithApiToken:placementParameterList:rewardDelegate:placementDelegate:] instead.
 */
+ (void)initWithApiToken:(NSString * _Nonnull)apiToken
                delegate:(id<TapResearchRewardDelegate> _Nonnull)delegate DEPRECATED_MSG_ATTRIBUTE("Deprecated from v2.3.0, will be removed in a future version.\nUse [TapResearch initWithApiToken:rewardDelegate:placementDelegate:] instead.");

/**
 @method initWithApiToken:rewardDelegate:placementDelegate:
 @abstract Initialize TapResearch with your apiToken and callback handler.

 @param apiToken Your app's unique identifier.
 @param rewardDelegate The class that will implement the TapResearchRewardsDelegate protocol.
 @param placementDelegate The class that will implement the TapResearchPlacementDelegate protocol.
 */
+ (void)initWithApiToken:(NSString * _Nonnull)apiToken
          rewardDelegate:(id<TapResearchRewardDelegate> _Nonnull)rewardDelegate
       placementDelegate:(id<TapResearchPlacementDelegate> _Nonnull)placementDelegate;

/**
 @method setUniqueUserIdentifier
 @abstract Store unique user identifier for re-identification purposes
 @param userIdentifier Unique user identifier. Required if you have opted for server to server postback.
 */
+ (void)setUniqueUserIdentifier:(nonnull NSString *)userIdentifier;

/**
 @method initPlacementWithIdentifier
 @abstract Initialize the TRPlacemnt
 
 @deprecated Implement TapResearchPlacementDelegate and use [TapResearch initWithApiToken:rewardDelegate:placementDelegate:] then use [placement showSurveyWallWithDelegate] or [placement showSurveyWallWithDelegate:customParameters:] to show the placement's surveys.
 */
+ (void)initPlacementWithIdentifier:(nonnull NSString *)placementIdentifier
                     placementBlock:(nonnull void(^)(TRPlacement * _Nonnull placement))block
DEPRECATED_MSG_ATTRIBUTE("Deprecated from v2.3.0, will be removed in a future version.\nImplement TapResearchPlacementDelegate and use [TapResearch initWithApiToken:rewardDelegate:placementDelegate:]\nthen use [placement showSurveyWallWithDelegate:customParameters:] to show the placement's surveys.");

/**
 @method initPlacementWithIdentifier
 @abstract Initialize the TRPlacemnt

 @deprecated Implement TapResearchPlacementDelegate and use [TapResearch initWithApiToken:placementCustomParameters:rewardDelegate:placementDelegate:] then use [placement showSurveyWallWithDelegate] to show the placement's surveys.
*/
+ (void)initPlacementWithIdentifier:(nonnull NSString *)placementIdentifier
          placementCustomParameters:(nullable TRPlacementCustomParameterList *)placementParameterList
                     placementBlock:(nonnull void(^)(TRPlacement * _Nonnull placement))block
DEPRECATED_MSG_ATTRIBUTE("Deprecated from v2.3.0, will be removed in a future version.\nImplement TapResearchPlacementDelegate and use [TapResearch initWithApiToken:rewardDelegate:placementDelegate:]\nthen use [placement showSurveyWallWithDelegate:customParameters:] to show the placement's surveys.");

/**
 @method setNavigationBarColor
 @abstract Set the survey wall navigation bar color
 @param color The navigation bar color
 */
+ (void)setNavigationBarColor:(nonnull UIColor *)color;

/**
 @method setNavigationBarText
 @abstract Set the survey wall navigation bar title
 @param text Navigation bar title
 */
+ (void)setNavigationBarText:(nonnull NSString *)text;

/**
 @method setNavigationBarTextColor
 @abstract Set the navigation bar text color
 @param color Navigation bar text color
 */
+ (void)setNavigationBarTextColor:(nonnull UIColor *)color;

/**
 */
+ (void)initWithApiToken:(nonnull NSString *)apiToken
     developmentPlatform:(nullable NSString *)developmentPlatform
developmentPlatformVersion:(nullable NSString *)developmentPlatformVersion
                delegate:(nullable id<TapResearchRewardDelegate>)delegate DEPRECATED_MSG_ATTRIBUTE("Deprecated from v2.3.0, will be removed in a future version. Use [TapResearch initWithApiToken:developmentPlatform:developmentPlatformVersion:rewardDelegate:placementDelegate:] instead");

/**
 */
+ (void)initWithApiToken:(nonnull NSString *)apiToken
     developmentPlatform:(nullable NSString *)developmentPlatform
developmentPlatformVersion:(nullable NSString *)developmentPlatformVersion
          rewardDelegate:(nullable id<TapResearchRewardDelegate>)rewardDelegate
       placementDelegate:(nullable id<TapResearchPlacementDelegate>)placementDelegate;

@end


@protocol TapResearchRewardDelegate <NSObject>

/**
 @method tapResearchDidReceiveRewards:
 @abstract Notifies the delegate that a user has earned an in-app reward.
 @param rewards An array containing new rewards
 */
- (void)tapResearchDidReceiveRewards:(nonnull NSArray<TRReward *>*)rewards;

@optional

/**
 @method tapResearchDidReceiveReward:
 @abstract Notifies the delegate that a user has earned an in-app reward.
 @param reward The new reward
 */
- (void)tapResearchDidReceiveReward:(nonnull TRReward *)reward DEPRECATED_MSG_ATTRIBUTE("Deprecated from v2.3.1, will be removed in a future version.");


@end


@protocol TapResearchSurveyDelegate <NSObject>

@optional

/**
 @method tapResearchSurveyModalOpened:
 @abstract Notifies the delegate when a user opens the survey modal.
 @param placement Placement identifier
 */
- (void)tapResearchSurveyWallOpenedWithPlacement:(nonnull TRPlacement *)placement;

/**
 @method tapResearchSurveyModalDismissed:
 @abstract Notifies the delegate when a user dismisses the survey modal.
 @param placement Placement identifier
 */
- (void)tapResearchSurveyWallDismissedWithPlacement:(nonnull TRPlacement *)placement;

@end


@protocol TapResearchPlacementDelegate <NSObject>

/**
 @method placementReady:
 @abstract Notifies the delegate when a placement is ready.
 @param placement TRPlacement object
 */
- (void)placementReady:(nonnull TRPlacement *)placement;

/**
 @method placementUnavailable:
 @abstract Notifies the delegate when a cached placement has expired.
 @param placementId TRPlacement's placementIdentifier
 */
- (void)placementUnavailable:(nonnull NSString *)placementId;

@end
