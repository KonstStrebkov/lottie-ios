//
//  LOTRenderGroup.h
//  Lottie
//
//  Created by brandon_withrow on 6/27/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import "LOTRenderNode.h"
#import "LOTRenderSettings.h"

@interface LOTRenderGroup : LOTRenderNode

- (instancetype _Nonnull)initWithInputNode:(LOTAnimatorNode * _Nullable)inputNode
                                  contents:(NSArray * _Nonnull)contents
                                   keyname:(NSString * _Nullable)keyname
                            renderSettings:(LOTRenderSettings * _Nullable)renderSettings;

@property (nonatomic, strong, readonly) CALayer * _Nonnull containerLayer;

@end


