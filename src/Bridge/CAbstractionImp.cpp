//
// Created by st007 on 19-1-30.
//
#include <iostream>
#include "CAbstractionImp.h"

CAbstractionImp::CAbstractionImp() {
    std::cout << "the CAbstractionImp constructor" << std::endl;
}

CAbstractionImp::~CAbstractionImp() {
    std::cout << "the CAbstractionImp destructor" << std::endl;
}

/*
void CAbstractionImp::Operation() {
    std::cout << "CAbstractionImp operation" << std::endl;
}*/