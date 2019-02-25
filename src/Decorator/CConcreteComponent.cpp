//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CConcreteComponent.h"

CConcreteComponent::CConcreteComponent() {
    std::cout << "the CConcreteComponent constructor" << std::endl;
}

CConcreteComponent::~CConcreteComponent() {
    std::cout << "the CConcreteComponent destructor" << std::endl;
}

void CConcreteComponent::Operation() {
    std::cout << "the CConcreteComponent Operation" << std::endl;
}