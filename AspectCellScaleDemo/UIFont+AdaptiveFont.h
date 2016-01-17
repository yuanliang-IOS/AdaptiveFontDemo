//
//  UIFont+AdaptiveFont.h
//  AspectCellScaleDemo
//
//  Created by 冰点 on 16/1/16.
//  Copyright © 2016年 冰点. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (AdaptiveFont)

+ (void)hook;
+ (UIFont *)hook_fontWithName:(NSString *)fontName size:(CGFloat)fontSize;

@end