//
// Created by st007 on 19-2-1.
//
#include <iostream>
#include "CConcreteFlyweight.h"

CConcreteFlyweight::CConcreteFlyweight(std::string intrinsicState) :CFlyweight(intrinsicState){
    std::cout << "the CConcreteFlyweight constructor, " << intrinsicState << std::endl;

}

CConcreteFlyweight::~CConcreteFlyweight() {
    std::cout << "the CConcreteFlyweight destructor" << std::endl;
}

void CConcreteFlyweight::Operation(const std::string &extrinsicState) {
    std::cout << "the CConcreteFlyweight Operation" << "内 ["<<this->GetIntrinsicState()<<"] 外 [" << extrinsicState <<"]" <<std::endl;
}