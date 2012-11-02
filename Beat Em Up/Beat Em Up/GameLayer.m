//
//  GameLayer.m
//  Beat Em Up
//
//  Created by Abideen Onalaja on 01/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import "GameLayer.h"


@implementation GameLayer

-(id)init {
    if (self = [super init]) {
        [self initTileMap];
        
        [[CCSpriteFrameCache sharedSpriteFrameCache] addSpriteFramesWithFile:@"pd_sprites.plist"];
        _actors = [CCSpriteBatchNode batchNodeWithFile:@"pd_sprites.pvr.ccz"];
        [_actors.texture setAliasTexParameters];
        [self addChild:_actors z:-5];
        [self initHero];
    }
    
    return self;
}

-(void)initTileMap {
    
    _tileMap = [CCTMXTiledMap tiledMapWithTMXFile:@"pd_tilemap.tmx"];
    
    for (CCTMXLayer *child in [_tileMap children]) {
        [[child texture] setAliasTexParameters];
    }
    
    [self addChild:_tileMap z:-6];
}

-(void)initHero {
    _hero = [Hero node];
    [_actors addChild:_hero];
    _hero.position = ccp(_hero.centerToSides, 80);
    _hero.desiredPosition = _hero.position;
    [_hero idle];
}

@end
