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
@protocol TapResearchDisplayEventDisplayDelegate;
/**
 Main interface for you to communicate with the TapResearch service.
 */
@interface TapResearch : NSObject

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


@protocol TapResearchEventDelegate <NSObject>

@optional

/**
 @method tapResearchEventOpenedWithPlacement
 @abstract Notifies the delegate when the currency sale ad has shown.
 @param placement Placement.
 */
- (void)tapResearchEventOpenedWithPlacement:(nonnull TRPlacement *)placement;

/**
 @method tapResearchEventDismissedWithPlacement
 @abstract Notifies the delegate when the currency sale ad has been dismissed (by user).
 @param placement Placement.
 */
- (void)tapResearchEventDismissedWithPlacement:(nonnull TRPlacement *)placement;

@end
