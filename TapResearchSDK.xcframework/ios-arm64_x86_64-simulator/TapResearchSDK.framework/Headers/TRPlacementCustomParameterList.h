//
//  TRPlacementCustomParameterList.h
//  TapResearchSDK
//
//  Created by Ilan Caspi on 1/17/20.
//  Copyright © 2020 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TapResearchSDK/TRPlacementCustomParameter.h>

NS_ASSUME_NONNULL_BEGIN

@interface TRPlacementCustomParameterList : NSObject

- (BOOL)addParameter:(TRPlacementCustomParameter *)customParameter;
- (NSMutableDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END
