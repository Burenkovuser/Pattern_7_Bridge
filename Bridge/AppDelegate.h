//
//  AppDelegate.h
//  Bridge
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

/*
 Когда использовать?
 1. Вамсовершенноненужнасвязьмеждуабстракциейиреализацией.
 2. Собственно,какабстракциютакиимплементациюмогутнаследовать
 независимо.
 3. Вынехотитечтобыизменениявреализацииимеловлияниянаклиентский
 */

/*

 Есть наушники двух видов китайские и дорогие, и плеер у которого есть свойстов наушники. Наушники могут проигровать звуки и басы - дрогоие хорошо, а китайские посредственно. И  у плеера мы можем использовать как одни так и другие, т.к. есть свойство наушники.
*/
