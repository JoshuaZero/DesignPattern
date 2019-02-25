//
// Created by st007 on 19-1-31.
//
#include <iostream>
#include "CAdaptee_cla.h"

CAdaptee_cla::CAdaptee_cla() {
    std::cout << "CAdaptee_cla constructor" << std::endl;
}

CAdaptee_cla::~CAdaptee_cla() {
    std::cout << "CAdaptee_cla destructor" << std::endl;
}

void CAdaptee_cla::SpecificRequest() {
    std::cout << "CAdaptee_cla SpeciaficRequest" << std::endl;
}