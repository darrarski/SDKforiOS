// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import CoreBluetooth;
@import CoreLocation;
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#import <IndoorwayKit/IndoorwayKit.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CBCentralManager (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface CLLocationManager (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface CLLocationManager (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface IPSIPosition (SWIFT_EXTENSION(IndoorwayKit))
@end

@class IndoorwayLatLon;

/// Indoorway annotation
SWIFT_PROTOCOL("_TtP12IndoorwayKit19IndoorwayAnnotation_")
@protocol IndoorwayAnnotation <NSObject>
/// Center point of the annotation
@property (nonatomic, readonly, strong) IndoorwayLatLon * _Nonnull coordinate;
/// The title of the annotation
@property (nonatomic, readonly, copy) NSString * _Nullable title;
/// The subtitle of the annotation
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
@end

@class NSCoder;

/// Class responsible for presenting annotations in a map view.
/// The map view asks its delegate to provide corresponding annotation view.
/// Annotation views can be recycled ad reused. This process is maintained by map view.
SWIFT_CLASS("_TtC12IndoorwayKit23IndoorwayAnnotationView")
@interface IndoorwayAnnotationView : UIView
/// The string that identifies ehhis annotation in reusable queue
@property (nonatomic, readonly, copy) NSString * _Nullable reuseIdentifier;
/// The annotation object associated with the view
@property (nonatomic, weak) id <IndoorwayAnnotation> _Nullable annotation;
/// Initializes and returns a new annotation view
/// \param annotation The annotation that will be associated with the new view
///
/// \param reuseIdentifier The identifier is used to reuse process of the annotation views.
/// If it is <code>nil</code> then view can’t be reused in future.
///
///
/// returns:
/// The initialized annotation view
- (nonnull instancetype)initWithAnnotation:(id <IndoorwayAnnotation> _Nullable)annotation reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// A Boolean value indicating whether the annotation is enabled
@property (nonatomic) BOOL enabled;
/// A Boolean value indicating whether the annotation is selected
@property (nonatomic) BOOL selected;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class IndoorwayMap;

/// Indoorway building information class
SWIFT_CLASS("_TtC12IndoorwayKit17IndoorwayBuilding")
@interface IndoorwayBuilding : NSObject
/// The UUID of the building
@property (nonatomic, readonly, copy) NSString * _Nonnull UUID;
/// The name of the building
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// The street of the building location
@property (nonatomic, readonly, copy) NSString * _Nullable street;
/// The city of the building location
@property (nonatomic, readonly, copy) NSString * _Nullable city;
/// The building description
@property (nonatomic, readonly, copy) NSString * _Nullable buildingDescription;
/// The list of maps associated with the building
@property (nonatomic, readonly, copy) NSArray<IndoorwayMap *> * _Nullable maps;
- (nonnull instancetype)initWithUuid:(NSString * _Nonnull)uuid name:(NSString * _Nonnull)name description:(NSString * _Nullable)description street:(NSString * _Nullable)street city:(NSString * _Nullable)city mapsInfo:(NSArray<IndoorwayMap *> * _Nullable)mapsInfo OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface IndoorwayBuilding (SWIFT_EXTENSION(IndoorwayKit))
@end


/// The default annotation view for the Indoorway map view
SWIFT_CLASS("_TtC12IndoorwayKit29IndoorwayCircleAnnotationView")
@interface IndoorwayCircleAnnotationView : IndoorwayAnnotationView
/// Initializes default circle annotation view
/// \param annotation The view annotation
///
/// \param reuseIdentifier The reuse identifier
///
- (nonnull instancetype)initWithAnnotation:(id <IndoorwayAnnotation> _Nullable)annotation reuseIdentifier:(NSString * _Nullable)reuseIdentifier;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

enum IndoorwayVisitorSex : NSUInteger;

/// The Indoorway configuration class
SWIFT_CLASS("_TtC12IndoorwayKit22IndoorwayConfiguration")
@interface IndoorwayConfiguration : NSObject
/// Method configures the Indoorway framework with API key.
/// The valid API key is required to use framework functionality.
/// This method must be called before any use of the framework.
/// \param apiKey The Indoorway API key
///
+ (void)configureWithApiKey:(NSString * _Nonnull)apiKey;
/// Method that registers the Indoorway visitor information.
/// Should be called every time the app launches and before obtaining first localization.
/// \param name The name of the visitor. Pass empty string if not applicable
///
/// \param email The email of the visitor. Pass empty string if not applicable
///
/// \param age The age of the visitor. Pass negative value if not applicable
///
/// \param sex The sex of the visitor
///
/// \param group The group of the visitor. Pass empty string if not applicable
///
+ (void)setupVisitorWithName:(NSString * _Nonnull)name email:(NSString * _Nonnull)email age:(NSUInteger)age sex:(enum IndoorwayVisitorSex)sex group:(NSString * _Nonnull)group shareLocation:(BOOL)shareLocation SWIFT_DEPRECATED;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface IndoorwayConfiguration (SWIFT_EXTENSION(IndoorwayKit))
@end

/// Indoorway error codes
typedef SWIFT_ENUM(NSInteger, IndoorwayErrorCode) {
  IndoorwayErrorCodeBluetoothNotAvailable = 77500,
  IndoorwayErrorCodeBuildingsManager = 77700,
  IndoorwayErrorCodeLogotypeManager = 77701,
  IndoorwayErrorCodeRadiomap = 77702,
  IndoorwayErrorCodeMapManager = 77703,
  IndoorwayErrorCodePointsOfInterestTypesManager = 77704,
  IndoorwayErrorCodeLocationRangingManager = 77705,
  IndoorwayErrorCodeCameraNotAvailable = 77706,
  IndoorwayErrorCodeVisitorsManager = 77707,
  IndoorwayErrorCodeVisitorsLocationsManager = 77708,
  IndoorwayErrorCodeLocationsManager = 77709,
  IndoorwayErrorCodeLoginManager = 77710,
  IndoorwayErrorCodeNoRadioMap = 77711,
  IndoorwayErrorCodeUserNotAuthorized = 77800,
};


/// Object that contains a geographical coordinate
SWIFT_CLASS("_TtC12IndoorwayKit15IndoorwayLatLon")
@interface IndoorwayLatLon : NSObject
/// The latitude in degrees
@property (nonatomic, readonly) double latitude;
/// The Longitude in degrees
@property (nonatomic, readonly) double longitude;
/// Initializes and returns location object
/// \param latitude The latitude in degrees
///
/// \param longitude The longitude in degrees
///
///
/// returns:
/// An initialized location object
- (nonnull instancetype)initWithLatitude:(double)latitude longitude:(double)longitude OBJC_DESIGNATED_INITIALIZER;
/// Initializes and returns location object with latitude and longitude equal 0.0
///
/// returns:
/// A location object with latitude and longitude equal 0.0
- (nonnull instancetype)init;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end


@interface IndoorwayLatLon (SWIFT_EXTENSION(IndoorwayKit))
@end


/// Object represents the geographical location data
/// and the information about corresponding map
SWIFT_CLASS("_TtC12IndoorwayKit17IndoorwayLocation")
@interface IndoorwayLocation : NSObject
/// Latitude
@property (nonatomic, readonly) double latitude;
/// Longitude
@property (nonatomic, readonly) double longitude;
/// The UUID of the building
@property (nonatomic, readonly, copy) NSString * _Nullable buildingUUID;
/// The UUID of the building map
@property (nonatomic, readonly, copy) NSString * _Nullable mapUUID;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface IndoorwayLocation (SWIFT_EXTENSION(IndoorwayKit))
@end


/// Indoorway logotype
SWIFT_CLASS("_TtC12IndoorwayKit17IndoorwayLogotype")
@interface IndoorwayLogotype : NSObject
/// The UUID of the logotype
@property (nonatomic, readonly, copy) NSString * _Nonnull UUID;
/// The URL of the original image
@property (nonatomic, readonly, copy) NSURL * _Nonnull originalURL;
/// The URL of the thumbnail image
@property (nonatomic, readonly, copy) NSURL * _Nonnull thumbURL;
/// The name of the logotype
@property (nonatomic, readonly, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithUUID:(NSString * _Nonnull)UUID originalURL:(NSURL * _Nonnull)originalURL thumbURL:(NSURL * _Nonnull)thumbURL name:(NSString * _Nullable)name;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface IndoorwayLogotype (SWIFT_EXTENSION(IndoorwayKit))
@end


/// Indoorway map information class
SWIFT_CLASS("_TtC12IndoorwayKit12IndoorwayMap")
@interface IndoorwayMap : NSObject
/// The UUID of the map
@property (nonatomic, readonly, copy) NSString * _Nonnull UUID;
/// The name of the map
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name uuid:(NSString * _Nonnull)uuid;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class NSString;

/// Description of the map
SWIFT_CLASS("_TtC12IndoorwayKit23IndoorwayMapDescription")
@interface IndoorwayMapDescription : NSObject
/// The building UUID
@property (nonatomic, readonly, copy) NSString * _Nonnull buildingUUID;
/// The map UUID
@property (nonatomic, readonly, copy) NSString * _Nonnull mapUUID;
/// Initializer
/// \param buildingUUID The building UUID
///
/// \param mapUUID The map UUID
///
- (nonnull instancetype)initWithBuildingUUID:(NSString * _Nonnull)buildingUUID mapUUID:(NSString * _Nonnull)mapUUID OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class IndoorwayObjectInfo;

/// Protocol for map renderer configuration
/// Implementation should cache return values
SWIFT_PROTOCOL("_TtP12IndoorwayKit33IndoorwayMapRendererConfiguration_")
@protocol IndoorwayMapRendererConfiguration
/// Source of map outline stroke color
///
/// returns:
/// Map outline stroke color
- (CGColorRef _Nullable)outlineStrokeColor SWIFT_WARN_UNUSED_RESULT;
/// Source of map outline width
///
/// returns:
/// Map outline width
- (CGFloat)outlineStrokeWidth SWIFT_WARN_UNUSED_RESULT;
/// Source of map outline fill color
///
/// returns:
/// Map outline fill color
- (CGColorRef _Nullable)outlineFillColor SWIFT_WARN_UNUSED_RESULT;
/// Source of map background color
///
/// returns:
/// Map background color
- (CGColorRef _Nonnull)backgroundColor SWIFT_WARN_UNUSED_RESULT;
/// Source of stroke color for object
/// \param object The object for color specification
///
///
/// returns:
/// Stroke color for object
- (CGColorRef _Nullable)strokeColorForObject:(IndoorwayObjectInfo * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
/// Source of fill color for object
/// \param object The object for color specification
///
///
/// returns:
/// Fill color for object
- (CGColorRef _Nullable)fillColorForObject:(IndoorwayObjectInfo * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
/// Source of stroke width for object
/// \param object The object for width specification
///
///
/// returns:
/// Stroke width for object
- (CGFloat)strokeWidthForObject:(IndoorwayObjectInfo * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
/// Source of text color for object labels
///
/// returns:
/// Text color for object labels
- (CGColorRef _Nonnull)textColor SWIFT_WARN_UNUSED_RESULT;
/// Source of text stroke color for object labels
///
/// returns:
/// Text stroke color for object labels
- (CGColorRef _Nonnull)textStrokeColor SWIFT_WARN_UNUSED_RESULT;
/// Source of text size for object labels
///
/// returns:
/// Text size for object labels
- (CGFloat)textSize SWIFT_WARN_UNUSED_RESULT;
/// Fill color for selected object
@property (nonatomic, readonly) CGColorRef _Nullable selectedObjectFillColor;
/// Custom fill color for selected object. Has higher priority than <code>selectedObjectFillColor</code>.
/// If the method returns nil for an object, value returned by<code>selectedObjectFillColor</code> will be used.
/// \param object The object for color specification
///
///
/// returns:
/// Fill color for selected object
- (CGColorRef _Nullable)selectedObjectFillColorForObject:(IndoorwayObjectInfo * _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// Stroke color for selected object
@property (nonatomic, readonly) CGColorRef _Nullable selectedObjectStrokeColor;
/// Fill color for user’s location. Works only with default annotation
@property (nonatomic, readonly) CGColorRef _Nullable usersLocationFillColor;
/// Stroke color of user’s location. Works only with default annotation
@property (nonatomic, readonly) CGColorRef _Nullable usersLocationStrokeColor;
@end

@protocol IndoorwayMapViewDelegate;
@class IndoorwayUserLocation;
@class UIWindow;

/// Indoorway map view
SWIFT_CLASS("_TtC12IndoorwayKit16IndoorwayMapView")
@interface IndoorwayMapView : UIView
/// A Boolean value indicating that map view should try to display user’s location
@property (nonatomic) BOOL showsUserLocation;
/// The rendering configuration used to render map view.
/// Contains options for setting custom colors and widths of map view objects.
/// If it is not specified the default configuration will be applied.
@property (nonatomic, weak) id <IndoorwayMapRendererConfiguration> _Nullable renderingConfiguration;
/// Map view delegate
@property (nonatomic, weak) id <IndoorwayMapViewDelegate> _Nullable delegate;
/// List of indoor objects from loaded map
@property (nonatomic, readonly, copy) NSArray<IndoorwayObjectInfo *> * _Nonnull indoorObjects;
/// The annotation object representing user’s last location
@property (nonatomic, readonly, strong) IndoorwayUserLocation * _Nullable userLocation;
/// If set to <code>true</code>, automatically centers and zooms at the area
/// defined by the user location
@property (nonatomic) BOOL centerAtUserPosition;
/// Zooms to a specific area calculated from the location and the zoom scale
/// \param location The location defining center of the area
///
/// \param scale The zoom scale to be applied
///
/// \param animated If set to<code>true</code>, zoom will be animated. Otherwise it will be immediate
///
- (void)zoomTo:(IndoorwayLocation * _Nonnull)location withScale:(float)scale animated:(BOOL)animated;
/// If set to <code>true</code>, the map rotates according to the user’s heading
@property (nonatomic) BOOL rotateWithUserHeading;
/// The loaded building namef
@property (nonatomic, copy) NSString * _Nullable loadedBuildingName;
/// The loaded map name
@property (nonatomic, copy) NSString * _Nullable loadedMapName;
/// Method lazily loads and displays map associated with description.
/// After first load map will be cached.
/// \param description The description of map to be displayed
///
/// \param completion The completion block with a Boolean that indicates that map is properly loaded
///
- (void)loadMapWith:(IndoorwayMapDescription * _Nonnull)description completion:(void (^ _Nonnull)(BOOL))completion;
/// Method displays navigation from user’s current location to destination point.
/// When the user’s location changes navigation is automatically updated.
/// \param point The navigation destination point
///
- (void)navigateTo:(IndoorwayLatLon * _Nonnull)point;
/// Method displays navigation from start location to destination location.
/// \param start The start point location for navigation
///
/// \param stop The stop point location for navigation
///
- (void)navigateWithForm:(IndoorwayLatLon * _Nonnull)start to:(IndoorwayLatLon * _Nonnull)stop;
/// Method displays navigation from user’s current location to the Indoorway object with matching identifier
/// \param objectId The destination Indoorway object identifier
///
- (void)navigateToObjectWithId:(NSString * _Nonnull)objectId;
/// Method displays navigation between start and destination Indoorway object with matching identifiers
/// \param startObjectId The start Indoorway object identifier
///
/// \param stopObjectWithId The destination Indoorway object identifier
///
- (void)navigateFromObjectWithId:(NSString * _Nonnull)startObjectId toObjectWithId:(NSString * _Nonnull)stopObjectWithId;
/// Method displays navigation from user’s current location to the Indoorway object
/// \param object The destination Indoorway object
///
- (void)navigateToObject:(IndoorwayObjectInfo * _Nonnull)object;
/// Method displays navigation between start and destination Indoorway object
/// \param startObject The start Indoorway object
///
/// \param stopObject The destination Indoorway object
///
- (void)navigateFromObject:(IndoorwayObjectInfo * _Nonnull)startObject toObject:(IndoorwayObjectInfo * _Nonnull)stopObject;
/// Method stops navigation
- (void)stopNavigation;
/// Method selects the Indoorway object
/// \param object The Indoorway object to select
///
- (void)selectObjectWithIndoorwayObject:(IndoorwayObjectInfo * _Nonnull)object;
/// Method selects the Indoorway object with matching identifier
/// \param objectId The Indoorway object identifier associated with object to select
///
- (void)selectObjectWithIndoorwayObjectId:(NSString * _Nonnull)objectId;
/// Method deselects selected Indoorway object
- (void)deselectObject;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)layoutSubviews;
@end


@interface IndoorwayMapView (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface IndoorwayMapView (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface IndoorwayMapView (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface IndoorwayMapView (SWIFT_EXTENSION(IndoorwayKit))
/// The list of annotations contained in the map view
@property (nonatomic, readonly, copy) NSArray<id <IndoorwayAnnotation>> * _Nonnull annotations;
/// Method adds annotation to the map view
/// \param annotation The annotation object to be added to the map view
///
- (void)addAnnotation:(id <IndoorwayAnnotation> _Nonnull)annotation;
/// Method adds array of annotations to the map view
/// \param annotations The array of annotations to be added to the map view
///
- (void)addAnnotations:(NSArray<id <IndoorwayAnnotation>> * _Nonnull)annotations;
/// Method removes annotation from the map view
/// \param annotation The annotation to be removed from the map view
///
- (void)removeAnnotation:(id <IndoorwayAnnotation> _Nonnull)annotation;
/// Method removes array of annotations from the map view
/// \param annotations The annotations array to be removed from the map view
///
- (void)removeAnnotations:(NSArray<id <IndoorwayAnnotation>> * _Nonnull)annotations;
/// Method returns view associated with the specific annotation object, if any exists
/// \param annotation The annotation object whose view you want
///
///
/// returns:
/// The associated annotation view or <code>nil</code> if the view is not created yet.
- (IndoorwayAnnotationView * _Nullable)viewForAnnotation:(id <IndoorwayAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
/// Method returns reusable annotation view matching the identifier
/// \param identifier The string identifying the annotation view
///
///
/// returns:
/// An annotation view associated with identifier, or <code>nil</code> if no such object exists for reuse
- (IndoorwayAnnotationView * _Nullable)dequeueReusableAnnotationViewWithIdentifier:(NSString * _Nonnull)identifier SWIFT_WARN_UNUSED_RESULT;
/// Method selects the specified annotation
/// \param annotation The annotation to be selected
///
/// \param animated If true, the selection will be animated
///
- (void)selectAnnotation:(id <IndoorwayAnnotation> _Nonnull)annotation animated:(BOOL)animated;
/// Method deselects the specified annotation
/// \param annotation The annotation to be deselected
///
/// \param animated If true, the selection will be animate
///
- (void)deselectAnnotation:(id <IndoorwayAnnotation> _Nullable)annotation animated:(BOOL)animated;
@end


/// Indoorway map view delegate
SWIFT_PROTOCOL("_TtP12IndoorwayKit24IndoorwayMapViewDelegate_")
@protocol IndoorwayMapViewDelegate <NSObject>
@optional
/// Method called when map did finish loading
/// \param mapView The map view that did finish loading
///
- (void)mapViewDidFinishLoadingMap:(IndoorwayMapView * _Nonnull)mapView;
/// Method called when map did fail loading map
/// \param mapView The map view that did fail loading map
///
/// \param error Error that occurred
///
- (void)mapViewDidFailLoadingMap:(IndoorwayMapView * _Nonnull)mapView withError:(NSError * _Nonnull)error;
/// Method called when user did tap location
/// \param mapView The map view that received tap
///
/// \param location The location where tap was received
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didTapLocation:(IndoorwayLatLon * _Nonnull)location;
/// Method tells the delegate that the location of the user was updated.
/// \param mapView The map view which determines user location
///
/// \param userLocation The updated user location
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didUpdate:(IndoorwayUserLocation * _Nonnull)userLocation;
/// Method tells the delegate that an attempt to locate the user’s position failed.
/// \param mapView The map view which determines user location
///
/// \param error The error containing a reason that determining user location failed
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didFailToLocateUserWithError:(NSError * _Nonnull)error;
/// Method determines that map view should select Indoorway object
/// \param mapView The map view that should or not select object
///
/// \param indoorObjectInfo The object that should or not be selected
///
///
/// returns:
/// returns true if object should be selected
- (BOOL)mapView:(IndoorwayMapView * _Nonnull)mapView shouldSelectIndoorObject:(IndoorwayObjectInfo * _Nonnull)indoorObjectInfo SWIFT_WARN_UNUSED_RESULT;
/// Method called when Indoorway object did select
/// \param mapView The map view that contains selected Indoorway object
///
/// \param indoorObjectInfo The selected Indoorway object
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didSelectIndoorObject:(IndoorwayObjectInfo * _Nonnull)indoorObjectInfo;
/// Method called when Indoorway object did deselect
/// \param mapView The map view that contains deselected Indoorway object
///
/// \param indoorObjectInfo The deselected Indoorway object
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didDeselectIndoorObject:(IndoorwayObjectInfo * _Nonnull)indoorObjectInfo;
/// Method returns the view associated with the specified annotation object
/// Discussion:
/// Rather than creating new view each time the method is called, it should call <code>dequeueReusableAnnotationViewWithIdentifier(_ identifier:)</code> on the <code>IndoorwayMapView</code> instance to obtain dequeued view.
/// If it doesn’t exist, it should create a new one. After both of ways view should be configured to reflect the annotation properties before returning.
/// If the object in the annotation parameter is an instance of the IndoorwayUserLocation class, you can provide a custom view to display the user’s location.
/// To display the user’s location using the standard system view, return nil.
/// If you do not implement this method, or if you return nil from your implementation for annotations other than the user location annotation, the map view uses a standard circle annotation view.
/// \param mapView The map view that asked the annotation view
///
/// \param annotation The object that represents the annotation that is about to be displayed. In addition to your custom annotations, this object could be an IndoorwayUserLocation object representing the user’s current location.
///
///
/// returns:
/// The annotation view to display for the specified annotation or nil if you want to display a standard annotation view
- (IndoorwayAnnotationView * _Nullable)mapView:(IndoorwayMapView * _Nonnull)mapView viewForAnnotation:(id <IndoorwayAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
/// Method called when user did select annotation view
/// \param mapView The map view that contains annotation view
///
/// \param view The selected annotation view
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didSelectAnnotationView:(IndoorwayAnnotationView * _Nonnull)view;
/// Method called when user did deselect annotation view
/// \param mapView The map view that contains annotation view
///
/// \param view The deselected annotation view
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didDeselectAnnotationView:(IndoorwayAnnotationView * _Nonnull)view;
@end

enum IndoorwayObjectType : NSInteger;

/// Indoorway object information
SWIFT_CLASS("_TtC12IndoorwayKit19IndoorwayObjectInfo")
@interface IndoorwayObjectInfo : NSObject
/// Name of object
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// Type of object
@property (nonatomic, readonly) enum IndoorwayObjectType objectType;
/// Object identifier
@property (nonatomic, readonly, copy) NSString * _Nonnull objectId;
/// Object displays image
@property (nonatomic, readonly) BOOL objectDisplaysImage;
/// Object tags
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull objectTags;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name objectType:(enum IndoorwayObjectType)objectType objectId:(NSString * _Nonnull)objectId objectImageId:(NSString * _Nonnull)objectImageId objectTags:(NSArray<NSString *> * _Nonnull)objectTags OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Indoorway object type
typedef SWIFT_ENUM(NSInteger, IndoorwayObjectType) {
/// Room
  IndoorwayObjectTypeRoom = 0,
/// Toilet
  IndoorwayObjectTypeToilet = 1,
/// Cloakroom
  IndoorwayObjectTypeCloakroom = 2,
/// Information
  IndoorwayObjectTypeInformation = 3,
/// Inaccessible
  IndoorwayObjectTypeInaccessible = 4,
/// Elevator
  IndoorwayObjectTypeElevator = 5,
/// Stairs
  IndoorwayObjectTypeStairs = 6,
/// Point
  IndoorwayObjectTypePoint = 7,
/// Atm
  IndoorwayObjectTypeAtm = 8,
/// Entrance
  IndoorwayObjectTypeEntrance = 9,
/// VendingMachine
  IndoorwayObjectTypeVendingMachine = 10,
/// Path
  IndoorwayObjectTypePath = 11,
/// Unknown
  IndoorwayObjectTypeUnknown = 12,
};


/// Indoorway point of interest type
SWIFT_CLASS("_TtC12IndoorwayKit16IndoorwayPOIType")
@interface IndoorwayPOIType : NSObject
/// The UUID of the point of interest
@property (nonatomic, readonly, copy) NSString * _Nonnull UUID;
/// The name of the point of interest
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// The logotype of the point of interest
@property (nonatomic, readonly, strong) IndoorwayLogotype * _Nullable logotype;
- (nonnull instancetype)initWithUuid:(NSString * _Nonnull)uuid name:(NSString * _Nonnull)name logotype:(IndoorwayLogotype * _Nullable)logotype OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface IndoorwayPOIType (SWIFT_EXTENSION(IndoorwayKit))
@end

@class UIColor;

/// QR code scanner view
SWIFT_CLASS("_TtC12IndoorwayKit26IndoorwayQRCodeScannerView")
@interface IndoorwayQRCodeScannerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Method prepares and starts the QR code scanner
/// \param completion The completion handler that can contain error if preparation fails
///
- (void)startWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(NSError * _Nullable))completion;
/// Method stops QR code scanner
- (void)stop;
/// The border color of the QR code detection frame
@property (nonatomic, strong) UIColor * _Nonnull codeDetectionFrameViewBorderColor;
/// The border width of the QR code detection frame
@property (nonatomic) CGFloat codeDetectionFrameViewBorderWidth;
- (void)layoutSubviews;
@end


/// Indoorway user location annotation
SWIFT_CLASS("_TtC12IndoorwayKit21IndoorwayUserLocation")
@interface IndoorwayUserLocation : NSObject <IndoorwayAnnotation>
/// Returns nil if location is not determined yet
@property (nonatomic, readonly, strong) IndoorwayLatLon * _Nonnull coordinate;
/// The title to be displayed for the annotation
@property (nonatomic, copy) NSString * _Nullable title;
/// The subtitle to be displayed for the annotation
@property (nonatomic, copy) NSString * _Nullable subtitle;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Indoorway visitor sex
typedef SWIFT_ENUM(NSUInteger, IndoorwayVisitorSex) {
/// Undefined
  IndoorwayVisitorSexUndefined = 0,
/// Male
  IndoorwayVisitorSexMale = 1,
/// Female
  IndoorwayVisitorSexFemale = 2,
};


@interface NSError (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface UIBezierPath (SWIFT_EXTENSION(IndoorwayKit))
@end


@interface UIColor (SWIFT_EXTENSION(IndoorwayKit))
@end

#pragma clang diagnostic pop
