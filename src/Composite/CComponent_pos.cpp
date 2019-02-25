//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CComponent_pos.h"

CComponent_pos::CComponent_pos() {
    std::cout << "the CComponent_pos constructor" << std::endl;
}

CComponent_pos::~CComponent_pos() {
    std::cout << "the CComponent_pos destructor" << std::endl;
}

void CComponent_pos::Add(const CComponent_pos &) {

}

void CComponent_pos::Remove(const CComponent_pos &) {

}

CComponent_pos* CComponent_pos::GetChild(int) {
    return nullptr;
}