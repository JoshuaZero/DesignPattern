//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CDECORATOR_H
#define DESIGNPATTERN_CDECORATOR_H


#include "CComponent.h"

class CDecorator : public CComponent{
public:
    virtual ~CDecorator();
    CDecorator(CComponent* com);
    void Operation();
protected:
    CComponent* m_com;
private:

};


#endif //DESIGNPATTERN_CDECORATOR_H
