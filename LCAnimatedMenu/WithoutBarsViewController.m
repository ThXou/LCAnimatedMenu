//
//  WithoutBarsViewController.m
//  LCAnimatedMenu
//
//  Created by ThXou on 12/12/13.
//  Copyright (c) 2013 ThXou. All rights reserved.
//

#import "WithoutBarsViewController.h"
#import "LCMenuItem.h"

@import MapKit;


@interface WithoutBarsViewController ()

@end


@implementation WithoutBarsViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UIImage *itemImage = [UIImage imageNamed:@"item.png"];
    ActionBlock actionBlock = ^(void)
    {
        [self performSegueWithIdentifier:@"ButtonPressed2" sender:nil];
    };
    
    
    LCMenuItem *item1 = [[LCMenuItem alloc] initWithImage:itemImage];
    item1.actionBlock = actionBlock;
    
    LCMenuItem *item2 = [[LCMenuItem alloc] initWithImage:itemImage withActionBlock:actionBlock];
    LCMenuItem *item3 = [[LCMenuItem alloc] initWithImage:itemImage withActionBlock:actionBlock];
    LCMenuItem *item4 = [[LCMenuItem alloc] initWithImage:itemImage withActionBlock:actionBlock];
    LCMenuItem *item5 = [[LCMenuItem alloc] initWithFrame:CGRectZero];
    LCMenuItem *item6 = [[LCMenuItem alloc] initWithFrame:CGRectZero];
    
    LCAnimatedMenu *menu = [[LCAnimatedMenu alloc] initWithItems:@[item1, item2, item3, item4, item5, item6]];
    menu.delegate = self;
    menu.containerView = self.view;
}



#pragma mark - LCAnimatedMenu Delegate

- (void)willDisplayAnimatedMenu:(LCAnimatedMenu *)animatedMenu
{
    NSLog(@"Menu will be displayed");
}


- (void)didDisplayAnimatedMenu:(LCAnimatedMenu *)animatedMenu
{
    NSLog(@"Menu is already displayed");
}


- (void)willHideAnimatedMenu:(LCAnimatedMenu *)animatedMenu
{
    NSLog(@"Menu is about to be hidden");
}



@end
