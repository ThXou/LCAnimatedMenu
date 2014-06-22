
/*
 
 The MIT License (MIT)
 
 Copyright (c) 2013 Luis Cardenas. All rights reserved.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 
 This file is part of LCAnimatedMenu.
 Created by Luis Cardenas (ThXou)
 http://www.thxou.com
 
 */

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, LCAnimatedMenuPosition)
{
    LCAnimatedMenuPositionBottom,
    LCAnimatedMenuPositionTop
};


@class LCMenuItem;
@protocol LCAnimatedMenuDelegate;


@interface LCAnimatedMenu : UIView

@property (strong, nonatomic) UIView *containerView;
@property (strong, nonatomic) NSMutableArray *items;

@property (nonatomic) NSTimeInterval animationDuration;
@property (nonatomic) LCAnimatedMenuPosition position;
@property (nonatomic) BOOL showBelowTopBars;

@property (weak, nonatomic) id <LCAnimatedMenuDelegate> delegate;


- (instancetype)initWithItems:(NSArray *)items;


@end




@protocol LCAnimatedMenuDelegate <NSObject>

- (void)willHideAnimatedMenu:(LCAnimatedMenu *)animatedMenu;

- (void)willDisplayAnimatedMenu:(LCAnimatedMenu *)animatedMenu;
- (void)didDisplayAnimatedMenu:(LCAnimatedMenu *)animatedMenu;

@end
