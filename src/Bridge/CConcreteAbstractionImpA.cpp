//
// Created by st007 on 19-1-30.
//
#include <iostream>
#include "CConcreteAbstractionImpA.h"

CConcreteAbstractionImpA::CConcreteAbstractionImpA() {
    std::cout << "the CConcreteAbstractionImpA constructor" << std::endl;
}

CConcreteAbstractionImpA::~CConcreteAbstractionImpA() {
    std::cout << "the CConcreteAbstractionImpA destructor" << std::endl;
}

void CConcreteAbstractionImpA::Operation() {
    std::cout << "CConcreteAbstractionImpA Operation " << std::endl;
}