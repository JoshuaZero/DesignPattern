//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CComponent.h"


CComponent::CComponent() {
    std::cout << "the CComponent constructor" << std::endl;
}

CComponent::~CComponent() {
    std::cout << "the CComponent destructor" << std::endl;
}

void CComponent::Operation() {
    std::cout << "the CComponent Operation" << std::endl;
}