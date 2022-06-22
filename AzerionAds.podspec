Pod::Spec.new do |s|

s.name = 'AzerionAds'
s.version = '2.0.0'
s.license = 'MIT'
s.summary = 'AzerionAds SDK has been designed to give developers options for showing Ads from ImproveDigital and AdMob.'
s.homepage = 'https://github.com/azerion/ad-sdk-ios-native'
s.authors = { 'Azerion' => 'adsdk_techuser@azerion.com' }
s.source = { :git => 'https://github.com/azerion/ad-sdk-ios-native.git', :tag => s.version.to_s }
s.source_files = 'AzerionAds.xcframework/*/*/Headers/*.{h}'
s.resources = 'AzerionAds.xcframework/ios-arm64_armv7/*/*.{bundle}'
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.documentation_url = 'https://github.com/azerion/ad-sdk-ios-native/'
s.ios.deployment_target = '10.0'
s.vendored_frameworks = 'AzerionAds.xcframework'
s.dependency 'GoogleAds-IMA-iOS-SDK', '3.16.3'
s.dependency 'Google-Mobile-Ads-SDK', '9.6.0'

end
