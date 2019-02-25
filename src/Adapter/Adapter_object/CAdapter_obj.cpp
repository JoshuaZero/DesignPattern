//
// Created by st007 on 19-1-31.
//
#include <iostream>
#include "CAdaptee_obj.h"
#include "CAdapter_obj.h"

CAdapter_obj::CAdapter_obj(CAdaptee_obj *ade) {
    std::cout << "CAdapter_obj constructor" << std::endl;
    m_ade = ade;
}

CAdapter_obj::~CAdapter_obj() {
    std::cout << "CAdapter_obj destructor" << std::endl;
}

void CAdapter_obj::Request() {
    std::cout << "CAdapter_obj Request" << std::endl;
    m_ade->SpecificRequest();
}