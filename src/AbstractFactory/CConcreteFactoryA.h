//
// Created by st007 on 19-1-25.
//

#ifndef DESIGNPATTERN_CCONCRETEFACTORYA_H
#define DESIGNPATTERN_CCONCRETEFACTORYA_H


#include "CAbstractFactory.h"

class CConcreteFactoryA : public CAbstractFactory{
public:
    CConcreteFactoryA();
    ~CConcreteFactoryA();
    CAbstractProductA* CreateProductA();
    CAbstractProductB* CreateProductB();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEFACTORYA_H
