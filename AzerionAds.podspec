Pod::Spec.new do |s|

s.name = 'AzerionAds'
s.version = '1.0.1'
s.license = 'MIT'
s.summary = 'AzerionAds SDK has been designed to give developers options for showing Ads from ImproveDigital and AdMob.'
s.homepage = 'https://github.com/azerion/ad-sdk-ios-native'
s.authors = { 'Azerion' => 'adsdk_techuser@azerion.com' }
s.source = { :git => 'https://github.com/azerion/ad-sdk-ios-native.git', :tag => s.version.to_s }
s.ios.source_files = 'AzerionAds.xcframework/*/*/Headers/*.{h}'
s.resources = 'AzerionAds.xcframework/ios-arm64_armv7/*/*.{bundle}'
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.documentation_url = 'https://github.com/azerion/ad-sdk-ios-native/tree/release/v1.0.1/'
s.ios.deployment_target = '9.0'
s.vendored_frameworks = 'AzerionAds.xcframework'
s.ios.dependency 'GoogleAds-IMA-iOS-SDK'
s.ios.dependency 'Google-Mobile-Ads-SDK'

end
