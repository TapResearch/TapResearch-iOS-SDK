//
//  TROffer.h
//  TapResearchSDK
//
//  Created by Kevin Chang on 5/15/17.
//  Copyright © 2017 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TROfferEventImage : NSObject

@property (nonatomic, strong) NSString *url;                   // "https://res.cloudinary.com/tapresearch/image/fetch/f_auto,q_auto/https://cdn.tapresearch.com/assets/home/carousel-1-3ba03d5fc0425ede5224b727032df9de7bc95f24fddfe64427c9c7fb1a486f07.png",
@property (nonatomic, strong) NSString *platform;              // "ios",
@property (nonatomic, strong) NSString *orientation;           // "portrait",

@end

@interface TROfferEvent : NSObject
	
@property (nonatomic, strong) NSNumber *event_id;              // 2,
@property (nonatomic, strong) NSString *event_tag;             // "currency_sale",
@property (nonatomic, strong) NSString *event_type;            // "currency_sale",
@property (nonatomic, strong) NSString *placement_type;        // "full_screen",
@property (nonatomic, strong) NSString *start_time;            // "2022-08-20T15:00:00.000Z",
@property (nonatomic, strong) NSString *end_time;              // "2022-09-05T16:16:01.000Z",
@property (nonatomic, strong) NSString *identifier;            // "59ee7b6c5ead4639476c09d39de36ede",
@property (nonatomic, strong) NSString *title;                 // nil,
@property (nonatomic, strong) NSString *title_text_color;      // nil,
@property (nonatomic, strong) NSString *body;                  // nil,
@property (nonatomic, strong) NSString *body_text_color;       // nil,
@property (nonatomic, strong) NSString *cta_button_text;       // nil,
@property (nonatomic, strong) NSString *cta_button_text_color; // nil,
@property (nonatomic, strong) NSString *cta_button_color;      // nil,
@property (nonatomic, strong) NSString *cta_button_location;   // nil,
@property (nonatomic, strong) NSString *link_url;              // nil,
@property (nonatomic, strong) NSArray  *images;                // [TROfferDisplayEventImage]

@end

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
@property (nonatomic, copy) NSArray *displayEvents;

- (instancetype)initWithTROfferDictionary:(NSDictionary *)dict;

@end
