//
// Created by st007 on 19-1-30.
//

#ifndef DESIGNPATTERN_CCONCRETEABSTRACTIONIMPB_H
#define DESIGNPATTERN_CCONCRETEABSTRACTIONIMPB_H

#include "CAbstractionImp.h"

class CConcreteAbstractionImpB :public CAbstractionImp{
public:
    CConcreteAbstractionImpB();
    ~CConcreteAbstractionImpB();
    virtual void Operation();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEABSTRACTIONIMPB_H
