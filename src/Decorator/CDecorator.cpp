//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CDecorator.h"

CDecorator::CDecorator(CComponent *com) {
    std::cout << "the CDecorator constructor" << std::endl;
    this->m_com = com;
}

CDecorator::~CDecorator() {
    std::cout << "the CDecorator destructor" << std::endl;
    delete m_com;
}

void CDecorator::Operation() {
    std::cout << "the CDecorator Operation" << std::endl;
}