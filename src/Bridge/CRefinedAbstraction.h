//
// Created by st007 on 19-1-30.
//

#ifndef DESIGNPATTERN_CREFINEDABSTRACTION_H
#define DESIGNPATTERN_CREFINEDABSTRACTION_H

#include "CAbstraction.h"

class CAbstractionImp;

class CRefinedAbstraction :public CAbstraction{
public:
    CRefinedAbstraction(CAbstractionImp *Imp);
    ~CRefinedAbstraction();
    void Operation();
protected:

private:
    CAbstractionImp* m_imp;
};


#endif //DESIGNPATTERN_CREFINEDABSTRACTION_H
