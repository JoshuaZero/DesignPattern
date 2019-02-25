//
// Created by st007 on 19-2-11.
//
#include <iostream>
#include "CSubSystemA.h"

CSubSystemA::CSubSystemA() {
    std::cout << "the CSubSystemA instructor" << std::endl;
}

CSubSystemA::~CSubSystemA() {
    std::cout << "the CSubSystemA destructor" << std::endl;
}

void CSubSystemA::Operation() {
    std::cout << "the CSubSystemA Operation" << std::endl;
}