//
//  GameLayer.h
//  Beat Em Up
//
//  Created by Abideen Onalaja on 01/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Hero.h"
#import "SimpleDPad.h"
#import "HudLayer.h"

@interface GameLayer : CCLayer <SimpleDPadDelegate>{

    CCTMXTiledMap *_tileMap;
    CCSpriteBatchNode *_actors;
    Hero *_hero;
    
}
@property(nonatomic,weak)HudLayer *hud;
@property(nonatomic,strong)CCArray *robots;
@end
