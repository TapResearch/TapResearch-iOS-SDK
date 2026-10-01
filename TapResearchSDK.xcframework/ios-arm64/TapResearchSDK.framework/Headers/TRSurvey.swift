//
//  TRSurvey.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 2024-08-27
//

import Foundation

///---------------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------------
@objc public final class TRSurvey : NSObject, Codable {

	@objc public let surveyIdentifier    : String
	@objc public let lengthInMinutes     : Int
	@objc public let rewardAmount        : Double
	@objc public let currencyName        : String
	@objc public let isHotTile           : Bool
	@objc public let isSale              : Bool
	@objc public let saleMultiplier      : Double
	@objc public let preSaleRewardAmount : Double
	@objc public let saleEndDate         : String?
	@objc public let category            : String?
}
