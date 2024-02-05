# TapResearch-iOS-SDK
TapResearch iOS SDK v2.5.10

For additional information, please see the [TapResearch iOS SDK integration guide](https://supply-docs.tapresearch.com/docs/ios-integration/).

## Setup

Create an [app](/supplier_dashboard/dashboard/apps/new) and grab your API Token.

## Download

### Swift Package Manager

Add the following URL in the Xcode Swift Package Manager:

https://github.com/TapResearch/TapResearch-iOS-SDK

* Set Dependency Rule to "Exact Version"
* Set the version value to 2.5.10
* Set "Add to Project" to your project 
* Click "Add Package"

In the resulting "Choose Package Product for TapResearch-iOS-SDK" select the TapResearchSDK row and click "Add Package".

### Cocoapods

Add the pod info to the app's Podfile
 ```ruby
 pod 'TapResearch', '2.5.10'
 ```

 Then run the following command:
 ```bash
 $ pod install
 ```

## Other platforms:

[TapResearch Android SDK integration guide](https://www.tapresearch.com/docs/android-integration-guide)

[TapResearch Unity SDK integration guide](https://www.tapresearch.com/docs/unity-integration-guide)

[TapResearch JavaScript SDK integration guide](https://www.tapresearch.com/docs/javascript-integration-guide)
