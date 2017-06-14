//
//  MusicPlayer.h
//  Bridge
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseHeadphones.h"

@interface MusicPlayer : NSObject

@property(nonatomic, strong) BaseHeadphones *headPhones;

- (void) playMusic;

@end
