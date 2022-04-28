//
//  AZAAdError.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 5/31/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define AZAAdErrorDomain @"com.azerion.ad.errorDomain"

@interface AZAAdError : NSError

+ (AZAAdError *)notInitialized;
+ (AZAAdError *)connectionError;
+ (AZAAdError *)noFill;
+ (AZAAdError *)nullContext;
+ (AZAAdError *)nullPlacementId;
+ (AZAAdError *)unknownProvider;
+ (AZAAdError *)invalidResponse;
+ (AZAAdError *)assetDownload;
+ (AZAAdError *)emptyAdData;
+ (AZAAdError *)playerError;
+ (AZAAdError *)notLoaded ;
+ (AZAAdError *)viewDestroyed;
+ (AZAAdError *)noSDKConfigFound;
+ (AZAAdError *)nullAdUnitId;
+ (AZAAdError *)noAdapterFound;
+ (AZAAdError *)noRootViewControllerFound;
+ (AZAAdError *)noConfigUrlFoundForApplicationId;

@end

NS_ASSUME_NONNULL_END
