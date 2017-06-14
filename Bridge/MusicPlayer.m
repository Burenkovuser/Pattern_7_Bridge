//
//  MusicPlayer.m
//  Bridge
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "MusicPlayer.h"

@implementation MusicPlayer

- (void)playMusic
{
    [self.headPhones playBassSound];
    [self.headPhones playSimpleSound];
}

@end
