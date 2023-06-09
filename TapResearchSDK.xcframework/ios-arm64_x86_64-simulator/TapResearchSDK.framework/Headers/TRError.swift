//
//  TRError.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 3/10/23.
//

import Foundation

///---------------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------------
@objc public final class TRError: NSError {

	@objc public static let TapResearcherrorDomain: String = "TapResearchSDK"
	@objc public static let TapResearchErrorCode: String = "TapResearchCode"
	@objc public static let TapResearchErrorCodeString: String = "TapResearchCodeString"

	///---------------------------------------------------------------------------------------------
	required init?(coder: NSCoder) {
		super.init(coder: coder)
	}

	///---------------------------------------------------------------------------------------------
	init(errorDescription: String, code: Int, codeString: String) {

		let userInfoDict: [String:Any] = [
			NSLocalizedDescriptionKey : errorDescription,
			TRError.TapResearchErrorCode: code,
			TRError.TapResearchErrorCodeString: codeString,
		]
		super.init(domain: TRError.TapResearcherrorDomain, code: code, userInfo: userInfoDict)
	}

}
