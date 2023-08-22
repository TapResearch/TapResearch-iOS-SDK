//
//  TRReward.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 3/1/23.
//

import Foundation

///---------------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------------
@objc public final class TRReward : NSObject, Codable {

	@objc public let transactionIdentifier : String?
	@objc public let placementTag          : String?
	@objc public let placementIdentifier   : String?
	@objc public let currencyName          : String?
	@objc public let payoutEvent           : String?
	@objc public let rewardAmount          : Int

	///---------------------------------------------------------------------------------------------
	init( transactionIdentifier: String?, placementTag: String?, placementIdentifier: String?, currencyName: String?, payoutEvent: String?, rewardAmount: Int) {

		self.transactionIdentifier = transactionIdentifier
		self.placementTag          = placementTag
		self.placementIdentifier   = placementIdentifier
		self.currencyName          = currencyName
		self.payoutEvent           = payoutEvent
		self.rewardAmount          = rewardAmount
	}

}
