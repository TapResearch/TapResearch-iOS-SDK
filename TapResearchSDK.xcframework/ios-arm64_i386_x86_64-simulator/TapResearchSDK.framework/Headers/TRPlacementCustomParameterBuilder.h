//
//  TRPlacementCustomParameterBuilder.h
//  TapResearchSDK
//
//  Created by Ilan Caspi on 1/16/20.
//  Copyright © 2020 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TRPlacementCustomParameter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TRPlacementCustomParameterBuilder : NSObject
- (instancetype)initWithPlacementCustomParameter:(TRPlacementCustomParameter *)parameter;
- (instancetype)key:(NSString *)key;
- (instancetype)value:(NSString *)value;
- (TRPlacementCustomParameter*)build;

@end

NS_ASSUME_NONNULL_END
