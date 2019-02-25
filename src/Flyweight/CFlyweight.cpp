//
// Created by st007 on 19-2-1.
//

#include <iostream>
#include "CFlyweight.h"

CFlyweight::CFlyweight(std::string intrinsicState) {
    std::cout << "the CFlyweight constructor" << std::endl;
    this->m_intrinsicState = intrinsicState;
}

CFlyweight::~CFlyweight() {
    std::cout << "the CFlyweight destructor" << std::endl;
}

void CFlyweight::Operation(const std::string &extrinsicState) {
    std::cout << "the CFlyweight Operation " << std::endl;
}

std::string CFlyweight::GetIntrinsicState() {
    return this->m_intrinsicState;
}


