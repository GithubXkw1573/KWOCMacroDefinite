//
//  KWOCMacro.h
//  Pods
//
//  Created by kaiwei Xu on 2019/7/24.
//

#ifndef KWOCMacro_h
#define KWOCMacro_h

//-------------------获取设备大小-------------------------
//获取屏幕 宽度、高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//是否是刘海屏（iPhoneX+）
#define IsNotchScreen (SCREEN_HEIGHT > 800 ? YES : NO)

//NavBar高度
#define NaviBarHeight (IsNotchScreen ? 88 : 64)

//StatusBar高度
#define StatusBarHeight (IsNotchScreen ? 44 : 20)

//Tabbar高度
#define TabBarHeight (IsNotchScreen ? 83 : 49)

//weakSelf
#define Weakify(type)  __weak typeof(type) weak##type = type;
#define Strongfy(type)  __strong typeof(type) type = weak##type

//userDefault 存取
#define disk_set(object, key)   \
({ \
NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];\
[defaults setObject:object forKey:key];  \
[defaults synchronize];\
})

#define disk_get(key)  [[NSUserDefaults standardUserDefaults] objectForKey:key]


#define disk_remove(_key)                                         \
({                                                                          \
NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];       \
[defaults removeObjectForKey:_key];                                     \
[defaults synchronize];                                                 \
})



#endif /* KWOCMacro_h */
