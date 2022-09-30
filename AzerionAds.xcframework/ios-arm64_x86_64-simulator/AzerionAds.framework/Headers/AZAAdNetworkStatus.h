//
//  AZAAdNetworkStatus.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/4/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AZAInitializationState) {
    AZAInitializationStateNotReady = 0,
    AZAInitializationStateReady = 1
};

@interface AZAAdNetworkStatus : NSObject

@property (nonatomic, retain) NSString *adProvider;
@property (nonatomic, retain) NSString *networkDescription;
@property (nonatomic, assign) AZAInitializationState state;

- (instancetype)initWithAdProvider:(NSString *)provider withState:(AZAInitializationState)state withDescription:(NSString *)description;

@end

NS_ASSUME_NONNULL_END
