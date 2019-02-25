//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CCONCRETEDECORATOR_H
#define DESIGNPATTERN_CCONCRETEDECORATOR_H

#include "CDecorator.h"
class CConcreteDecorator :public CDecorator{
public:
    CConcreteDecorator(CComponent* com);
    ~CConcreteDecorator();
    void Operation();
    void AddedBehavior();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEDECORATOR_H
