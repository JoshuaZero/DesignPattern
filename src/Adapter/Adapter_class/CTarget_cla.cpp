//
// Created by st007 on 19-1-31.
//

#include <iostream>
#include "CTarget_cla.h"

CTarget_cla::CTarget_cla() {
    std::cout << "the CTarget_cla constructor" << std::endl;
}

CTarget_cla::~CTarget_cla() {
    std::cout << "the CTarget_cla destructor" << std::endl;
}

void CTarget_cla::Request() {
    std::cout << "CTarget_cla Request" << std::endl;
}