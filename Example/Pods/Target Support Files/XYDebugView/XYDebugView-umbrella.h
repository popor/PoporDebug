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

#import "XYDebugCategory.h"
#import "XYDebugCloneView.h"
#import "XYdebugConst.h"
#import "XYDebugViewManager.h"
#import "XYDebugWindow.h"
#import "XYOverlayerView.h"

FOUNDATION_EXPORT double XYDebugViewVersionNumber;
FOUNDATION_EXPORT const unsigned char XYDebugViewVersionString[];

