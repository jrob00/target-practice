//
//  Bullet.h
//  target-practice
//
//  Created by Jason Roberts on 3/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Bullet : CCNode {
    
    NSString *theBaseImage; // theBaseImage = baseImage
    CCSprite *bulletSprite;
    
    int counter;
}

@property (readonly, nonatomic) CCSprite* bulletSprite;

+(id) createBullet:(NSString*)baseImage;
-(id) initWithOurOwnProperties:(NSString*) baseImage;

-(void) startToMoveBulletDown;


@end
