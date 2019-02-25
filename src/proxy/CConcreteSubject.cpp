//
// Created by st007 on 19-2-11.
//
#include <iostream>
#include "CConcreteSubject.h"

CConcreteSubject::CConcreteSubject() {
    std::cout << "CConcreteSubject constructor" << std::endl;
}

CConcreteSubject::~CConcreteSubject() {
    std::cout << "the CConcreteSubject destructor" << std::endl;
}

void CConcreteSubject::Request() {
    std::cout << "the CConcreteSubject Request" << std::endl;
}