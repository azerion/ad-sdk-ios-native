//
//  AZAInterstitialAdDelegate.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/24/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import "AZAInterstitialAd.h"
#import "AZAAdError.h"

#ifndef AZAInterstitialAdDelegate_h
#define AZAInterstitialAdDelegate_h

@class AZAInterstitialAd;

@protocol AZAInterstitialAdDelegate <NSObject>

-(void)onLoadAd:(AZAInterstitialAd *)ad;
-(void)onFailedToLoadAd:(AZAInterstitialAd *)ad withError:(AZAAdError *)error;
-(void)onClickedAd:(AZAInterstitialAd *)ad;
-(void)onDisplayedAd:(AZAInterstitialAd *)ad;
-(void)onFailedToDisplayAd:(AZAInterstitialAd *)ad withError:(AZAAdError *)error;
-(void)onAdImpression:(AZAInterstitialAd *)ad;
-(void)onClosedAd:(AZAInterstitialAd *)ad;

@end

#endif /* AZAInterstitialAdDelegate_h */
