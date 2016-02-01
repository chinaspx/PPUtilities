//
//  PPMacro.h
//  Pods
//
//  Created by jianwei.chen on 16/1/26.
//
//

#ifndef PPMacro_h
#define PPMacro_h

#import "PPDeviceMacro.h"
#import "PPPropertyMacro.h"
#import "PPMainColor.h"
#import "PPLogMacro.h"

#define KeyWindow       [[UIApplication sharedApplication] keyWindow]
#define MainWindow      [[[UIApplication sharedApplication] delegate] window]

#define JSONHasValidValue(dict,name) [dict objectForKey:name]&&![[dict objectForKey:name] isKindOfClass:[NSNull class]]


#define NSAssertMainThread() NSAssert([NSThread isMainThread], @"thread error")

#endif /* PPMacro_h */
