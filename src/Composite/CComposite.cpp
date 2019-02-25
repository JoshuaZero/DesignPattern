//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include <vector>
#include "CComposite.h"

CComposite::CComposite() {
    std::cout << "the CComposite constructor" << std::endl;
}

CComposite::~CComposite() {
    std::cout << "the CComposite destrcutor" << std::endl;
}

void CComposite::Operation() {
    std::cout << "the CComposite Operation" << std::endl;
    std::vector<CComponent_pos*>::iterator comIter = comVec.begin();
    for (; comIter != comVec.end(); comIter++) {
        (*comIter)->Operation();
    }
}

void CComposite::Add(CComponent_pos *com) {
    std::cout << "the CComposite Add" << std::endl;
    comVec.push_back(com);
}

void CComposite::Remove(CComponent_pos *com) {
    std::cout << "the CComposite Remove" << std::endl;
    std::vector<CComponent_pos*>::iterator iter = comVec.begin();
    for (;iter != comVec.end(); iter++) {
         if(*iter == com){
             comVec.erase(iter);
             break;
         }
    }

}

CComponent_pos* CComposite::GetChild(int index) {
    std::cout << "the CComposite GetChild" << std::endl;
    return comVec[index];
}