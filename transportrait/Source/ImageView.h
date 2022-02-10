//
//  ImageView.h
//  transportrait
//
//  Created by Xia Mingjie on 13-5-12.
//  Copyright (c) 2013年 Mingjie Xia. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol ImageViewDelegate <NSObject>

- (void)didOpenNewImage;

@end

@interface ImageView : NSImageView

@property (weak) id<ImageViewDelegate> delegate;

@end
