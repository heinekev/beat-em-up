//
//  HudLayer.h
//  Beat Em Up
//
//  Created by Abideen Onalaja on 01/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "SimpleDPad.h"

@interface HudLayer : CCLayer {
    
}

@property(nonatomic,weak)SimpleDPad *dPad;

@end
