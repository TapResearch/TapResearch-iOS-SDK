# TapResearch-iOS-SDK
TapResearch iOS SDK v3.7.0--rc0

For additional information, please see the [TapResearch iOS SDK integration guide](https://supply-docs.tapresearch.com/docs/3.x/basic-integration/sdk-integration/ios).

## Setup

Create an [app](/supplier_dashboard/dashboard/apps/new) and grab your API Token.

## Download

### Swift Package Manager

Add the following URL in the Xcode Swift Package Manager:

https://github.com/TapResearch/TapResearch-iOS-SDK

* Set Dependency Rule to "Exact Version"
* Set the version value to 3.7.0--rc0
* Set "Add to Project" to your project 
* Click "Add Package"

In the resulting "Choose Package Product for TapResearch-iOS-SDK" select the TapResearchSDK row and click "Add Package".

### Cocoapods

Add the pod info to the app's Podfile
 ```ruby
 pod 'TapResearch', 3.7.0--rc0'
 ```

 Then run the following command:
 ```bash
 $ pod install
 ```

## Other platforms:

[TapResearch Android SDK](https://supply-docs.tapresearch.com/docs/3.x/basic-integration/sdk-integration/android)

[TapResearch Unity SDK](https://supply-docs.tapresearch.com/docs/3.x/basic-integration/sdk-integration/unity)  

[TapResearch React Native SDK integration guide](https://supply-docs.tapresearch.com/docs/3.x/basic-integration/sdk-integration/react-native)
