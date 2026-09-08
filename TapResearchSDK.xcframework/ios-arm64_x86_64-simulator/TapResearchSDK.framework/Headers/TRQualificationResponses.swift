//
//  TapResearchQualificationResponses.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 8/20/26.
//

import Foundation

//MARK: - Profile answers

extension TRProfileAnswer {

	@objc public class func answer(questionId: Int, zipCode: String) -> TRProfileAnswer {
		return TRProfileAnswer(questionId: questionId, values: [zipCode])
	}

	@objc public class func answer(questionId: Int, answer: String) -> TRProfileAnswer {
		return TRProfileAnswer(questionId: questionId, values: [answer])
	}

	@objc public class func answer(questionId: Int, date: String) -> TRProfileAnswer {
		return TRProfileAnswer(questionId: questionId, values: [date])
	}

	@objc public class func answer(questionId: Int, answers: [String]) -> TRProfileAnswer {
		return TRProfileAnswer(questionId: questionId, values: answers)
	}

}

//MARK: - Profile qualifications

@objc public class TRProfileResponse: NSObject, Codable {

	@objc public let countryCode    : String
	@objc public let locale         : String
	@objc public let isProfiled     : Bool
	@objc public let qualifications : [TRProfileQuestion]
	@objc public let result         : TRProfileAnswerResult?
}

@objc public class TRProfileQuestion: NSObject, Codable {

	@objc public let questionId           : Int
	@objc public let questionText         : String
	@objc public let enTranslation        : String
	@objc public let questionSubtext      : String?
	@objc public let answerType           : String
	@objc public let qualificationAnswers : [TRProfileAnswerOption]
	@objc public let previousError        : String?
}

@objc public class TRProfileAnswerOption: NSObject, Codable {

	@objc public let optionText    : String
	@objc public let enTranslation : String
	@objc public let preCode       : String
}

@objc public class TRProfileAnswerResultError: NSObject, Codable {

	@objc public let questionId: Int
	@objc public let error: String
}

@objc public class TRProfileAnswerResult: NSObject, Codable {

	@objc public let accepted: Int
	@objc public let invalid: Int
	@objc public let errors: [TRProfileAnswerResultError]
}
