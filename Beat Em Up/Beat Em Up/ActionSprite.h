//
//  ActionSprite.h
//  Beat Em Up
//
//  Created by Abideen Onalaja on 01/11/2012.
//  Copyright 2012 Abideen Onalaja. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface ActionSprite : CCSprite {
    
}

// actions
@property(nonatomic, strong)id idleAction;
@property(nonatomic, strong)id attackAction;
@property(nonatomic, strong)id walkAction;
@property(nonatomic, strong)id hurtAction;
@property(nonatomic, strong)id knockedOutAction;

//states
@property(nonatomic, assign)ActionState actionState;

//attributes
@property(nonatomic, assign)float walkSpeed;
@property(nonatomic, assign)float hitPoints;
@property(nonatomic, assign)float damage;

//movment
@property(nonatomic,assign)CGPoint velocity;
@property(nonatomic, assign)CGPoint desiredPosition;

//measurements
@property(nonatomic,assign)float centerToSides;
@property(nonatomic, assign)float centerToBottom;

//actionMethods
-(void)idle;
-(void)attack;
-(void)hurtWithDamage:(float)damage;
-(void)knockout;
-(void)walkWithDirection:(CGPoint)direction;

// scheduled methods
-(void)update:(ccTime)dt;



@end
