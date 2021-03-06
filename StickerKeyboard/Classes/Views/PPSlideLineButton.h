//
//  PPSlideLineButton.h
//  PPStickerKeyboard
//
//  Created by Vernon on 2018/1/14.
//  Copyright © 2018年 Vernon. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM (NSUInteger, PPSlideLineButtonPosition) {
    PPSlideLineButtonPositionNone,
    PPSlideLineButtonPositionLeft,
    PPSlideLineButtonPositionRight,
    PPSlideLineButtonPositionBoth,
};

@interface PPSlideLineButton : UIButton

@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, assign) CGFloat lineHeight;
@property (nonatomic, assign) PPSlideLineButtonPosition linePosition;

@end
