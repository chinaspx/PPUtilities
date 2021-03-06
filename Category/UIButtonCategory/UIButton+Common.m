//
//  UIButton+Common.m
//  pengpeng
//
//  Created by feng on 14/11/7.
//  Copyright (c) 2014年 AsiaInnovations. All rights reserved.
//

#import "UIButton+Common.h"

@implementation UIButton (Common)

- (void)setBackgroudImage:(NSString *)normal
             hightlighted:(NSString *)highlight
                 selected:(NSString *)select
                 disabled:(NSString *)disable
{
    [self setBackgroundImage:[UIImage imageNamed:normal] forState:UIControlStateNormal];
    [self setBackgroundImage:[UIImage imageNamed:highlight] forState:UIControlStateHighlighted];
    [self setBackgroundImage:[UIImage imageNamed:select] forState:UIControlStateSelected];
    [self setBackgroundImage:[UIImage imageNamed:disable] forState:UIControlStateDisabled];

}

- (void)setBackgroudImage:(NSString *)normal
             hightlighted:(NSString *)highlight
                 selected:(NSString *)select
{
    [self setBackgroudImage:normal hightlighted:highlight selected:select disabled:nil];
    
}

- (void)setBackgroudImage:(NSString *)normal
             hightlighted:(NSString *)highlight
{
    [self setBackgroudImage:normal hightlighted:highlight selected:nil disabled:nil];
}

- (void)setBackgroudCapImage:(NSString *)normal
                hightlighted:(NSString *)highlight
                    selected:(NSString *)select
                    disabled:(NSString *)disable
                  imageInset:(UIEdgeInsets)edgeInsets{

    [self setBackgroundImage:[[UIImage imageNamed:normal] resizableImageWithCapInsets:edgeInsets]
                    forState:UIControlStateNormal];
    [self setBackgroundImage:[[UIImage imageNamed:highlight] resizableImageWithCapInsets:edgeInsets]
                    forState:UIControlStateHighlighted];
    [self setBackgroundImage:[[UIImage imageNamed:select] resizableImageWithCapInsets:edgeInsets]
                    forState:UIControlStateSelected];
    [self setBackgroundImage:[[UIImage imageNamed:disable] resizableImageWithCapInsets:edgeInsets] forState:UIControlStateDisabled];
}

- (void)setBackgroudCapImage:(NSString *)normal
                hightlighted:(NSString *)highlight
                    selected:(NSString *)select
                    disabled:(NSString *)disable
{
    UIEdgeInsets edgeInsets = UIEdgeInsetsMake(5, 5, 5, 5);
    [self setBackgroudCapImage:normal hightlighted:highlight selected:select disabled:disable imageInset:edgeInsets];
    
}

- (void)setBackgroudCapImage:(NSString *)normal
             hightlighted:(NSString *)highlight
                 selected:(NSString *)select
{
    [self setBackgroudCapImage:normal hightlighted:highlight selected:select disabled:nil];
}

- (void)setBackgroudCapImage:(NSString *)normal
                hightlighted:(NSString *)highlight
{
    [self setBackgroudCapImage:normal hightlighted:highlight selected:nil disabled:nil];

}

- (void)setImage:(NSString *)normal
    hightlighted:(NSString *)highlight
        selected:(NSString *)select
        disabled:(NSString *)disable
{
    [self setImage:[UIImage imageNamed:normal] forState:UIControlStateNormal];
    [self setImage:[UIImage imageNamed:highlight] forState:UIControlStateHighlighted];
    [self setImage:[UIImage imageNamed:select] forState:UIControlStateSelected];
    [self setImage:[UIImage imageNamed:disable] forState:UIControlStateDisabled];
}

- (void)setImage:(NSString *)normal
    hightlighted:(NSString *)highlight
        selected:(NSString *)select
{
    [self setImage:normal hightlighted:highlight selected:select disabled:nil];
}

- (void)setImage:(NSString *)normal
    hightlighted:(NSString *)highlight
{
    [self setImage:normal hightlighted:nil selected:nil disabled:nil];
}

- (void)setTitle:(NSString *)title
     normalColor:(UIColor *)normal
hightlightedColor:(UIColor *)highlight
   selectedColor:(UIColor *)select
   disabledColor:(UIColor *)disable
{
    [self setTitle:title forState:UIControlStateNormal];
    [self setTitleColor:normal forState:UIControlStateNormal];
    [self setTitleColor:highlight forState:UIControlStateHighlighted];
    [self setTitleColor:select forState:UIControlStateSelected];
    [self setTitleColor:disable forState:UIControlStateDisabled];

}

- (void)setTitle:(NSString *)title
     normalColor:(UIColor *)normal
hightlightedColor:(UIColor *)highlight
   selectedColor:(UIColor *)select
{
    [self setTitle:title normalColor:normal hightlightedColor:highlight selectedColor:select disabledColor:nil];
}

- (void)setTitle:(NSString *)title
     normalColor:(UIColor *)normal
hightlightedColor:(UIColor *)highlight
{
    [self setTitle:title normalColor:normal hightlightedColor:highlight selectedColor:nil disabledColor:nil];
}

- (void)setTitle:(NSString *)title
     normalColor:(UIColor *)normal
{
    [self setTitle:title normalColor:normal hightlightedColor:nil selectedColor:nil disabledColor:nil];
}

- (void)addClickEventWithTarget:(id)target selector:(SEL)selector
{
    [self addTarget:target action:selector forControlEvents:UIControlEventTouchUpInside];
}


- (void)setAvailable:(BOOL)b
{
    if (self.userInteractionEnabled == b) {
        return;
    }
    if (b) {//可用
        self.titleLabel.alpha = 1.0;
        self.userInteractionEnabled = YES;
        
    } else {//不可用
        self.titleLabel.alpha = 0.3;
        self.userInteractionEnabled = NO;
    }
    
}

@end
