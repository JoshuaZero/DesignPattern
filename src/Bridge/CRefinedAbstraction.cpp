//
// Created by st007 on 19-1-30.
//
#include <iostream>
#include "CAbstractionImp.h"
#include "CRefinedAbstraction.h"


CRefinedAbstraction::CRefinedAbstraction(CAbstractionImp *Imp){
    std::cout << "the CRefinedAbstraction constructor" << std::endl;
    m_imp = Imp;
}

CRefinedAbstraction::~CRefinedAbstraction(){
    std::cout << "the CRefinedAbstraction destructor" << std::endl;
}

void CRefinedAbstraction::Operation() {
    m_imp->Operation();
}