# Change Log
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
