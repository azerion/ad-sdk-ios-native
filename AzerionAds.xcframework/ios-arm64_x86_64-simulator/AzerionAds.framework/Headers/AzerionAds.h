//
//  AzerionAds.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/7/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZASettings.h"
#import "AZADeviceInfo.h"
#import "AZAInitializtionStatus.h"
#import "AZABannerView.h"
#import "AZAInterstitialAd.h"
#import "AZARewardedAd.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^AZAAzerionAdsInitializationCompletionHandler)(AZAInitializtionStatus *_Nonnull);

@interface AzerionAds : NSObject

+ (void)initializeWithSettings:(AZASettings* _Nonnull)settings withInitializationStatusHandler:( AZAAzerionAdsInitializationCompletionHandler _Nullable)initializationStatusHandler;

+ (BOOL)isProviderInitialized:(NSString* _Nonnull)provider;

@end

NS_ASSUME_NONNULL_END
