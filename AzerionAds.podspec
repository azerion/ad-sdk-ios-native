Pod::Spec.new do |s|

s.name = 'AzerionAds'
s.version = '2.1.1'
s.license = 'MIT'
s.summary = 'AzerionAds SDK has been designed to give developers options for showing Ads from different ad networks.'
s.homepage = 'https://github.com/azerion/ad-sdk-ios-native'
s.authors = { 'Azerion' => 'adsdk_techuser@azerion.com' }
s.source = { :git => 'https://github.com/azerion/ad-sdk-ios-native.git', :tag => "v#{s.version}" }
s.source_files = 'AzerionAds.xcframework/*/*/Headers/*.{h}'
s.resources = 'AzerionAds.xcframework/ios-arm64/*/*.{bundle}'
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.documentation_url = 'https://github.com/azerion/ad-sdk-ios-native/'
s.ios.deployment_target = '10.0'
s.vendored_frameworks = 'AzerionAds.xcframework'
s.dependency 'AzerionAdsMediationCore', '1.0.0'

end