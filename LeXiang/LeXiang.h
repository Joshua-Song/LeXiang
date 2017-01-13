//
//  LeXiang.h
//  Pods
//
//  Created by Joshua.song on 17/1/12.
//
//

#import <Foundation/Foundation.h>

/*!
 *  @brief 用户登录回调闭包
 *
 *  @param userId   用户ID
 *  @param userName 用户名
 *  @param sign     签名
 */
typedef void(^LoginResult)(NSString *userId, NSString *userName, NSString *sign);

@interface LeXiang : NSObject

+ (void)startWithGameId:(NSString *)gameId packetId:(NSString *)packetId isTest:(BOOL)isTest loginResult:(LoginResult)loginResult;

@end
