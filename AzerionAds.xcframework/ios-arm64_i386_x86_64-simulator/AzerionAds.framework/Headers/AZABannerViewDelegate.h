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

-(void)onAdLoaded:(AZABannerView *)bannerView;
-(void)onAdFailedToLoad:(AZABannerView *)bannerView withError:(AZAAdError *)error;
-(void)onAdLeftApplication:(AZABannerView *)bannerView;
-(void)onAdDisplayed:(AZABannerView *)bannerView;
-(void)onAdFailedToDisplay:(AZABannerView *)bannerView withError:(AZAAdError *)error;
-(void)onAdClosed:(AZABannerView *)bannerView;

@end
