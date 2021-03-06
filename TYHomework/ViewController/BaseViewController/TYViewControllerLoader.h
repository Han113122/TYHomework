//
//  TYViewControllerLoader.h
//  TYHomework
//
//  Created by taoYe on 15/3/2.
//  Copyright (c) 2015年 RenYuXian. All rights reserved.
//

#import "TYObject.h"
#import <UIKit/UIKit.h>


@class TYDrawViewController, TYCheckNoteViewController, TYAudioViewController, TYWirteNoteViewController, TYHomeViewController;
@interface TYViewControllerLoader : TYObject

+ (void)loadResgiterEntry;

+ (void)loadMainEntry;

+ (void)loadWelcomeViewController;

+ (void)layout;

+ (TYDrawViewController *)drawViewController;

+ (TYCheckNoteViewController *)checkNoteViewController;

+ (TYAudioViewController *)audioViewController;

+ (TYWirteNoteViewController *)wirteNoteViewController;

+ (TYHomeViewController *)homeViewController;

+ (UIStoryboard *)welcomeStoryboard;

+ (UIStoryboard *)homeStoryboard;

+ (UIStoryboard *)drawStoryboard;

+ (UIStoryboard *)videoStoryboard;

+ (UIStoryboard *)registerStoryboard;

+ (UIStoryboard *)noteStoryboard;

@end
