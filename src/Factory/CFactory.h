//
// Created by st007 on 19-1-25.
//

#ifndef DESIGNPATTERN_CFACTORY_H
#define DESIGNPATTERN_CFACTORY_H

#include "CProduct.h"

class CProduct;

class CFactory {
public:
    virtual ~CFactory() = 0;

    //Factory 中只是提供了对象创建的接口，
    //其实现将放在 Factory 的子类ConcreteFactory 中进行。
    //利用virtual 纯虚函数的特性：子类必须对父类的纯虚函数进行实现
    //延迟了子类的实例化
    virtual CProduct* CreateProduct() = 0;
protected:
    CFactory();

private:

};



#endif //DESIGNPATTERN_CFACTORY_H
