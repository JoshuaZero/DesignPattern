//
// Created by st007 on 19-2-11.
//

#ifndef DESIGNPATTERN_CFACADE_H
#define DESIGNPATTERN_CFACADE_H


#include "CSubSystemA.h"
#include "CSubSystemB.h"

class CFacade {
public:
    CFacade();
    ~CFacade();
    void OperationWrapper();
protected:

private:
    CSubSystemA* m_subA;
    CSubSystemB* m_subB;
};


#endif //DESIGNPATTERN_CFACADE_H
