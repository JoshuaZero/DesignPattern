//
// Created by st007 on 19-1-30.
//

#ifndef DESIGNPATTERN_CCONCRETEABSTRACTIONIMPA_H
#define DESIGNPATTERN_CCONCRETEABSTRACTIONIMPA_H

#include "CAbstractionImp.h"

class CConcreteAbstractionImpA :public CAbstractionImp{
public:
    CConcreteAbstractionImpA();
    ~CConcreteAbstractionImpA();
    virtual void Operation();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEABSTRACTIONIMPA_H
