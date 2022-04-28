//
//  AZARewardedAd.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/25/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AZARewardedAdDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface AZARewardedAd : NSObject

@property (nonatomic, weak) id<AZARewardedAdDelegate> delegate;

- (instancetype)initWithAdUnitId:(nonnull NSString *)adUnitId delegate:(id<AZARewardedAdDelegate>)delegate;

- (void)loadAd;
- (void)presentFromRootViewController:(nonnull UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
