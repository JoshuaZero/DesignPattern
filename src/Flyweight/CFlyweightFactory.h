//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CFLYWEIGHTFACTORY_H
#define DESIGNPATTERN_CFLYWEIGHTFACTORY_H


#include <vector>
#include "CFlyweight.h"


class CFlyweightFactory {
public:
    CFlyweightFactory();
    ~CFlyweightFactory();
    CFlyweight* GetFlyweight(const std::string& key);
protected:

private:
    std::vector<CFlyweight*> m_fly;
};


#endif //DESIGNPATTERN_CFLYWEIGHTFACTORY_H
