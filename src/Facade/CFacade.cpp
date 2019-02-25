//
// Created by st007 on 19-2-11.
//
#include <iostream>
#include "CFacade.h"

CFacade::CFacade() {
    std::cout << "the CFacade instructor" << std::endl;
    this->m_subA = new CSubSystemA();
    this->m_subB = new CSubSystemB();
}

CFacade::~CFacade() {
    std::cout << "the CFacade destructor" << std::endl;
    delete m_subA;
    delete m_subB;
}

void CFacade::OperationWrapper() {
    std::cout << "the CFacade OperationWrapper" <<std::endl;
    this->m_subA->Operation();
    this->m_subB->Operation();
}
