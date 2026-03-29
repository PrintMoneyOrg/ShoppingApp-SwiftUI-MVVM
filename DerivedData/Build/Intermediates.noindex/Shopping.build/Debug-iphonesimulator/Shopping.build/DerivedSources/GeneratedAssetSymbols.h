#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The resource bundle ID.
static NSString * const ACBundleID AC_SWIFT_PRIVATE = @"com.berkaysancar.Shopping";

/// The "AppOrange" asset catalog color resource.
static NSString * const ACColorNameAppOrange AC_SWIFT_PRIVATE = @"AppOrange";

/// The "GrayBackground" asset catalog color resource.
static NSString * const ACColorNameGrayBackground AC_SWIFT_PRIVATE = @"GrayBackground";

#undef AC_SWIFT_PRIVATE
