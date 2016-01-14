//
//  ViewController.m
//  XConst-Manager
//
//  Created by 薛永伟 on 16/1/13.
//  Copyright © 2016年 薛永伟. All rights reserved.
//

#import "ViewController.h"
#import "Xconst/Xconst.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    XLog(@"程序启动完毕");
    // Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)on1CLick:(id)sender {
    XLog(@"点击个button");
}
- (IBAction)on2Click:(id)sender {
    NSString *strUrl = @"http://baidu.com/user/login";
    NSDictionary *param = @{@"token":@"token_we34fsfef883"};
    XHttpSendInfo(strUrl, param);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
