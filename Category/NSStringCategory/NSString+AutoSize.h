//
//  NSString+AutoSize.h
//  pengpeng
//
//  Created by jianwei.chen on 15/8/18.
//  Copyright (c) 2015年 AsiaInnovations. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AutoSize)
///返回文字占用尺寸
- (CGSize)sizeForFont:(UIFont *)font withMaxWidth:(CGFloat)maxWidth;

- (CGSize)sizeForFontSize:(CGFloat)fontSize withMaxWidth:(CGFloat)maxWidth;

- (CGSize)sizeForFont:(UIFont *)font withMaxWidth:(CGFloat)maxWidth textAligent:(NSTextAlignment)textAlign;

@end
