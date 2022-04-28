//
//  AZABannerViewDelegate.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/21/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZABannerView.h"
#import "AZAAdError.h"

@class AZABannerView;

@protocol AZABannerViewDelegate <NSObject>

- (void)bannerViewDidReceiveAd:(AZABannerView *)bannerView;
- (void)bannerView:(AZABannerView *)bannerView didFailToReceiveAdWithError:(AZAAdError *)error;
- (void)bannerViewDidRecordImpression:(AZABannerView *)bannerView;
- (void)bannerViewDidLeftApplication:(AZABannerView *)bannerView ;
- (void)didOpenedBannerView:(AZABannerView *)bannerView;

@end
