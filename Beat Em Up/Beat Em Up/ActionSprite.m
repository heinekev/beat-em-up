//
//  ActionSprite.m
//  Beat Em Up
//
//  Created by Abideen Onalaja on 01/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import "ActionSprite.h"


@implementation ActionSprite

-(void)idle {
    if (_actionState != kActionStateIdle) {
        [self stopAllActions];
        [self runAction:_idleAction];
        _actionState = kActionStateIdle;
        _velocity = CGPointZero;
    }
}

-(void)attack {
    if(_actionState == kActionStateIdle
       || _actionState == kActionStateAttack
       || _actionState == kActionStateWalk) {
        [self stopAllActions];
        NSLog(@"_idleAction %@",_idleAction);
        [self runAction:_attackAction];
        _actionState = kActionStateAttack;
    }
}

@end
