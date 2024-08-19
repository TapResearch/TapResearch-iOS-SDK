# Changelog

> <span style="background-color: #FFFF00"> **_NOTE:_** SDK builds from 3.2.4 and up are code-signed and include a PrivacyInfo.xcprivacy file.</span>

> <span style="background-color: #FFFF00"> **_NOTE:_** A 2.5.13 Legacy SDK update is available as a code-signed build with a PrivacyInfo.xcprivacy file.</span>

## v3.4.0-beta01

$${\color{red}**_WARNING:_** This is a beta release.}$$

- Added additional reward and Quick Questions callback setters.

## v3.2.8

- Add `isReady` function.

## v3.2.7
- Improved internal logging.

## v3.2.6
- SDK stability improvements.
- Additional remote logging to help diagnose and improve SDK.

## v3.2.5
- Fixed display issue for banner type.
- Additional anti-fraud measures.

## v3.2.4
- Signed xcframework.
- PrivacyInfo.xcprivacy file.

## v3.2.3
- Bug fixes.

## v3.2.2
- Bug fixes.

## v3.2.1
- SDK is out of beta!

## v3.2.0-beta4
- Support offers.

## v3.2.0-beta3
- Bug fixes.

## v3.2.0-beta2
- Bug fixes.

## v3.2.0-beta2
- One xcframework for Xcode 14 and Xcode 15.
- Note: TapResearchSDK interface has been renamed to TapResearch.

## v3.2.0-beta1-15
- Built for Xcode 15.
- Add support for multiple question content type
- Add network check in showContent and canShowContent
- Introduce new error codes, improved error reporting
- Make reward callback optional (for server-to-server apps)

## v3.2.0-beta1-14
- Built for Xcode 14.
- Add support for multiple question content type
- Add network check in showContent and canShowContent
- Introduce new error codes, improved error reporting
- Make reward callback optional (for server-to-server apps)

## v3.1.0-beta8
- Support offers.

## v3.1.0-beta7
- Bug fixes.

## v3.1.0-beta6
- Bug fixes.

## v3.1.0-beta5
- One xcframework for Xcode 14 and Xcode 15.
- Note: TapResearchSDK interface has been renamed to TapResearch.

## v3.1.0-beta4-15
- Built for Xcode 15.
- Versioning fix for short bundle version string

## v3.1.0-beta4-14
- Built for Xcode 14.
- Versioning fix for short bundle version string

## v3.1.0-beta3.15
- Built for Xcode 15.
- Presentation animation bug fix.
- Minor bugfixes.

## v3.1.0-beta3.14
- Built for Xcode 14.
- Presentation animation bug fix.
- Minor bugfixes.

## v3.1.0-beta2
- Minor bugfixes.

## v3.1.0-beta1
- Added sendUserAttributes interface.
- Added SDK ready callback.
- Removed usage of TRError to simplify integration.

## v3.0.0-beta3
- Tapping outside a banner dismisses the banner.

## v3.0.0-beta2
- Correct interface name.
- Update to Unity support.

## v3.0.0-beta1
### This is a breaking change
- SDK rewritten for stability, simplicity, and performance.
- Added ability for some realtime feature updates and bug fixes.
- Partial screen interstitials and banners.
- Removed the need to store placement objects.
- Improved error reporting.

## 2.5.13
- Orientation update.
- Remove deprecated iOS functions usage.
- Update deployment target SDK to iOS 12.

## 2.5.12
- Orientation update.

## v2.5.11
- Signed xcframework.
- PrivacyInfo.xcprivacy file.

## v2.5.10
- Bug fixes.

## v2.5.9
- Support offers.

## v2.5.8
- Improved stability.
- Fix a rare memory access crash.
- Include dSYMs.

## v2.5.7
- Improved stability.
- Fix a rare memory access crash.

## v2.5.6
- Improved stability.
- Fix a potential crash in an API handler.
- Per Apple guidelines we have removed build support for arm7 and 32bit.

## v2.5.5
- Fix a crash that could occur due to internally referencing a deallocated placement.

## v2.5.4
- Add isEventAvailable call to TRPlacement.

## v2.5.3
- Remove warnings.

## v2.5.2
- Improved orientation check when displaying event interstitial.

## v2.5.1
- Fix Reachability class name collision.

## v2.5.0
- New interstitial display event feature.
- Removed deprecated SDK interfaces.
- Removed navigation bar styling interfaces.
- Additional validity checks in network API call.

## v2.4.2
- Fix for potential missed reward.
- Fix for offer staying unavailable after showing it.
- Navigation bar styling fix.

## v2.4.1
- Improved stability.
- Removed usage of deprecated iOS functions.
- Fixed an issue that caused a run-away cache.
- Fixed a compatibility issue with pure Swift projects.

## v2.4.0
- Fix NSKeyedArchiver mutating-array crash.
- Deprecated a TapResearch interface method.

## v2.3.1, v2.3.1u
- Fix crash related to not setting player user identifier and setting it too late.

## v2.3.0
- SDK gets and caches placements internally.
- New delegates to update availability of placements.
- Deprecated some TapResearch interface methods.
- Improve web URL error logging.

## v2.3.0u
- SDK gets and caches placements internally.
- New delegates to update availability of placements.
- Deprecated some TapResearch interface methods.
- Improve web URL error logging.
- Framework instead of xcframework.

## v2.2.2
- Guard against a possible crash when storing an internal array.

## v2.2.1
- Fix a caching issue.

## v2.2.0
- Instant rewards when closing survey screen.
- Reduced framework size.
- Improved networking code.

## v2.1.5
- Correct behavior of SDK when app moves from background to foreground.

## v2.1.4
- Remove arm slice from simulator fat binary in xcframework.
- Set base deploy to iOS 9.0.

## v2.1.3
- Add arm64 to simulator fat binary in xcframework.

## v2.1.3-beta2
- Changes to xcframework.

## v2.1.3-beta
- Change to xcframework.

## v2.1.2
- Remove AppTrackingTransparency.

## v2.1.1
- Fix framework build to work with Xcode12/iOS12 simulator

## v2.1.0
- Quietly query AppTrackingTransparency for IDFA access
- Requires Xcode12 with iOS14 SDK

## v2.0.12
- Added Remote error logging
- Fixed URL creation crash on nil cp_identifier

## v2.0.11
- Fix crash on abandon

## v2.0.10
- Custom placement parameters
- Orientation adjustments for survey view
- SDK exception logging

## v2.0.9
- Fix iOS 13 dialog type
- Fix session identifier cookie storage

## v2.0.8
- Handle surveys without secure connection

## v2.0.7
- Fix a Swift compilation issue

## v2.0.6
- Display a close button before the wall is loaded

## v2.0.5
- Support more survey providers
- Better exception reporting and handling
- Bug fixes

## v2.0.4
 - Survey routers fixes

## v2.0.3
- Support Pure Spectrum surveys

## v2.0.2
- Send a placement response when the SDK isn't ready
- Bug fixes

## v2.0.1
- `hasHotSurvey` placement attribute

## v2.0.0
**Version v2.0.0 isn't backward compatiable and will require code changes from previous versions**

- Introducing TRPlacement to evaluate availability and to display the survey wall
- Introducing TRReward to handle in app rewards
- Bug fixes

### The following methods and protocols were removed from the SDK

~~~obj-c

+ (BOOL)isSurveyAvailable;
+ (BOOL)isSurveyAvailableForIdentifier:(NSString *)identifier;
+ (void)showSurvey;
+ (void)showSurveyWithDelegate:(id<TapResearchSurveyDelegate>)delegate
+ (void)showSurveyWithIdentifier:(NSString *)identifier delegate:(id<TapResearchSurveyDelegate>)surveyDelegate;

@protocol TapResearchDelegate <NSObject>
@protocol TapResearchSurveyDelegate <NSObject>

~~~

Bug fixes
## v1.4.1
- Handling an empty `idfa`

## v1.4.0
- Bug Fix - fixing `isSurveyAvailableForIdentifier`

## v1.3.9
- Bug fix - Fail to send user identifier in some circumstances.

## v1.3.8
* New delegate methods that pass placement identifier
  - `(void)tapResearchOnSurveyAvailableWithPlacement:(NSString *)placement`
  - `(void)tapResearchOnSurveyNotAvailableWithPlacement:(NSString *)placement`
  - `(void)tapResearchSurveyModalOpenedWithPlacement:(NSString *)placement`
  - `(void)tapResearchSurveyModalDismissedWithPlacement:(NSString *)placement`
* New methods to format the survey wall
  - `(void)setNavigationBarColor:(UIColor *)color`
  - `(void)setNavigationBarText:(NSString *)text`
  - `(void)setNavigationBarTextColor:(UIColor *)color`

## v1.3.7
- Refresh button in the survey wall
- Missing api token handling
- Bug fixes

## v1.3.6
- Version fix

## v1.3.5
- Bug fixes

## v1.3.4
- Critical deployment fix

## v1.3.3
- Multi offering enhancements

## v1.3.2
- iOS 7.0 support
- Bug fixes

## v1.3.1
- CocoaPods Integration
- Multi currency
- Multi offerings
- Bug fixes

## v1.2.2
- Added two new TapResearchDelegate methods.
 - tapResearchOnSurveyAvailable;
 - tapResearchOnSurveyNotAvailable;

## v1.2.1
- Fixed bug that prevented users from abandoning a survey.

## v1.2.0
- In-app webviews! Your users will stay inside the app as they complete TapResearch surveys.
- Multi-language support
- Bug fixes
