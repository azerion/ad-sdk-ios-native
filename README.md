# AzerionAds SDK
AzerionAds SDK has been designed to give developers options for showing Ads from `ImproveDigital` and `AdMob`. Developer can choose the priorities between ad networks and set the ad unit ids from configuration file.
# Integration of Azerion Ads SDK

## Automatic integration
### CocoaPods
CocoaPods is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate AzerionAds into your Xcode project using CocoaPods, specify it in your Podfile:
```
pod 'AzerionAds'
```
To build AzerionAds on the simulator, please add this in your Podfile:
```
post_install do |installer|
     installer.pods_project.targets.each do |target|
         target.build_configurations.each do |config|
             config.build_settings["EXCLUDED_ARCHS[sdk=iphonesimulator*]"] = "arm64"
         end
     end
 end
```
## Manual integration
Drag and drop the `AzerionAds.framework` and `AzerionAdsResources.bundle` file in your xcode project. Add `AzerionAds.framework` as a Embeded framework. If you want to show AdMob ads then you need to integrate AdMob frameworks also. You can do that either by adding the frameworks manually or by using cocoapods. You will found complete instructions of adding AdMob here:
[AdMob integration in xcode project](https://developers.google.com/admob/ios/quick-start)

## Initialize AzerionAds SDK
App developer should get the user consent for EU ePrivacy Directive and the General Data Protection Regulation (GDPR).
```objective-c
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    AZASettings *settings = [[AZASettings alloc] init];
    settings.withUserConsent = true;
    settings.isCOPPACompliant = true;
    settings.gdprConsentString = @"GdprConsentString";
    [AzerionAds initializeWithSettings:settings withInitializationStatusHandler:^(AZAInitializtionStatus * _Nonnull status) {
        
    }];
    return YES;
}
```
---
**NOTE** 
You can load ad after successfull initialization.
---
## Banner Ad
### Using Storyboard
Add an UIView as a subview and assign `AZABannerView` as class of that view from Identity Inspector. Add outlet for the banner view
```objective-c
@property (retain, nonatomic) IBOutlet AZABannerView *bannerView;
```
```objective-c
    self.bannerView.adUnitId = @"YOUR_BANNER_AD_UNIT_ID_HERE"
    self.bannerView.rootViewController = self;
    self.bannerView.delegate = self;
```
### Programmatically
```objective-c
    self.bannerView = [[AZABannerView alloc] initWithAdSize:BannerAdSize.FullBanner origin:CGPointMake(0, 0)];
    self.bannerView.adUnitId = @"YOUR_BANNER_AD_UNIT_ID_HERE"
    self.bannerView.rootViewController = self;
    self.bannerView.delegate = self;
```
 - Load Banner Ad
 ```Java
 bannerAdView.loadAd();
 ```
  - Destroy : when you longer needed the BannerAdView it's better to destroy it for avoding memory leak.
```Java
bannerAdView.destroy();
```
Implement AZABannerViewDelegate delegates
```objective-c
- (void)bannerViewDidReceiveAd:(AZABannerView *)bannerView {
    
}
- (void)bannerView:(AZABannerView *)bannerView didFailToReceiveAdWithError:(AZAAdError *)error {
    
}
- (void)bannerViewDidRecordImpression:(AZABannerView *)bannerView {
    
}

- (void)bannerViewDidLeftApplication:(AZABannerView *)bannerView {
    
}

- (void)didOpenedBannerView:(AZABannerView *)bannerView {
    
}
```
Load Banner Ad
```objective-c
[self.bannerView loadAd];
```
## Interstitial Ad
```objective-c
self.interstitialAd = [[AZAInterstitialAd alloc] initWithVideoAdUnitId:@"YOUR_INTERSTITIAL_VIDEO_AD_UNIT_ID_HERE" withStaticAdUnitId:@"YOUR_INTERSTITIAL_STATIC_AD_UNIT_ID_HERE"];
self.interstitialAd.delegate = self;
```
Implement AZAInterstitialAdDelegate delegates
```objective-c
-(void)onLoadAd:(AZAInterstitialAd *)ad {

}
-(void)onFailedToLoadAd:(AZAInterstitialAd *)ad withError:(AZAAdError *)error {

}
-(void)onClickedAd:(AZAInterstitialAd *)ad {

}
-(void)onDisplayedAd:(AZAInterstitialAd *)ad {

}
-(void)onFailedToDisplayAd:(AZAInterstitialAd *)ad withError:(AZAAdError *)error {

}
-(void)onAdImpression:(AZAInterstitialAd *)ad {

}
-(void)onClosedAd:(AZAInterstitialAd *)ad {

}
```
Load interstitial ad
```objective-c
[self.interstitialAd loadAd];
```
Show interstitial ad
```objective-c
[self.interstitialAd presentFromRootViewController:viewController];
```
## Rewarded Ad
```objective-c
self.rewardedAd = [[AZARewardedAd alloc] initWithAdUnitId:placementId delegate:delegate];
self.rewardedAd.delegate = self;
```
Implement AZARewardedAdDelegate delegates
```objective-c
-(void)onLoadRewardedAd:(AZARewardedAd *)ad {
    
}
-(void)onFailedToLoadRewardedAd:(AZARewardedAd *)ad withError:(AZAAdError *)error {

}
-(void)onDisplayedRewardedAd:(AZARewardedAd *)ad {

}
-(void)onFailedToDisplayRewardedAd:(AZARewardedAd *)ad withError:(AZAAdError *)error {

}
-(void)onDismissRewardedAd:(AZARewardedAd *)ad {

}
-(void)onRewardEarned:(AZARewardedAd *)ad rewardItem:(AZARewardItem *)rewardItem {

}
```
Load rewarded ad
```objective-c
[self.rewardedAd loadAd];
```
Show rewarded ad
```objective-c
[self.rewardedAd presentFromRootViewController:viewController];
```
