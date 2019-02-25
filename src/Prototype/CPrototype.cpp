//
// Created by st007 on 19-1-28.
//
#include <iostream>
#include "CPrototype.h"

CPrototype::CPrototype() {
    std::cout << "the CPrototype Constructor" << std::endl;
}

CPrototype::~CPrototype() {
    std::cout << "the CPrototype Destructor" << std::endl;
}

CPrototype* CPrototype::Clone() const {
    std::cout << "the CPrototype Clone" << std::endl;
    return NULL;
}
