//
//  PublicHeader.h
//  CrashTestSDK
//
//  Created by Bhaskar Mahajan on 24/07/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface PublicHeader : NSObject

-(void)crashAppWithAbort;
-(void)crashAppWithBadAccess;

@end

NS_ASSUME_NONNULL_END
