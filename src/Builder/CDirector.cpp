//
// Created by st007 on 19-1-28.
//
#include <iostream>
#include "CBuilder.h"
#include "CDirector.h"

CDirector::CDirector(CBuilder *bld) {
    m_bld = bld;
    std::cout << "the CDirector Constructor" << std::endl;
}

CDirector::~CDirector() {

}

void CDirector::Construct() {
    m_bld->BuildPartA("user-defined");
    m_bld->BuildPartB("user-defined");
    m_bld->BuildPartC("user-defined");
}
