# Changelog

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

## v2.0.21
- Fix a caching issue.

## v2.0.20
- Instant rewards when closing survey screen.
- Reduced framework size.
- Improved networking code.

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
