//
//  PPMainColor.h
//  Pods
//
//  Created by jianwei.chen on 16/1/26.
//
//

#ifndef PPMainColor_h
#define PPMainColor_h

inline static UIColor* UTILITY_RGBA_HEXCOLOR(int rgbValue)
{
    return [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
                           green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
                            blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0];
}

///app主体颜色
#define DEFAULT_MAINBODY_COLOR UTILITY_RGBA_HEXCOLOR(0xff8000)//老版本色值，弃用。[UIColor colorWithRed:255.0/255.0 green:87.0/255.0 blue:34.0/255.0 alpha:1.0]

///app主体颜色的选择状态色
#define DEFAULT_MAINBODY_SELECTED_COLOR UTILITY_RGBA_HEXCOLOR(0xe66700)//老版本色值，弃用。[UIColor colorWithRed:255.0/255.0 green:152.0/255.0 blue:0.0/255.0 alpha:1.0]


#endif /* PPMainColor_h */
