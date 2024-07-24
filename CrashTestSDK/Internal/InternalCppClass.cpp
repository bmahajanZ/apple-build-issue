//
//  InternalCppFile.cpp
//  CrashTestSDK
//
//  Created by Bhaskar Mahajan on 24/07/24.
//

#include "InternalCppClass.h"

#include <iostream>

void InternalCppClass::crashAppWithAbort() {
    abort();
}
 
void InternalCppClass::crashAppWithBadAccess() {
    int* ptr = nullptr;
    *(ptr + 10) = 10;
    int val = *(ptr + 10);
    
    std::cout << "Value is " << val << "\n";
}
