//
//  CodingKeys.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 10/28/25.
//

import Foundation

extension NSError: @retroactive Encodable {}
extension NSError {

	enum CodingKeys: String, CodingKey {
		case errorCode
		case message
	}

	///---------------------------------------------------------------------------------------------
	public func encode(to encoder: any Encoder) throws {

		var container = encoder.container(keyedBy: CodingKeys.self)
		
		try container.encode(self.code, forKey: .errorCode)
		try container.encode(self.localizedDescription, forKey: .message)
	}

}
