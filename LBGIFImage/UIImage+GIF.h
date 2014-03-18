//
//  UIImage+GIF.h
//  LBGIFImage
//
//  Created by Laurin Brandner on 06.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GIF)

+(UIImage*)animatedGIFNamed:(NSString*)name;
+(UIImage*)animatedGIFWithData:(NSData *)data;
+(UIImage*)animatedGIFWithData:(NSData *)data duration:(NSTimeInterval)duration;

-(UIImage*)animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
