//
// Created by st007 on 19-2-11.
//

#ifndef DESIGNPATTERN_CCONCRETESUBJECT_H
#define DESIGNPATTERN_CCONCRETESUBJECT_H

#include "CSubject.h"

class CConcreteSubject : public CSubject{
public:
    CConcreteSubject();
    ~CConcreteSubject();
    void Request();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETESUBJECT_H
