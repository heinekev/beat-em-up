//
//  SimpleDPad.h
//  Beat Em Up
//
//  Created by Abideen Onalaja on 14/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class SimpleDPad;

@protocol SimpleDPadDelegate <NSObject>

-(void)simpleDPad:(SimpleDPad *)simpleDPad didChangeDirectionTo:(CGPoint)direction;
-(void)simpleDPad:(SimpleDPad *)simpleDPad isHoldingDirection:(CGPoint)direction;
-(void)simpleDPadTouchEnded:(SimpleDPad *)simpleDPad;

@end
    

@interface SimpleDPad : CCSprite <CCTargetedTouchDelegate> {
    
    float _radius;
    CGPoint _direction;
    
}

@property(nonatomic,weak)id <SimpleDPadDelegate> delegate;
@property(nonatomic,assign)BOOL isHeld;

+(id)dPadWithFile:(NSString *)fileName radius:(float)radius;
-(id)initWithFile:(NSString *)filename radius:(float)radius;

@end
