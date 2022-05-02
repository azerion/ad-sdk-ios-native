Pod::Spec.new do |s|

s.name = 'AzerionAds'
s.version = '1.0.1'
s.license = 'MIT'
s.summary = 'AzerionAds SDK has been designed to give developers options for showing Ads from ImproveDigital and AdMob. Developer can choose the priorities between ad networks and set the ad unit ids from configuration file.'
s.homepage = 'https://github.com/azerion/ad-sdk-ios-native'
s.authors = { 'Azerion' => 'adsdk_techuser@azerion.com' }
s.source = { :http => 'https://github.com/azerion/ad-sdk-ios-native/tree/release/v1.0.1/AzerionAds.xcframework' }
s.documentation_url = 'https://github.com/azerion/ad-sdk-ios-native/tree/release/v1.0.1/'
s.ios.deployment_target = '9.0'
s.vendored_frameworks = 'AzerionAds.xcframework'
s.dependency 'GoogleAds-IMA-iOS-SDK'
s.dependency 'Google-Mobile-Ads-SDK'

end
