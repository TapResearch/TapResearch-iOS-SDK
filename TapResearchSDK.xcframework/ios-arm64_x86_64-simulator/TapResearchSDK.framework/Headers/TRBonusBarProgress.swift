//
//  TRBonusBarProgress.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 1/23/26.
//

import Foundation

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRBonusBarProgress : NSObject, Encodable {

	@objc public let isActive         : Bool
	@objc public let currentCompletes : Int
	@objc public let bonusWindowEndAt : String?
	@objc public let bonusTiers       : [TRBonusTier]?
	@objc public let error            : NSError?

	/// ---------------------------------------------------------------------------------------------
	internal init(isActive: Bool, currentCompletes: Int, bonusWindowEndAt: String?, bonusTiers: [TRBonusTier]?, error: NSError?) {

		self.isActive         = isActive
		self.currentCompletes = currentCompletes
		self.bonusWindowEndAt = bonusWindowEndAt
		self.bonusTiers       = bonusTiers
		self.error            = error
	}

}

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRBonusTier : NSObject, Encodable {

	@objc public let tierNumber      : Int
	@objc public let completesNeeded : Int
	@objc public let rewardAmount    : Int
	@objc public let status          : String?

	/// ---------------------------------------------------------------------------------------------
	internal init(tierNumber: Int, completesNeeded: Int, rewardAmount: Int, status: String?) {

		self.tierNumber      = tierNumber
		self.completesNeeded = completesNeeded
		self.rewardAmount    = rewardAmount
		self.status          = status
	}

}
