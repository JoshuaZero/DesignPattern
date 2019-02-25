//
// Created by st007 on 19-1-25.
//

#ifndef DESIGNPATTERN_CCONCRETEFACTORYB_H
#define DESIGNPATTERN_CCONCRETEFACTORYB_H


#include "CAbstractFactory.h"

class CConcreteFactoryB : public CAbstractFactory{
public:
    CConcreteFactoryB();
    ~CConcreteFactoryB();
    CAbstractProductA* CreateProductA();
    CAbstractProductB* CreateProductB();
protected:


private:

};


#endif //DESIGNPATTERN_CCONCRETEFACTORYB_H
