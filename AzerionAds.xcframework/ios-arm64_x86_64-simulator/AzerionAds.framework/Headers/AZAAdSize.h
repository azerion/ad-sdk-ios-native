//
//  AZAAdSize.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 3/25/22.
//  Copyright © 2022 Azerion. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>

#ifndef AZAAdSize_h
#define AZAAdSize_h

#if __has_attribute(objc_boxable)
#define AZA_BOXABLE __attribute__((objc_boxable))
#else
#error "Use latest Xcode version."
#endif

#if defined(__cplusplus)
#define AZA_EXTERN extern "C" __attribute__((visibility("default")))
#else
#define AZA_EXTERN extern __attribute__((visibility("default")))
#endif  // defined(__cplusplus)

typedef struct AZA_BOXABLE AZAAdSize AZAAdSize;

struct AZA_BOXABLE AZAAdSize {
    CGSize size;
};

/// 320x50
AZA_EXTERN AZAAdSize const kAZASizeBanner;
/// 320x100
AZA_EXTERN AZAAdSize const kAZASizeLargeBanner;
/// 300x250
AZA_EXTERN AZAAdSize const kAZASizeMediumRectangleBanner;
/// 468x60
AZA_EXTERN AZAAdSize const kAZASizeFullBanner;
///728x90
AZA_EXTERN AZAAdSize const kAZASizeLeaderboardBanner;
///// {300, 320, 468, 728} x {50, 90}
AZA_EXTERN AZAAdSize const kAZASizeSmartBanner;

AZA_EXTERN bool AZAAdSizeEqualToSize(AZAAdSize size1, AZAAdSize size2);
AZA_EXTERN CGSize CGSizeFromAZAAdSize(AZAAdSize adSize);

#endif /* AZAAdSize_h */
