//
// Created by st007 on 19-2-11.
//
#include <iostream>
#include "CProxy.h"

CProxy::CProxy() {
    std::cout << "the CProxy constructor" << std::endl;
}

CProxy::CProxy(CSubject *sub) {
    std::cout << "the CProxy constructor with CSubject" << std::endl;
    m_sub = sub;
}

CProxy::~CProxy() {
    std::cout << "the CProxy destructor " << std::endl;
}

void CProxy::Request() {
    std::cout << "the CProxy request..." << std::endl;
    m_sub->Request();
}