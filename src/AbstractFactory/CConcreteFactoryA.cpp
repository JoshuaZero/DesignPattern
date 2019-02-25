//
// Created by st007 on 19-1-25.
//


#include <iostream>
#include "CProductA1.h"
#include "CProductB1.h"
#include "CConcreteFactoryA.h"


CConcreteFactoryA::CConcreteFactoryA() {

}

CConcreteFactoryA::~CConcreteFactoryA(){

}

CAbstractProductA* CConcreteFactoryA::CreateProductA(){
    std::cout << "create the CreateProductA1" << std::endl;
    return new CProductA1();
}

CAbstractProductB* CConcreteFactoryA::CreateProductB(){
    std::cout << "create the CCreateProductB1" << std::endl;
    return new CProductB1();
}