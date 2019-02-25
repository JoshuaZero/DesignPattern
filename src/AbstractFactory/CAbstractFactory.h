//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CABSTRACTFACTORY_H
#define DESIGNPATTERN_CABSTRACTFACTORY_H

class CAbstractProductA;
class CAbstractProductB;

class CAbstractFactory {
public:
    virtual ~CAbstractFactory();
    virtual CAbstractProductA* CreateProductA() = 0;
    virtual CAbstractProductB* CreateProductB() = 0;

protected:
    CAbstractFactory();

private:

};


#endif //DESIGNPATTERN_CABSTRACTFACTORY_H
