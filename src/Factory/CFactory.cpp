//
// Created by st007 on 19-1-25.
//

#include <iostream>
#include "CFactory.h"

CFactory::~CFactory(){
    std::cout << "this is CFactory Destructor function" << std::endl;
}

CFactory::CFactory(){
    std::cout << " CFactory Instructor function " << std::endl;
}