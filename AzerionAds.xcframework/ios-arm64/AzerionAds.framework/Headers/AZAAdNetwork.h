//
//  AZAAdNetwork.h
//  AzerionAds
//
//  Created by Nagib Bin Azad on 5/31/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AZAAdNetwork : NSObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, assign) BOOL isThirdParty;
@property (nonatomic, assign) NSInteger networkId;

@end

NS_ASSUME_NONNULL_END
