//
// Created by st007 on 19-1-31.
//
#include <iostream>
#include "CTarget_obj.h"

CTarget_obj::CTarget_obj() {
    std::cout << "CTarget_obj constructor" << std::endl;
}

CTarget_obj::~CTarget_obj() {
    std::cout << "CTarget_obj destructor" << std::endl;
}

void CTarget_obj::Request() {
    std::cout << "CTarget_obj  Request" << std::endl;
}