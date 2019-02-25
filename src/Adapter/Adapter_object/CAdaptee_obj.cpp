//
// Created by st007 on 19-1-31.
//
#include <iostream>
#include "CAdaptee_obj.h"

CAdaptee_obj::CAdaptee_obj() {
    std::cout << "CAdaptee_obj constructor" << std::endl;
}

CAdaptee_obj::~CAdaptee_obj() {
    std::cout << "CAdaptee_obj destructor" << std::endl;
}

void CAdaptee_obj::SpecificRequest() {
    std::cout << "CAdaptee_obj SpecificRequest" << std::endl;
}