//
// Created by st007 on 19-1-28.
//
#include <iostream>
#include "CConcreteProtoType.h"

CConcreteProtoType::CConcreteProtoType() {
    std::cout << "the CConcreteProtoType Constructor" << std::endl;
}

CConcreteProtoType::CConcreteProtoType(const CConcreteProtoType &cp) {
    std::cout << "the CConcreteProtoType copy." << std::endl;
}

CConcreteProtoType::~CConcreteProtoType() {
    std::cout << "the CConcreteProtoType Destructor" << std::endl;
}

CPrototype* CConcreteProtoType::Clone() const {
    std::cout << "the CConcreteProtoType Clone " << std::endl;
    return new CConcreteProtoType(*this);
}
