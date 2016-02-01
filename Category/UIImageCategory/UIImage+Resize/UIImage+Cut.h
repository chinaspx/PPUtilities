//
//  UIImage+Cut.h
//  CalendarLib
//
//  Created by wang yepin on 13-4-18.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (Cut)

- (UIImage *)subImageInRect:(CGRect)rect;
- (UIImage *)scaleToSize:(CGSize)size;
- (UIImage *)scaleToFitSize:(CGSize)size;

- (UIImage *)imageScaleAspectFillFromTop:(CGSize)frameSize;

@end
