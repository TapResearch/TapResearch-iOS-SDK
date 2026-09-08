//
//  TRPlacementDetails.swift
//  TapResearchSDK
//
//  Created by Jeroen Verbeek on 10/6/25.
//

import Foundation

///---------------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------------
@objc public final class TRPlacementDetails : NSObject, Encodable {

	@objc public let name             : String  // name: string;
	@objc public let contentType      : String  // content_type: string;
	@objc public let currencyName     : String  // currency_name: string;
	@objc public let isSale           : Bool    // is_sale: boolean;
	@objc public let saleType         : String? // sale_type: 'sale' | 'boost' | null;
	@objc public let saleEndDate      : String? // sale_end_date: string | null;
	@objc public let saleMultiplier   : Double  // sale_multiplier: number;
	@objc public let saleDisplayName  : String? // sale_display_name: string | null
	@objc public let saleTag          : String? // sale_tag: string | null;
	@objc public let bonusBarProgress : TRBonusBarProgress?

	///---------------------------------------------------------------------------------------------
	internal init(
		name: String,
		contentType: String,
		currencyName: String,
		isSale: Bool,
		saleType: String?,
		saleEndDate: String?,
		saleMultiplier: Double,
		saleDisplayName: String?,
		saleTag: String?,
		bonusBarProgress: TRBonusBarProgress?
	) {
		self.name = name
		self.contentType = contentType
		self.currencyName = currencyName
		self.isSale = isSale
		self.saleType = saleType
		self.saleEndDate = saleEndDate
		self.saleMultiplier = saleMultiplier
		self.saleDisplayName = saleDisplayName
		self.saleTag = saleTag
		self.bonusBarProgress = bonusBarProgress
	}

}
