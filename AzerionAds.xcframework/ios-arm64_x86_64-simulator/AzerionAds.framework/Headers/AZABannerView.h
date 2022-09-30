//
//  AZABannerView.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/17/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import "AZAAdSize.h"
#import <UIKit/UIKit.h>
#import "AZABannerViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface AZABannerView : UIView

@property (nonatomic, weak) id<AZABannerViewDelegate> delegate;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic, retain) NSString *adUnitId;
@property (nonatomic, assign) AZAAdSize adSize;

- (instancetype)initWithAdSize:(AZAAdSize)adSize;

- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
