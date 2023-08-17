#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef MEDALLIADIGITALSDK_SWIFT_H
#define MEDALLIADIGITALSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UserNotifications;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MedalliaDigitalSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


typedef SWIFT_ENUM(NSInteger, MDAppearanceMode, open) {
  MDAppearanceModeLight = 0,
  MDAppearanceModeDark = 1,
  MDAppearanceModeUnknown = 2,
};

@class MDCustomInterceptDelegateData;

SWIFT_PROTOCOL("_TtP18MedalliaDigitalSDK25MDCustomInterceptDelegate_")
@protocol MDCustomInterceptDelegate
@optional
/// The event is triggered when target evaluation finished succefully
/// \param customInterceptDelegateData MDCustomInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     formPreloadTimestamp: represents the epoch time in milliseconds when the specific from preload  has happened.
///   </li>
///   <li>
///     targetingEvaluationTimestamp: represents the epoch time in milliseconds when the specific targeting evaluation has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     engagementType: MDEngagementType object that represent the engagement type.
///   </li>
///   <li>
///     payload: MDCustomInterceptPayload object that contains the intercept payload.
///   </li>
/// </ul>
///
- (void)targetEvaluationDidSuccessWithCustomInterceptDelegateData:(MDCustomInterceptDelegateData * _Nonnull)customInterceptDelegateData;
@end

@class NSString;
enum MDEngagementType : NSInteger;
@class MDCustomInterceptPayload;

SWIFT_CLASS("_TtC18MedalliaDigitalSDK29MDCustomInterceptDelegateData")
@interface MDCustomInterceptDelegateData : NSObject
@property (nonatomic) double formPreloadTimestamp;
@property (nonatomic) double targetingEvaluationTimestamp;
@property (nonatomic, copy) NSString * _Nonnull engagementId;
@property (nonatomic) enum MDEngagementType engagementType;
@property (nonatomic, strong) MDCustomInterceptPayload * _Nonnull payload;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC18MedalliaDigitalSDK24MDCustomInterceptPayload")
@interface MDCustomInterceptPayload : NSObject
@property (nonatomic, copy) NSString * _Nullable titleText;
@property (nonatomic, copy) NSString * _Nullable subtitleText;
@property (nonatomic, copy) NSString * _Nullable provideFeedbackText;
@property (nonatomic, copy) NSString * _Nullable declineText;
@property (nonatomic, copy) NSString * _Nullable deferText;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// There are 2 types of SDK engagements:
/// <ul>
///   <li>
///     form:  Intercept will launch a form survey to collect user feedback
///   </li>
///   <li>
///     appRating: Intercept will be prompted the user to rate the app in AppStore
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, MDEngagementType, open) {
  MDEngagementTypeForm = 0,
  MDEngagementTypeAppRating = 1,
};


/// This class depicts an error arise from MedalliaDigital class
SWIFT_CLASS("_TtC18MedalliaDigitalSDK15MDExternalError")
@interface MDExternalError : NSObject
/// <ul>
///   <li>
///     message: error description message
///   </li>
/// </ul>
@property (nonatomic) NSInteger statusCode;
/// <ul>
///   <li>
///     statusCode: error status code
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nonnull message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MDFeedbackDelegateData;

/// A delegate for receiving submitted form payload. This API method allows listening to in-form feedback content submitted by user.
SWIFT_PROTOCOL("_TtP18MedalliaDigitalSDK18MDFeedbackDelegate_")
@protocol MDFeedbackDelegate
@optional
/// The event is triggered when feedback was collected by SDK after “Submit” button was selected.
/// \param feedbackDelegateData DataMDFeedbackDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     feedbackUUID: represents the feedback UUID as it appears in the command center under inbox section, it is the id of the form submitted by user.
///   </li>
///   <li>
///     payload: a string that contains the submitted feedback components (currently not text and image components) and the user’s feedback UUID, it is in json format.
///   </li>
/// </ul>
///
- (void)feedbackDidSubmitWithFeedbackDelegateData:(MDFeedbackDelegateData * _Nonnull)feedbackDelegateData;
@end


SWIFT_CLASS("_TtC18MedalliaDigitalSDK22MDFeedbackDelegateData")
@interface MDFeedbackDelegateData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString * _Nonnull engagementId;
@property (nonatomic, copy) NSString * _Nonnull feedbackClientCorrelationId;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull payload;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MDFormDelegateData;

/// A delegate for receiving a form displayed information. This API method allows listening to form related events, e.g. form was submitted.
SWIFT_PROTOCOL("_TtP18MedalliaDigitalSDK14MDFormDelegate_")
@protocol MDFormDelegate
@optional
/// This event is triggered when user submitted for.
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
/// </ul>
///
- (void)formDidSubmitWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
/// This event is triggered when user closed form without submitting feedback.
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
/// </ul>
///
- (void)formDidDismissWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
/// This event is triggered when SDK closes form (and not user) after submitting feedback.
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
/// </ul>
///
- (void)formDidCloseWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
/// This event is triggered when a form is displayed via code form or invitation form.
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
///   <li>
///     formLocaleSet: String?
///   </li>
///   <li>
///     formLocaleDisplay: String?
///   </li>
/// </ul>
///
- (void)formDidDisplayWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
/// This event is triggered when form includes blocked external links.
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
///   <li>
///     blockedUrl: external url that has been blocked.
///   </li>
/// </ul>
///
- (void)formDidBlockExternalUrlWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
/// This event is triggered when link was selected.
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
///   <li>
///     url: external url that has been selected.
///   </li>
///   <li>
///     isBlocked: if the url above was blocked then it’s true, otherwise it’s false
///   </li>
/// </ul>
///
- (void)formDidLinkSelectWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
/// This event is triggered when the thank you prompt was displayed after the form was submitted
/// \param formDelegateData MDFormDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     formId: represents the form id as it appears in the digital command center under forms section.
///   </li>
///   <li>
///     formTriggerType: MDFormTriggerType
///   </li>
/// </ul>
///
- (void)formDidThankYouPromptWithFormDelegateData:(MDFormDelegateData * _Nonnull)formDelegateData;
@end

enum MDFormTriggerType : NSInteger;

SWIFT_CLASS("_TtC18MedalliaDigitalSDK18MDFormDelegateData")
@interface MDFormDelegateData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString * _Nonnull engagementId;
@property (nonatomic) enum MDFormTriggerType formTriggerType;
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic, copy) NSString * _Nullable formLocaleSet;
@property (nonatomic, copy) NSString * _Nullable formLocaleDisplay;
@property (nonatomic) enum MDAppearanceMode formHeaderAppearanceSet;
@property (nonatomic) enum MDAppearanceMode formHeaderAppearanceDisplay;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// There are 2 types of forms, distinguished by their trigger origin:
/// <ul>
///   <li>
///     code:  Code triggers are to be used as the passive trigger method when the user actively looks to leave feedback, usually a “feedback” menu option. This form is            triggered by the app calling MedalliaDigital.showForm()
///   </li>
///   <li>
///     invite: Invitation triggers, also known as invites or intercepts, are to be used as the proactive trigger method when the app looks to receive contextual feedback using the SDK invite flavours (native alert, SDK banner etc.). This form is triggered automatically by the SDK when setting up survey on the Digital Command Center.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, MDFormTriggerType, open) {
/// Code trigger type
  MDFormTriggerTypeCode = 0,
/// Invitation trigger type
  MDFormTriggerTypeInvite = 1,
};

typedef SWIFT_ENUM(NSInteger, MDInterceptActionType, open) {
  MDInterceptActionTypeAccepted = 0,
  MDInterceptActionTypeDeclined = 1,
  MDInterceptActionTypeDeferred = 2,
  MDInterceptActionTypeSkipped = 3,
};

@class MDInterceptDelegateData;

/// A delegate for receiving an intercept displayed information. Allows listening to intercepts related events. i.e. Actions taken by user in Form Invitations and App Rating prompts (App Ratings is coming soon).
SWIFT_PROTOCOL("_TtP18MedalliaDigitalSDK19MDInterceptDelegate_")
@protocol MDInterceptDelegate
@optional
/// This event is triggered when intercept was displayed to end user.
/// \param interceptDelegateData MDInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section
///   </li>
///   <li>
///     engagementType: MDEngagementType
///   </li>
/// </ul>
///
- (void)interceptDidDisplayWithInterceptDelegateData:(MDInterceptDelegateData * _Nonnull)interceptDelegateData;
/// This event is triggered when intercept was accepted by user from alert (usually “Provide Feedback”) or SDK banner.
/// \param interceptDelegateData MDInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section
///   </li>
///   <li>
///     engagementType: MDEngagementType
///   </li>
/// </ul>
///
- (void)interceptDidAcceptWithInterceptDelegateData:(MDInterceptDelegateData * _Nonnull)interceptDelegateData;
/// This event is triggered when intercept was declined by user from alert (usually “No Thanks”) or SDK banner.
/// \param interceptDelegateData MDInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section
///   </li>
///   <li>
///     engagementType: MDEngagementType
///   </li>
/// </ul>
///
- (void)interceptDidDeclineWithInterceptDelegateData:(MDInterceptDelegateData * _Nonnull)interceptDelegateData;
/// This event is triggered when intercept was deferred by user from alert (usually “Maybe Later”) or SDK banner.
/// \param interceptDelegateData MDInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section
///   </li>
///   <li>
///     engagementType: MDEngagementType
///   </li>
/// </ul>
///
- (void)interceptDidDeferWithInterceptDelegateData:(MDInterceptDelegateData * _Nonnull)interceptDelegateData;
/// This event is triggered when intercept was closed bty the app
/// \param interceptDelegateData MDInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section
///   </li>
///   <li>
///     engagementType: MDEngagementType
///   </li>
/// </ul>
///
- (void)interceptDidCloseWithInterceptDelegateData:(MDInterceptDelegateData * _Nonnull)interceptDelegateData;
/// This event is triggered when SKStoreReviewController was triggered by the SDK.
/// \param interceptDelegateData MDInterceptDelegateData object that contains:
/// <ul>
///   <li>
///     timestamp: represents the epoch time in milliseconds when the specific event has happened.
///   </li>
///   <li>
///     engagementId: represents the engagement id as it appears in the digital command center under forms section
///   </li>
/// </ul>
///
- (void)interceptDidTriggerSKStoreReviewControllerWithInterceptDelegateData:(MDInterceptDelegateData * _Nonnull)interceptDelegateData;
@end


SWIFT_CLASS("_TtC18MedalliaDigitalSDK23MDInterceptDelegateData")
@interface MDInterceptDelegateData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString * _Nonnull engagementId;
@property (nonatomic) enum MDEngagementType engagementType;
@property (nonatomic) enum MDAppearanceMode appearanceSet;
@property (nonatomic) enum MDAppearanceMode appearanceDisplay;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// | MDLogLevel       | Description                                                                                                                                                                                |
/// |——————|––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––|
/// | MDLogLevel.OFF   | Turns off the SDK logs. As mentioned above, this API should not be integrated in production apps. Using this log level is also not allowed.                                                |
/// | MDLogLevel.FATAL | Will print only fatal logs. e.g. In case a fatal error occurred, the SDK is likely to crash.                                                                                               |
/// | MDLogLevel.ERROR | Will print error logs and will also include the levels above. e.g. An error occurred. It is likely the error is recoverable and available info about what happened will output to console. |
/// | MDLogLevel.WARN  | Will print warn logs and will also include the levels above. e.g. a warning message which may eventually indicate on a possible error.                                                     |
/// | MDLogLevel.INFO  | Will print info logs and will also include the levels above. e.g. a standard info message.                                                                                                 |
/// | MDLogLevel.DEBUG | Will print debug logs and will also include the levels above. e.g. a standard debug message.                                                                                               |
typedef SWIFT_ENUM(NSInteger, MDLogLevel, open) {
  MDLogLevelOff = 0,
  MDLogLevelFatal = 1,
  MDLogLevelError = 2,
  MDLogLevelWarn = 3,
  MDLogLevelInfo = 4,
  MDLogLevelDebug = 5,
};

typedef SWIFT_ENUM(NSInteger, MDSDKFrameworkType, open) {
  MDSDKFrameworkTypeNative = 0,
  MDSDKFrameworkTypeReactNative = 1,
  MDSDKFrameworkTypeCordova = 2,
  MDSDKFrameworkTypeFlutter = 3,
};


/// MedalliaDigital is the main component for the Medallia sdk.
/// It includes the complete set of tools required in order to work with Medallia sdk.
/// Calling sdkInit() method is mandatory before accessing any other method in this API.
SWIFT_CLASS("_TtC18MedalliaDigitalSDK15MedalliaDigital")
@interface MedalliaDigital : NSObject
/// Private constructor to prevent others from using the default ‘()’ initializer for this class, as this is a singleton.
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// This method initializes the SDK and by doing so authenticates the app, and retrieves configuration elements from Medallia Digital.
/// <em>This method is mandatory in order to start Medallia SDK</em>
/// All the following vars are mandatory for init to run.
/// \param token Medallia Digital developer token (can be found in the account section of your Medallia Digital dashboard). Note that this key is assigned per application.
///
/// \param success Success Closure
///
/// \param failure Failure Closure
///
+ (void)sdkInitWithToken:(NSString * _Nonnull)token success:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(MDExternalError * _Nonnull))failure;
/// The SDK enables the app to set custom parameters of several types. Define specific parameter to add to the submitted feedback and targeting. * If the name specified already exists, it will be overridden.
/// The SDK supports the following types: String, Integer(or int), Long(or long), Double(or double), Float(or float), Boolean(or bool)
/// In case the value is not one of these primitive types, custom parameter won’t be saved.
/// <em>value can’t be null.</em>
/// \param name custom parameter name
///
/// \param value - custom parameter value 
///
+ (void)setCustomParameterWithName:(NSString * _Nonnull)name value:(id _Nonnull)value;
/// The SDK enables the app to set custom parameters of several types. Define multiple parameters to add to the submitted feedback and targeting. * If the name specified already exists, it will be overridden.
/// For more information, go to : setCustomParameter()
/// \param parameters map of ‘name’(of type String) and ‘value’(of a primitive type).
///
+ (void)setCustomParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
/// Displaying a form on demand, usually a “Feedback” button in app menu. The SDK must be initialized for form to be displayed. The ‘ShowForm’ API can be called in parallel with the init API.
/// \param formId form id to determine which form should be shown.
///
/// \param success Success Closure
///
/// \param failure Failure Closure
///
+ (void)showForm:(NSString * _Nonnull)formId success:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(MDExternalError * _Nonnull))failure;
/// Enables the app to launch forms directly from push notifications. Using this API, forms are properly opened once the pushed notification is selected.
/// \param formId form id to determine which form should be shown.
///
/// \param success Success Closure
///
/// \param failure Failure Closure
///
+ (void)handleNotification:(NSString * _Nonnull)formId success:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(MDExternalError * _Nonnull))failure;
/// Setting a delegate in order to receive form displayed information. This API method allows listening to form related events, e.g. form was submitted.
/// \param formDelegate MDFormDelegate
///
+ (void)setFormDelegate:(id <MDFormDelegate> _Nullable)formDelegate;
/// Setting a delegate in order to receive intercept information (Alert or Banner displayed asking the user whether he/she wants to open form/app rating/ any other engagement type object)
/// \param interceptDelegate MDInterceptDelegate
///
+ (void)setInterceptDelegate:(id <MDInterceptDelegate> _Nullable)interceptDelegate;
/// Setting a delegate in order to receive feedback payload. This API method allows listening to in-form feedback content submitted by user.
/// \param feedbackDelegate MDFeedbackDelegate
///
+ (void)setFeedbackDelegate:(id <MDFeedbackDelegate> _Nullable)feedbackDelegate;
/// Setting a delegate in order to receive custom intercept payload. This API method allows listening to custom intercept triggering.
/// \param customInterceptDelegate MDCustomInterceptDelegate
///
+ (void)setCustomInterceptDelegate:(id <MDCustomInterceptDelegate> _Nonnull)customInterceptDelegate;
/// Permits app developers to suppress/disable feedback intercepts (and their respective targeting) from being prompted to the user, usually called in critical flows. This method is always bundled together with disableIntercept() as one method disables the intercept and the other re-enables it.
/// <ul>
///   <li>
///     This API will not effect showForm API functionality.
///     Customers may consider using this functionality during critical flows such as payment, live support chats, phone calls etc.
///     <em>Intercept is enabled by default.</em>
///     When called, these operations store the values in the application memory i.e. the setting remains available as long as the application is alive.
///     Important note - this API will not affect the showForm functionality
///   </li>
/// </ul>
+ (void)enableIntercept;
/// Permits app developers to suppress/disable feedback intercepts (and their respective targeting) from being prompted to the user, usually called in critical flows. This method is always bundled together with enableIntercept() as one method disables the intercept and the other re-enables it.
/// <ul>
///   <li>
///     This API will not effect showForm API functionality.
///     For resuming intercept functionality, go to enableIntercept()
///     Upon every new sdkInit(token: String, success: @escaping () -> Void, failure: @escaping (_ error: MDExternalError) -> Void), the intercept mechanism will be enabled(ergo - enabled by default).
///   </li>
/// </ul>
+ (void)disableIntercept;
/// Set log level (of type MDLogLevel) to be printed in the console
/// The logs that will be printed will be determined by the provided log level
/// Logs will be printed from this log level and above
/// Default log level in the SDK is .off
/// Note: if you choose log level = .off, there will be no logs at all
/// It is highly recommended to get log level .off when App is in production/Appstore
/// \param logLevel log level to determine which logs will be printed to the console
///
+ (void)setLogLevel:(enum MDLogLevel)logLevel;
/// Stop SDK API will stop the SDK functionality.
/// In case the API is been called with #clearData parameter true, personalized SDK data will be cleared.
/// \param clearData clear data determines if the personalized data should be cleared in addition to stopping the SDK
///
+ (void)stopSDKWithClearData:(BOOL)clearData;
/// Revert Stop SDK API will revive the SDK functionality (if it is stopped).
/// In the next session the SDK functionality will start working as expected.
+ (void)revertStopSDK;
/// Set the SDK Frameowrk origin of the app
/// \param mdSdkFrameworkType MDSdkFrameworkType (Native, React Native or Cordova)
///
+ (void)setSdkFramework:(enum MDSDKFrameworkType)mdSdkFrameworkType;
/// Set the SDK Locale
/// \param locale String?, nil to unset locale
///
+ (void)updateCustomLocale:(NSString * _Nullable)locale success:(void (^ _Nonnull)(NSString * _Nullable))success failure:(void (^ _Nonnull)(MDExternalError * _Nonnull))failure;
/// Custom Intercept Trigger
/// \param engagementId String
///
/// \param actionType MDInterceptActionType
///
/// \param failure Failure Closure
///
+ (void)customInterceptTriggerWithEngagementId:(NSString * _Nonnull)engagementId actionType:(enum MDInterceptActionType)actionType failure:(void (^ _Nonnull)(MDExternalError * _Nonnull))failure;
/// Set Appearance Mode
/// \param appearanceMode MDAppearanceMode (light or dark mode)
///
+ (void)setCustomAppearance:(enum MDAppearanceMode)appearanceMode;
/// Set Debug Form
/// \param debug Bool true to debug
///
+ (void)setDebugForm:(BOOL)debug;
/// Close Engagement
/// \param success suceess block
///
/// \param failure failure block
///
+ (void)closeEngagementWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(MDExternalError * _Nonnull))failure;
/// Set User ID
/// \param userId String
///
+ (void)setUserId:(NSString * _Nullable)userId;
@end









@interface UNNotificationContent (SWIFT_EXTENSION(MedalliaDigitalSDK))
@property (nonatomic, readonly) BOOL isMedalliaDigitalSDKNotificationContent;
@property (nonatomic, readonly, copy) NSString * _Nullable medalliaDigitalSDKEngagementId;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
