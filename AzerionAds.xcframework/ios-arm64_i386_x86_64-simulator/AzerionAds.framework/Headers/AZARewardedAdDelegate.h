//
//  AZARewardedAdDelegate.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/25/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import "AZARewardedAd.h"
#import "AZARewardItem.h"
#import "AZAAdError.h"

#ifndef AZARewardedAdDelegate_h
#define AZARewardedAdDelegate_h

@class AZARewardedAd;

@protocol AZARewardedAdDelegate <NSObject>

-(void)onLoadRewardedAd:(AZARewardedAd *)ad;
-(void)onFailedToLoadRewardedAd:(AZARewardedAd *)ad withError:(AZAAdError *)error;
-(void)onDisplayedRewardedAd:(AZARewardedAd *)ad;
-(void)onFailedToDisplayRewardedAd:(AZARewardedAd *)ad withError:(AZAAdError *)error;
-(void)onDismissRewardedAd:(AZARewardedAd *)ad;
-(void)onRewardEarned:(AZARewardedAd *)ad rewardItem:(AZARewardItem *)rewardItem;

@end

#endif /* AZARewardedAdDelegate_h */
