//
//  NBUserDefaults.m
//  Nearby
//
//  Created by momo on 13-9-29.
//  Copyright (c) 2013年 vipui. All rights reserved.
//

#import "NSUserDefaults+Category.h"

@implementation NSUserDefaults (NBAdditions)

- (void)nb_setObject:(id)value forKey:(NSString *)defaultName;
{
    [self setObject:value forKey:defaultName];
    [self synchronize];
}

@end

