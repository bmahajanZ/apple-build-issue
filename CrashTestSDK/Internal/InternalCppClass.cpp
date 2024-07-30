//
//  InternalCppFile.cpp
//  CrashTestSDK
//
//  Created by Bhaskar Mahajan on 24/07/24.
//

#include "InternalCppClass.h"

#include <iostream>

const void InternalCppClass::someBigBusinnesLogicFunction1() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

const void InternalCppClass::someBigBusinnesLogicFunction2() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

const void InternalCppClass::someBigBusinnesLogicFunction3() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

const void InternalCppClass::someBigBusinnesLogicFunction4() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

const void InternalCppClass::someBigBusinnesLogicFunction5() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

const void InternalCppClass::someBigBusinnesLogicFunction6() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

const void InternalCppClass::someBigBusinnesLogicFunction7() const {
    std::cout << __PRETTY_FUNCTION__ << " Called\n";
}

void InternalCppClass::crashAppWithAbort() {
    someBigBusinnesLogicFunction1();
    someBigBusinnesLogicFunction2();
    someBigBusinnesLogicFunction3();
    someBigBusinnesLogicFunction4();
    someBigBusinnesLogicFunction5();
    someBigBusinnesLogicFunction6();
    someBigBusinnesLogicFunction7();
    bool crashProgram = true;
    if(crashProgram) {
        abort();
    }
}
 
void InternalCppClass::crashAppWithBadAccess() {
    int* ptr = nullptr;
    *(ptr + 10) = 10;
    int val = *(ptr + 10);
    
    std::cout << "Value is " << val << "\n";
}
