//
// Created by st007 on 19-1-28.
//
#include <iostream>
#include "CProductPart.h"

CProductPart::CProductPart() {
    std::cout << "the CProductPart constructor" << std::endl;
}

CProductPart::~CProductPart() {
    std::cout << "the CProductPart Destructor" << std::endl;
}

CProductPart*CProductPart::BuilderPart() {
    std::cout << "the BuilderPart" << std::endl;

    return this;
}