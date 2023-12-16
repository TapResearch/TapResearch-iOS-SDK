//
//  TRAppSession.h
//  TapResearchSDK
//
//  Created by Kevin Chang on 6/15/15.
//  Copyright (c) 2015 TapResearch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TRAppSession : NSObject<NSCoding>

@property (nonatomic, assign) NSInteger appSessionID;
@property (nonatomic, assign) BOOL isValid;

- (instancetype)initWithTRAppSessionDictionary:(NSDictionary *)dict;

@end
