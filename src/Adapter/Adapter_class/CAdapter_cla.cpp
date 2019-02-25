//
// Created by st007 on 19-1-31.
//
#include <iostream>
#include "CAdapter_cla.h"

CAdapter_cla::CAdapter_cla() {
    std::cout << "CAdapter_cla constructor " << std::endl;
}

CAdapter_cla::~CAdapter_cla() {
    std::cout << "CAdapter_cla destructor" << std::endl;
}

void CAdapter_cla::Request() {
    std::cout << "CAdapter_cla Request" << std::endl;
    this->SpecificRequest();
}