//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CCONCRETECOMPONENT_H
#define DESIGNPATTERN_CCONCRETECOMPONENT_H

#include "CComponent.h"
class CConcreteComponent :public CComponent{
public:
    CConcreteComponent();
    ~CConcreteComponent();
    void Operation();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETECOMPONENT_H
