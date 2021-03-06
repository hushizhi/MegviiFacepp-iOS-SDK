//
//  MGLicenseManager.h
//  MGBaseKit
//
//  Created by 张英堂 on 16/9/5.
//  Copyright © 2016年 megvii. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGLicenseManager : NSObject


+ (NSString*)getContextWithUUID:(NSString *)UUID
                      candidate:(NSArray <NSNumber *>*)APIName;

/**
 *  设置联网授权信息
 *
 *  @param license license
 *
 *  @return 成功或失败
 */
+ (BOOL)setLicense:(NSString*) license;



#pragma mark - 简单调用联网授权

/**
 联网获取授权信息

 @param UUID UUID
 @param APIName API name
 @param sdkType SDK 类型
 @param apiKey apiKey
 @param apiSecret apiSecret
 @param isChina 是否中国区
 @param complete 授权结束回调
 @return SessionTask
 */
+ (NSURLSessionTask *)takeLicenseFromNetwokrUUID:(NSString *)UUID
                                       candidate:(NSNumber *)APIName
                                         sdkType:(NSString *)sdkType
                                          apiKey:(NSString *)apiKey
                                       apiSecret:(NSString *)apiSecret
                                         isChina:(BOOL)isChina
                                          finish:(void(^)(bool License, NSError *error))complete;



@end
