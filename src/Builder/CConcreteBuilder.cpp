//
// Created by st007 on 19-1-28.
//
#include <iostream>
#include "CBuilder.h"
#include "CProductBuild.h"
#include "CConcreteBuilder.h"

CConcreteBuilder::CConcreteBuilder() {
    std::cout << "the CConcreteBuilder Constructor" << std::endl;
}

CConcreteBuilder::~CConcreteBuilder() {
    std::cout << "the CConcreteBuilder Destructor" << std::endl;
}

void CConcreteBuilder::BuildPartA(const std::string &buildPara) {
    std::cout << "Setp1:BuildPartA." << buildPara << std::endl;
}

void CConcreteBuilder::BuildPartB(const std::string &buildPara) {
    std::cout << "Step2:BuildPartB." << buildPara << std::endl;
}

void CConcreteBuilder::BuildPartC(const std::string &buildPara) {
    std::cout << "Step3:BuildPartC." << buildPara << std::endl;
}

CProductBuild* CConcreteBuilder::GetProduct(){
    BuildPartA("pre-defined");
    BuildPartB("pre-defined");
    BuildPartC("pre-defined");
    return new CProductBuild();
}