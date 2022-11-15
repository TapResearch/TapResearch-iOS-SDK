//
//  TRPlacement.h
//  TapResearchSDK
//
//  Created by Ilan Caspi on 1/22/18.
//  Copyright © 2018 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TapResearchSDK/TapResearchSDK.h>

#define PLACEMENT_CODE_SDK_NOT_READY -1

typedef NS_ENUM(NSUInteger, TRDisplayEventExitButtonLocation) {
	topLeft     = 1,
	topRight    = 2, // Default
	bottomLeft  = 3,
	bottomRight = 4
};

typedef NS_ENUM(NSUInteger, TRDisplayEventTransitionType) {
	coverVertical  = 1,
	flipHorizontal = 2,
	crossDissolve  = 3  // Default
};

@interface TREvent : NSObject

@property (nonatomic, strong, readonly) NSString * _Nullable event_tag;
@property (nonatomic, strong, readonly) NSString * _Nonnull event_type;
@property (nonatomic, strong, readonly) NSString * _Nonnull placement_type;
@property (nonatomic, strong, readonly) NSString * _Nonnull start_time;
@property (nonatomic, strong, readonly) NSString * _Nonnull end_time;
@property (nonatomic, strong, readonly) NSString * _Nonnull identifier;

@end


@interface TRPlacement : NSObject

@property (nonatomic, copy, readonly)    NSString  * _Nonnull placementIdentifier;
@property (nonatomic, copy, readonly)    NSString  * _Nullable currencyName;
@property (nonatomic, copy, readonly)    NSString  * _Nullable placementErrorMessage;
@property (nonatomic, assign, readonly)  BOOL      isSurveyWallAvailable;
@property (nonatomic, assign, readonly)  BOOL      hasHotSurvey;
@property (nonatomic, assign, readonly)  NSInteger placementCode;
@property (nonatomic, assign, readonly)  NSInteger maxPayoutInCurrency;
@property (nonatomic, assign, readonly)  NSInteger minPayoutInCurrency;
@property (nonatomic, assign, readonly)  NSInteger maxSurveyLength;
@property (nonatomic, assign, readonly)  NSInteger minSurveyLength;
@property (nonatomic, retain, readwrite) NSArray   * _Nullable events;

/**
 @method isEventAvailable
 @abstract Check if a placement has any events
 */
- (BOOL)isEventAvailable;

/**
 @method showSurveyWallWithDelegate
 @abstract Show a placment's surveys
 @param surveyDelegate The class that will implement the TapResearchSurveyDelegate protocol.
 */
- (void)showSurveyWallWithDelegate:(id<TapResearchSurveyDelegate> _Nullable)surveyDelegate;

/**
 @method showSurveyWallWithDelegate
 @abstract Show a placment's surveys
 @param surveyDelegate The class that will implement the TapResearchSurveyDelegate protocol.
 @param customParameters A list of custom paramaters.
 */
- (void)showSurveyWallWithDelegate:(id<TapResearchSurveyDelegate> _Nullable)surveyDelegate
				  customParameters:(TRPlacementCustomParameterList * _Nullable)customParameters;

/**
 @method displayEvent
 @abstract Show a currency sale details.
 @param event The ID of the event to display, if this is nil then the first one found will be shown.
 @param displayDelegate The class that will implement the TapResearchEventDelegate protocol.
 */
- (NSError * _Nullable)displayEvent:(NSString * _Nullable)event
				withDisplayDelegate:(id<TapResearchEventDelegate> _Nullable)displayDelegate
					 surveyDelegate:(id<TapResearchSurveyDelegate> _Nullable)surveyDelegate;

/**
 @method displayEvent
 @abstract Show a currency sale details.
 @param event The ID of the event to display, if this is nil then the first one found will be shown.
 @param displayDelegate The class that will implement the TapResearchEventDelegate protocol.
 @param closeButtonLocation The location for the close button (TRDisplayEventExitButtonLocation).
 */
- (NSError * _Nullable)displayEvent:(NSString * _Nullable)event
				withDisplayDelegate:(id<TapResearchEventDelegate> _Nullable)displayDelegate
					 surveyDelegate:(id<TapResearchSurveyDelegate> _Nullable)surveyDelegate
				closeButtonLocation:(TRDisplayEventExitButtonLocation)closeButtonLocation;

/**
 @method displayEvent
 @abstract Show a currency sale details.
 @param event The ID of the event to display, if this is nil then the first one found will be shown.
 @param displayDelegate The class that will implement the TapResearchEventDelegate protocol.
 @param customParameters A list of custom paramaters.
 */
- (NSError * _Nullable)displayEvent:(NSString * _Nullable)event
				withDisplayDelegate:(id<TapResearchEventDelegate> _Nullable)displayDelegate
					 surveyDelegate:(id<TapResearchSurveyDelegate> _Nullable)surveyDelegate
				   customParameters:(TRPlacementCustomParameterList * _Nullable)customParameters;

/**
 @method displayEvent
 @abstract Show a currency sale details.
 @param event The ID of the event to display, if this is nil then the first one found will be shown.
 @param displayDelegate The class that will implement the TapResearchEventDelegate protocol.
 @param closeButtonLocation The location for the close button (TRDisplayEventExitButtonLocation).
 @param customParameters A list of custom paramaters.
 */
- (NSError * _Nullable)displayEvent:(NSString * _Nullable)event
				withDisplayDelegate:(id<TapResearchEventDelegate> _Nullable)displayDelegate
					 surveyDelegate:(id<TapResearchSurveyDelegate> _Nullable)surveyDelegate
				closeButtonLocation:(TRDisplayEventExitButtonLocation)closeButtonLocation
				   customParameters:(TRPlacementCustomParameterList * _Nullable)customParameters;

@end


