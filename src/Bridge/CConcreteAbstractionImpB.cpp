//
// Created by st007 on 19-1-30.
//
#include <iostream>
#include "CConcreteAbstractionImpB.h"

CConcreteAbstractionImpB::CConcreteAbstractionImpB() {
    std::cout << "the CConcreteAbstractionImpB constructor" << std::endl;
}

CConcreteAbstractionImpB::~CConcreteAbstractionImpB() {
    std::cout << "the CConcreteAbstractionImpB destructor" << std::endl;
}

void CConcreteAbstractionImpB::Operation() {
    std::cout << "the CConcreteAbstractionImpB Operation" << std::endl;
}