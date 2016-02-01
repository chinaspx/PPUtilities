//
//  NSString+AutoSize.m
//  pengpeng
//
//  Created by jianwei.chen on 15/8/18.
//  Copyright (c) 2015年 AsiaInnovations. All rights reserved.
//

#import "NSString+AutoSize.h"
#import "NSAttributedString+AutoResizeSize.h"
@implementation NSString (AutoSize)

-(CGSize)sizeForFont:(UIFont *)font withMaxWidth:(CGFloat)maxWidth{
    return [self sizeForFont:font withMaxWidth:maxWidth textAligent:NSTextAlignmentLeft];
}

-(CGSize)sizeForFontSize:(CGFloat)fontSize withMaxWidth:(CGFloat)maxWidth{
    return [self sizeForFont:[UIFont systemFontOfSize:fontSize] withMaxWidth:maxWidth];
}

- (CGSize)sizeForFont:(UIFont *)font withMaxWidth:(CGFloat)maxWidth textAligent:(NSTextAlignment)textAlign{
    if ([self isEqualToString:@""]) {
        return CGSizeZero;
    }else{
        if (textAlign != NSTextAlignmentLeft) {//如果居左对齐，采用系统默认
            NSMutableParagraphStyle *style = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
            style.alignment = textAlign;
        }
        NSMutableAttributedString *mutAttStr = [[NSMutableAttributedString alloc] initWithString:self attributes:@{NSFontAttributeName:font}];
        return [mutAttStr sizeForAttributStringMaxWidth:maxWidth];
    }
}
@end
