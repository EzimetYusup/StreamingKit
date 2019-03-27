//
//  STKMacro.h
//  StreamingKit
//
//  Created by Diego Stamigni on 20/03/2019.
//  Copyright © 2019 Thong Nguyen. All rights reserved.
//

#pragma once

#import <objc/runtime.h>

#if TARGET_OS_IPHONE
    #import <UIKit/UIKit.h>
    #define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v) \
        ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#endif

#define DEPLOYMENT_TARGET_HIGHER_THAN_10 TARGET_OS_WATCH || \
    TARGET_OS_TV || \
    (TARGET_OS_IOS &&__IPHONE_OS_VERSION_MIN_REQUIRED >= 100000) || \
    (!TARGET_OS_IPHONE && __MAC_OS_X_VERSION_MIN_ALLOWED >= 101200)

#define BASE_SDK_HIGHER_THAN_10 (TARGET_OS_WATCH || \
    TARGET_OS_TV || \
    (TARGET_OS_IOS &&__IPHONE_OS_VERSION_MAX_ALLOWED >= 100000) || \
    (!TARGET_OS_IPHONE && __MAC_OS_X_VERSION_MAX_ALLOWED >= 101200))

#define DEVICE_HIGHER_THAN_10 objc_getClass("NSDimension")
