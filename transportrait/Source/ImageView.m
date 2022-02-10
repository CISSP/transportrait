//
//  ImageView.m
//  transportrait
//
//  Created by Xia Mingjie on 13-5-12.
//  Copyright (c) 2013年 Mingjie Xia. All rights reserved.
//

#import "ImageView.h"

@implementation ImageView

- (void)concludeDragOperation:(id<NSDraggingInfo>)sender
{
	// Notify delegate that a new image has been set by a drag operation.
	[super concludeDragOperation:sender];
	[self.delegate didOpenNewImage];
}

@end
