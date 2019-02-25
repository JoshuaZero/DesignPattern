//
// Created by st007 on 19-1-25.
//

#include <iostream>
#include "CProduct.h"
#include "CConcreteProduct.h"
#include "CConcreteFactory.h"


CConcreteFactory::CConcreteFactory() {
    std::cout << "CConcreteFactory class" << std::endl;
}

CConcreteFactory::~CConcreteFactory() {
    std::cout << "Destruct CConcreteFactory class" << std::endl;
}

CProduct* CConcreteFactory::CreateProduct(){
    std::cout << "use the object create interface create" << std::endl;
    return new CConcreteProduct();
}