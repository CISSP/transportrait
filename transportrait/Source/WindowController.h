//
//  WindowController.h
//  transportrait
//
//  Created by Xia Mingjie on 13-5-12.
//  Copyright (c) 2013年 Mingjie Xia. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ImageView.h"

@interface WindowController : NSWindowController <ImageViewDelegate, NSWindowDelegate>

@property BOOL isAbstract;
@property BOOL isAbstractable;

- (void)resumeActivity;
- (void)openDocument:(id)sender;

@end
