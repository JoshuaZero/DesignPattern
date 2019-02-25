//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CLeaf.h"

CLeaf::CLeaf() {
    std::cout << "the CLeaf constructor" << std::endl;
}

CLeaf::~CLeaf() {
    std::cout << "the CLeaf destructor" << std::endl;
}

void CLeaf::Operation() {
    std::cout << "the CLeaf Operation" << std::endl;
}
