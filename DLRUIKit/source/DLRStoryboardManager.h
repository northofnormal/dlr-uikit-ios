//
//  DLRStoryboardManager.h
//  DLRUIKit
//
//  Created by Nate Walczak on 2/11/15.
//  Copyright (c) 2015 Detroit Labs, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DLRStoryboardManager : NSObject

+ (void)registerStoryboardName:(NSString *)name withStoryboardIdentifier:(NSString *)identifier;

+ (id)instantiateViewControllerWithIdentifier:(NSString *)identifier;

@end
