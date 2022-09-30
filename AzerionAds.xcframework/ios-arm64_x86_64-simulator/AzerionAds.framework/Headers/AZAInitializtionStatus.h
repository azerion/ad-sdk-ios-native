//
//  AZAInitializtionStatus.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 6/7/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZAAdNetworkStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface AZAInitializtionStatus : NSObject

@property(nonatomic, retain)
    NSDictionary<NSString *, AZAAdNetworkStatus *> *adapterStatusesByClassName;

@end

NS_ASSUME_NONNULL_END
