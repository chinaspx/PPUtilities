//
//  NBUserDefaults.h
//  Nearby
//
//  Created by momo on 13-9-29.
//  Copyright (c) 2013年 asiaInnovations. All rights reserved.
//

#import <Foundation/Foundation.h>

#define Key_Login_Mobile                        @"curloginmobile"


//现在是应用程序级别的时间，每个用户都用，随时更新覆盖
#define Key_feed_server_current_time            @"feed_server_current_time"
//
#define Key_feed_game_session_id                @"feed_game_session_id"
#define Key_feed_game_rid                       @"feed_game_rid"

#define Key_feed_loaduserAction_success            @"loaduserAction_success"

@interface NSUserDefaults (NBAdditions)
// 设置并保存
- (void)nb_setObject:(id)value forKey:(NSString *)defaultName;
@end

