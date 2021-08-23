Pod::Spec.new do |s|
  s.name             = 'TapResearch'
  s.version          = '2.3.0u'
  s.summary          = 'TapResearch IOS SDK'

  s.description      = <<-DESC
TapResearch IOS SDK, to learn more checkout: https://www.tapresearch.com/docs/ios-integration-guide
	DESC

  s.homepage         = 'https://www.tapresearch.com'
  s.license          = { :type => 'Closed Source' }
  s.author           = { 'Jeroen Verbeek' => 'jeroen@tapresarch.com' }
  s.source           = { :git => 'https://github.com/TapResearch/TapResearch-iOS-SDK.git', :tag => 'v2.3.0u' }

  s.ios.deployment_target = '9.2'
  s.ios.vendored_frameworks = 'TapResearchSDK.framework'
  s.frameworks = 'UIKit', 'MapKit', 'Foundation', 'SystemConfiguration', 'MobileCoreServices', 'AdSupport', 'Security'
end
