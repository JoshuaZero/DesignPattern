//
// Created by st007 on 19-2-1.
//

#include <iostream>
#include "CConcreteFlyweight.h"
#include "CFlyweightFactory.h"

CFlyweightFactory::CFlyweightFactory() {
    std::cout << "the CFlyweightFactory constructor" << std::endl;
}

CFlyweightFactory::~CFlyweightFactory() {
    std::cout << "the CFlyweightFactory destructor" << std::endl;
}

CFlyweight* CFlyweightFactory::GetFlyweight(const std::string &key) {
    std::cout << "the CFlyweightFactory GetFlyweight" << std::endl;
    std::vector<CFlyweight*>::iterator it = m_fly.begin();
    for (; it != m_fly.end(); ++it) {
        if((*it)->GetIntrinsicState() == key){
            std::cout << "already created by users..." << std::endl;
            return *it;
        }
    }

    //没有找到，创建一个新的
    CFlyweight* fn = new CConcreteFlyweight(key);
    m_fly.push_back(fn);
    return fn;
}