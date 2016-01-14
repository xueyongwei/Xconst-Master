//
//  Xconst.h
//  XConst-Manager
//
//  Created by 薛永伟 on 16/1/13.
//  Copyright © 2016年 薛永伟. All rights reserved.
//

#ifndef Xconst_h
#define Xconst_h


//全局通用常量定义,结尾请不要使用；号

//ios系统版本
#define ios8x [[[UIDevice currentDevice] systemVersion] floatValue] >=8.0f
#define ios7x ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0f) && ([[[UIDevice currentDevice] systemVersion] floatValue] < 8.0f)
#define ios6x [[[UIDevice currentDevice] systemVersion] floatValue] < 7.0f
#define iosNot6x [[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0f

//iPhone型号
#define iphone4x_3_5 ([UIScreen mainScreen].bounds.size.height==480.0f)

#define iphone5x_4_0 ([UIScreen mainScreen].bounds.size.height==568.0f)

#define iphone6_4_7 ([UIScreen mainScreen].bounds.size.height==667.0f)

#define iphone6Plus_5_5 ([UIScreen mainScreen].bounds.size.height==736.0f || [UIScreen mainScreen].bounds.size.height==414.0f)

//屏幕宽高
#define kScreenW [[UIScreen mainScreen] bounds].size.width
#define kScreenH [[UIScreen mainScreen] bounds].size.height

//屏幕frame,bounds,size
#define kScreenFrame [UIScreen mainScreen].bounds
#define kScreenBounds [UIScreen mainScreen].bounds
#define kScreenSize [UIScreen mainScreen].bounds.size

//颜色rgb hexColor
#define rgb(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0f]
#define rgba(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define hexColor(colorV) [UIColor colorWithHexColorString:@#colorV]
#define hexColorAlpha(colorV,a) [UIColor colorWithHexColorString:@#colorV alpha:a];


#define StringFromInteger(i) [NSString stringWithFormat:@"%@",@(i)]

//格式化打印日志
#define XLog(fmt, ...) NSLog((@"\n\n=======================%s方法-[%d]行=======================\n" fmt), __FUNCTION__,__LINE__, ##__VA_ARGS__);

//网络请求前后打印信息
#define XHttpSendInfo(urlStr,param) XLog(@"发起请求链接:%@ \n 参数:%@",urlStr,param);
#define XHttpRspInfo(urlStr,param) XLog(@"网络请求收到回应:%@",[NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableContainers error:nil]);





#endif /* Xconst_h */
