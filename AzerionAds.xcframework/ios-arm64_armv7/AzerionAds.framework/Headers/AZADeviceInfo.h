//
//  AZADeviceInfo.h
//  AzerionAds
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AZADeviceInfo : NSObject

+ (instancetype)sharedInstance;

//vars
@property(nonatomic, strong) NSString *idfa;
@property(assign, nonatomic) float deviceWidth;
@property(assign, nonatomic) float deviceHeight;
@property(nonatomic, strong) NSString *bundleId;
@property(assign, nonatomic) float deviceDensity;
@property(nonatomic, strong) NSString *osVersion;
@property(nonatomic, strong) NSString *deviceModel;
@property(nonatomic, strong) NSString *deviceHardwareVersion;
@property(assign, nonatomic) int deviceType;
@property(nonatomic, strong) NSString *carrier;
@property(nonatomic, strong) NSString *connectionSpeed;
@property(assign, nonatomic) int lmtGdpr;

//funcs
-(NSString*)retrieveIDFA;
-(float)retrieveDeviceWidth;
-(float)retrieveDeviceHeight;
-(NSString*)retrieveBundleId;
-(float)retrieveDeviceDensity;
-(NSString *)retrieveDeviceOsVersion;
-(NSString*)retrieveDeviceModel;
-(NSString*)retrieveDeviceHardwareVersion;
-(int)retrieveDeviceType;
-(NSString*)retrieveCarrier;
-(NSString*)retrieveConnectionSpeed;
-(int)retrieveLmtGdpr;

+(UIViewController*)absoluteTopMostController;

@end

