//
//  TRGrantBoostResponse.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 10/14/25.
//

import Foundation

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRGrantBoostResponse : NSObject, Encodable {

	@objc public let boostTag : String
	@objc public let success  : Bool
	@objc public let error    : NSError?

	///---------------------------------------------------------------------------------------------
	internal init(boostTag: String, success: Bool, error: NSError?) {
		self.boostTag = boostTag
		self.success = success
		self.error = error
	}

}
