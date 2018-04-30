#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ACNetworkCache.h"
#import "ACNetworkHelper.h"
#import "ACLog.h"

FOUNDATION_EXPORT double ACHttpManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char ACHttpManagerVersionString[];

