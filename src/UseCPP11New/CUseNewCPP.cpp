//
// Created by st007 on 19-3-8.
//

#include <iostream>
#include "CUseNewCPP.h"


CUseNewCPP::CUseNewCPP() {
    std::cout << "construct:" << ++m_contstructCnt << std::endl;
}

CUseNewCPP::CUseNewCPP(const CUseNewCPP & cst) {
    std::cout << "copy construct:" << ++m_copyConstructCnt << std::endl;
}

CUseNewCPP::~CUseNewCPP() {
    std::cout << "destruct:" << ++m_destructCnt << std::endl;
}
