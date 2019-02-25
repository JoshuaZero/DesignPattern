//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CConcreteDecorator.h"

CConcreteDecorator::CConcreteDecorator(CComponent *com) :CDecorator(com){
    std::cout << "the CConcreteDecorator constructor" << std::endl;
}

CConcreteDecorator::~CConcreteDecorator() {
    std::cout << "the CConcreteDecorator destructor" << std::endl;
}

void CConcreteDecorator::Operation() {
    std::cout << "the CConcreteDecorator Operation" << std::endl;
    m_com->Operation();
    this->AddedBehavior();
}

void CConcreteDecorator::AddedBehavior() {
    std::cout << "the CConcreteDecorator AddedBehavior" << std::endl;
}