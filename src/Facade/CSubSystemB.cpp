//
// Created by st007 on 19-2-11.
//
#include <iostream>
#include "CSubSystemB.h"

CSubSystemB::CSubSystemB() {
    std::cout << "the CSubSystemB instructor" << std::endl;
}

CSubSystemB::~CSubSystemB() {
    std::cout << "the CSubSystemB destructor" << std::endl;
}

void CSubSystemB::Operation() {
    std::cout << "the CSubSystemB Operation" << std::endl;
}