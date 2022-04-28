//
//  AZAInterstitialAd.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/24/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AZAInterstitialAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface AZAInterstitialAd : NSObject

@property (nonatomic, weak) id<AZAInterstitialAdDelegate> delegate;

- (instancetype)initWithVideoAdUnitId:(nonnull NSString *)videoAdUnitId withStaticAdUnitId:(NSString *)staticAdUnitId;

- (void)loadAd;
- (void)presentFromRootViewController:(nonnull UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
