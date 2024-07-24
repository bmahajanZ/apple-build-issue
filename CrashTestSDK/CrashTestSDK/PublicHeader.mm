//
//  PublicHeader.m
//  CrashTestSDK
//
//  Created by Bhaskar Mahajan on 24/07/24.
//

#import "PublicHeader.h"

#include "InternalCppClass.h"


@implementation PublicHeader
- (void)crashAppWithAbort {
    InternalCppClass crashObj;
    crashObj.crashAppWithAbort();
}

- (void)crashAppWithBadAccess {
    InternalCppClass crashObj;
    crashObj.crashAppWithBadAccess();
}
@end
