//
// Created by st007 on 19-1-25.
//
#include <iostream>
#include "CProductA2.h"
#include "CProductB2.h"
#include "CConcreteFactoryB.h"


CConcreteFactoryB::CConcreteFactoryB(){

}

CConcreteFactoryB::~CConcreteFactoryB(){

}

CAbstractProductA* CConcreteFactoryB::CreateProductA(){
    std::cout << "create the CCreateProductA2" << std::endl;
    return new CProductA2();
}

CAbstractProductB* CConcreteFactoryB::CreateProductB(){
    std::cout << "create the CCreateProductB2" << std::endl;
    return new CProductB2();
}