//
//  GameScene.m
//  Beat Em Up
//
//  Created by Abideen Onalaja on 01/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import "GameScene.h"



@implementation GameScene

-(id)init {
    if (self = [super init]) {
        _gameLayer = [GameLayer node];
        _hudlayer = [HudLayer node];
        [self addChild:_gameLayer z:0];
        [self addChild:_hudlayer z:1];
    }
    
    return self;
}

@end
