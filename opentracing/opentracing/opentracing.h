//
//  opentracing.h
//  opentracing
//
//  Created by David Messing on 4/17/18.
//  Copyright © 2018 Under Armour, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for opentracing.
FOUNDATION_EXPORT double opentracingVersionNumber;

//! Project version string for opentracing.
FOUNDATION_EXPORT const unsigned char opentracingVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <opentracing/PublicHeader.h>
#import <opentracing/OTTracer.h>
#import <opentracing/OTSpanContext.h>
#import <opentracing/OTSpan.h>
#import <opentracing/OTNoop.h>
#import <opentracing/OTGlobal.h>
#import <opentracing/OTReference.h>
#import <opentracing/OTVersion.h>

