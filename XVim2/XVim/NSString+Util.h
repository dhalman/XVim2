//
//  NSString+Util.h
//  XVim2
//
//  Created by pebble8888 on 2017/09/20.
//  Copyright © 2017年 Shuichiro Suzuki. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Util)
+ (NSUInteger)lineWithPath:(NSString*)path pos:(NSUInteger)pos;
@end
