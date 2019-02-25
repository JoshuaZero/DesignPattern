//
// Created by st007 on 19-1-28.
//
#include <iostream>
#include "CSingleton.h"


CSingleton* CSingleton::m_Instance = 0;
CSingleton::CSingleton(){
    std::cout << "the Singleton Instructor" << std::endl;
}

CSingleton* CSingleton::Instance() {
    if(m_Instance == NULL){
        m_Instance = new CSingleton();
    }
    return m_Instance;
}