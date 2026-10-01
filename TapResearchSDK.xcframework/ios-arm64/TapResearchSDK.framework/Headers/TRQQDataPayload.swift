//
//  TRQQDataPayload.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 11/13/23.
//

import Foundation

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRQQDataPayload :  NSObject, Codable {

	@objc public let survey_identifier : String
	@objc public let app_name          : String
	@objc public let api_token         : String
	@objc public let sdk_version       : String
	@objc public let platform          : String
	@objc public let placement_tag     : String
	@objc public let user_identifier   : String
	@objc public let user_locale       : String
	@objc public let seen_at           : String
	@objc public let questions         : [TRQQDataPayloadQuestion]
	@objc public let target_audience   : [TRQQDataPayloadTargetFilter]?
	@objc public let complete          : TRQQComplete?

	/// ---------------------------------------------------------------------------------------------
	init(survey_identifier: String,
		 app_name: String,
		 api_token: String,
		 sdk_version: String,
		 platform: String,
		 placement_tag: String,
		 user_identifier: String,
		 user_locale: String,
		 seen_at: String,
		 questions: [TRQQDataPayloadQuestion],
		 target_audience: [TRQQDataPayloadTargetFilter]?,
		 complete: TRQQComplete?)
	{

		self.survey_identifier = survey_identifier
		self.app_name = app_name
		self.api_token = api_token
		self.sdk_version = sdk_version
		self.platform = platform
		self.placement_tag = placement_tag
		self.user_identifier = user_identifier
		self.user_locale = user_locale
		self.seen_at = seen_at
		self.questions = questions
		self.target_audience = target_audience
		self.complete = complete
	}

	enum CodingKeys: String, CodingKey {
		case survey_identifier
		case app_name
		case api_token
		case sdk_version
		case platform
		case placement_tag
		case user_identifier
		case user_locale
		case seen_at
		case questions
		case target_audience
		case complete
	}

	/// ---------------------------------------------------------------------------------------------
	required public init(from decoder: Decoder) throws {
		//print("[-DECODE] TRQQDataPayload")
		let values = try decoder.container(keyedBy: CodingKeys.self)

		survey_identifier = try values.decode(String.self                         , forKey: .survey_identifier )
		app_name          = try values.decode(String.self                         , forKey: .app_name          )
		api_token         = try values.decode(String.self                         , forKey: .api_token         )
		sdk_version       = try values.decode(String.self                         , forKey: .sdk_version       )
		platform          = try values.decode(String.self                         , forKey: .platform          )
		placement_tag     = try values.decode(String.self                         , forKey: .placement_tag     )
		user_identifier   = try values.decode(String.self                         , forKey: .user_identifier   )
		user_locale       = try values.decode(String.self                         , forKey: .user_locale       )
		seen_at           = try values.decode(String.self                         , forKey: .seen_at           )
		questions         = try values.decode([TRQQDataPayloadQuestion].self      , forKey: .questions         )
		target_audience   = try values.decode([TRQQDataPayloadTargetFilter]?.self , forKey: .target_audience   )
		complete          = try values.decode(TRQQComplete?.self                  , forKey: .complete          )
	}

	/// ---------------------------------------------------------------------------------------------
	public func encode(to encoder: Encoder) throws {
		//print("[-ENCODE] TRQQDataPayload")
		var container = encoder.container(keyedBy: CodingKeys.self)

		try container.encode(survey_identifier , forKey: .survey_identifier )
		try container.encode(app_name          , forKey: .app_name          )
		try container.encode(api_token         , forKey: .api_token         )
		try container.encode(sdk_version       , forKey: .sdk_version       )
		try container.encode(platform          , forKey: .platform          )
		try container.encode(placement_tag     , forKey: .placement_tag     )
		try container.encode(user_identifier   , forKey: .user_identifier   )
		try container.encode(user_locale       , forKey: .user_locale       )
		try container.encode(seen_at           , forKey: .seen_at           )
		try container.encode(questions         , forKey: .questions         )
		try container.encode(target_audience   , forKey: .target_audience   )
		try container.encode(complete          , forKey: .complete          )
	}

}

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRQQComplete : NSObject, Codable {

	@objc public let complete_identifier : String
	@objc public let completed_at        : String

	/// ---------------------------------------------------------------------------------------------
	init(complete_identifier: String, completed_at: String) {
	
		self.complete_identifier = complete_identifier
		self.completed_at = completed_at
	}

	enum CodingKeys: String, CodingKey {
		case complete_identifier
		case completed_at
	}

	/// ---------------------------------------------------------------------------------------------
	required public init(from decoder: Decoder) throws {
		//print("[-DECODE] TRQQComplete")
		let values = try decoder.container(keyedBy: CodingKeys.self)

		complete_identifier = try values.decode(String.self , forKey: .complete_identifier )
		completed_at        = try values.decode(String.self , forKey: .completed_at        )
	}

	/// ---------------------------------------------------------------------------------------------
	public func encode(to encoder: Encoder) throws {
		//print("[-ENCODE] TRQQComplete")
		var container = encoder.container(keyedBy: CodingKeys.self)

		try container.encode(complete_identifier, forKey: .complete_identifier)
		try container.encode(completed_at, forKey: .completed_at)
	}

}

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRQQUserAnswer :  NSObject, Codable {

	@objc public let value: String
	@objc public let identifiers: [String]

	/// ---------------------------------------------------------------------------------------------
	init(value: String, identifiers: [String]) {
		self.value = value
		self.identifiers = identifiers
	}

	enum CodingKeys: String, CodingKey {
		case value
		case identifiers
	}

	/// ---------------------------------------------------------------------------------------------
	required public init(from decoder: Decoder) throws {
		//print("[-DECODE] TRQQUserAnswer")
		let values = try decoder.container(keyedBy: CodingKeys.self)

		value       = try values.decode(String.self   , forKey: .value)
		identifiers = try values.decode([String].self , forKey: .identifiers)
	}

	/// ---------------------------------------------------------------------------------------------
	public func encode(to encoder: Encoder) throws {
		//print("[-ENCODE] TRQQUserAnswer")
		var container = encoder.container(keyedBy: CodingKeys.self)

		try container.encode(value, forKey: .value)
		try container.encode(identifiers, forKey: .identifiers)
	}

}

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRQQDataPayloadQuestion : NSObject, Codable {

	@objc public let question_identifier : String
	@objc public let question_text       : String
	@objc public let question_type       : String
	@objc public var rating_scale_size   : Int = 0
	@objc public let user_answer         : TRQQUserAnswer?

	/// ---------------------------------------------------------------------------------------------
	init(question_identifier: String, question_text: String, question_type: String, rating_scale_size: Int, user_answer: TRQQUserAnswer?) {

		self.question_identifier = question_identifier
		self.question_text = question_text
		self.question_type = question_type
		self.rating_scale_size = rating_scale_size
		self.user_answer = user_answer
	}

	enum CodingKeys: String, CodingKey {
		case question_identifier //
		case question_text       //
		case question_type       //
		case rating_scale_size   //
		case user_answer         //
	}

	/// ---------------------------------------------------------------------------------------------
	required public init(from decoder: Decoder) throws {
		//print("[-DECODE] TRQQDataPayloadQuestion")
		let values = try decoder.container(keyedBy: CodingKeys.self)

		question_identifier = try values.decode(String.self          , forKey: .question_identifier )
		question_text       = try values.decode(String.self          , forKey: .question_text       )
		question_type       = try values.decode(String.self          , forKey: .question_type       )
		rating_scale_size   = try values.decodeIfPresent(Int.self    , forKey: .rating_scale_size   ) ?? 0
		user_answer         = try values.decode(TRQQUserAnswer?.self , forKey: .user_answer         )
	}

	/// ---------------------------------------------------------------------------------------------
	public func encode(to encoder: Encoder) throws {
		//print("[-ENCODE] TRQQDataPayloadQuestion")
		var container = encoder.container(keyedBy: CodingKeys.self)

		try container.encode(question_identifier , forKey: .question_identifier )
		try container.encode(question_text       , forKey: .question_text       )
		try container.encode(question_type       , forKey: .question_type       )
		try container.encode(rating_scale_size   , forKey: .rating_scale_size   )
		try container.encode(user_answer         , forKey: .user_answer         )
	}

}

/// ---------------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------------
@objc public final class TRQQDataPayloadTargetFilter :  NSObject, Codable {

	@objc public let filter_attribute_name : String
	@objc public let filter_operator       : String
	@objc public let filter_value          : String
	@objc public let user_value            : String

	/// ---------------------------------------------------------------------------------------------
	init(filter_attribute_name: String, filter_operator: String, filter_value: String, user_value: String) {

		self.filter_attribute_name = filter_attribute_name
		self.filter_operator = filter_operator
		self.filter_value = filter_value
		self.user_value = user_value
	}

	enum CodingKeys: String, CodingKey {
		case filter_attribute_name //
		case filter_operator       //
		case filter_value          //
		case user_value            //
	}

	/// ---------------------------------------------------------------------------------------------
	required public init(from decoder: Decoder) throws {
		//print("[-DECODE] TRQQDataPayloadTargetFilter")
		let values = try decoder.container(keyedBy: CodingKeys.self)

		filter_attribute_name = try values.decode(String.self , forKey: .filter_attribute_name )
		filter_operator       = try values.decode(String.self , forKey: .filter_operator       )
		filter_value          = try values.decode(String.self , forKey: .filter_value          )
		user_value            = try values.decode(String.self , forKey: .user_value            )
	}

	/// ---------------------------------------------------------------------------------------------
	public func encode(to encoder: Encoder) throws {
		//print("[-ENCODE] TRQQDataPayloadTargetFilter")
		var container = encoder.container(keyedBy: CodingKeys.self)

		try container.encode(filter_attribute_name , forKey: .filter_attribute_name )
		try container.encode(filter_operator , forKey: .filter_operator )
		try container.encode(filter_value , forKey: .filter_value )
		try container.encode(user_value , forKey: .user_value )
	}

}
