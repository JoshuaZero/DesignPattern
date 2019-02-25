//
// Created by st007 on 19-1-25.
//

#ifndef DESIGNPATTERN_CCONCRETEFACTORY_H
#define DESIGNPATTERN_CCONCRETEFACTORY_H

#include "CProduct.h"
#include "CFactory.h"

class CConcreteFactory :public CFactory{
public:
    CConcreteFactory();
    ~CConcreteFactory();

    CProduct* CreateProduct();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEFACTORY_H
